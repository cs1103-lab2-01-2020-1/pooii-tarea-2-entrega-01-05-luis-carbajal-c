#ifndef TAREA_3_STACK_H
#define TAREA_3_STACK_H

#include "../lib.h"

class Stack {
private:
    int* _data;
    int _size;
    int _capacity;
public:
    Stack();
    Stack(int value, int size);
    Stack(const Stack &other);
    void push(int value);
    void pop();
    int size();
    int top();
    bool empty();
    void print_data();
};

#endif //TAREA_3_STACK_H
