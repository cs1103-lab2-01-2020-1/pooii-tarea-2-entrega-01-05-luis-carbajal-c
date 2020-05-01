#ifndef TAREA_3_TSTACK_H
#define TAREA_3_TSTACK_H

#include "../lib.h"

template <typename T>
class TStack {
private:
    vector<T> data;
public:
    TStack();
    TStack(vector<T> data);
    TStack(const TStack<T> &other);
    void push(T value);
    void pop();
    int size();
    T top();
    bool empty();
    void print_data();
};

#endif //TAREA_3_TSTACK_H
