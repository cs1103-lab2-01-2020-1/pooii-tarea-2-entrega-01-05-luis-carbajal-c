#include "Stack.h"

Stack::Stack() {
    _size = 0;
    _capacity = 1;
    _data = new int[_capacity];
}

Stack::Stack(int value, int size) {
    _size = size;
    _capacity = size;
    _data = new int[_capacity];
    for (int i = 0; i < _size; ++i) {
        _data[i] = value;
    }
}

Stack::Stack(const Stack &other) {
    this->_size = other._size;
    this->_capacity = other._capacity;
    this->_data = new int[_capacity];
    for (int i = 0; i < _size; ++i) {
        this->_data[i] = other._data[i];
    }
}

void Stack::push(int value) {
    if (_size == _capacity) {
        //duplicar capacidad
        int* temp = new int[_capacity * 2];
        for (int i = 0; i < _size; ++i) {
            temp[i] = _data[i];
        }
        delete[](_data);
        _data = temp;
    }
    _data[_size] = value;
    _size++;
}

void Stack::pop() {
    int* temp = new int[_capacity];
    for (int i = 0; i < _size - 1; ++i) {
        temp[i] = _data[i];
    }
    delete[](_data);
    _data = temp;
    _size--;
}

int Stack::size() {
    return _size;
}

int Stack::top() {
    return _data[_size - 1];
}

bool Stack::empty() {
    return (_size == 0);
}

void Stack::print_data() {
    cout << "[";
    for (int i = 0; i < _size; ++i) {
        cout << _data[i];
        if (i != _size - 1) cout << ", ";
    }
    cout << "]" << endl;
}