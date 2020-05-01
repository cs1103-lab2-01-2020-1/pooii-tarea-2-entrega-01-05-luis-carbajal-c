#include "TStack.h"

template <typename T>
TStack<T>::TStack() {}

template <typename T>
TStack<T>::TStack(vector<T> data) {
    this->data = data;
}

template <typename T>
TStack<T>::TStack(const TStack &other) {
    data = other.data;
}

template <typename T>
void TStack<T>::push(T value) {
    data.push_back(value);
}

template <typename T>
void TStack<T>::pop() {
    data.pop_back();
}

template <typename T>
int TStack<T>::size() {
    return data.size();
}

template <typename T>
T TStack<T>::top() {
    return data[data.size()-1];
}

template <typename T>
bool TStack<T>::empty() {
    return data.empty();
}

template <typename T>
void TStack<T>::print_data() {
    cout << "[";
    for (int i = 0; i < data.size(); ++i) {
        cout << data[i];
        if (i != data.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}