#include "ejercicios.h"

void ejercicio1() {
    cout << "Ejercio 1:" << endl;
    menu();
}

void ejercicio2() {
    cout << "Ejercio 2:" << endl;
    Stack stack1;
    Stack stack2(1, 5);
    Stack stack3(stack2);
    cout << stack1.empty() << endl;
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.print_data(); cout << stack1.size() << endl; cout << stack1.top() << endl;
    stack2.print_data();
    stack3.pop();
    stack3.pop();
    stack3.print_data(); cout << stack3.size() << endl << endl;
}

void ejercicio3() {
    cout << "Ejercio 3:" << endl;
    int array1[] = {15, 4, 9};
    string array2[] = {"utec", "cs", "poo"};
    int array3[] = {7, 43, 1, 10};
    int n1 = sizeof(array1)/sizeof(array1[0]);
    int n2 = sizeof(array2)/sizeof(array2[0]);
    int n3 = sizeof(array3)/sizeof(array3[0]);
    list<int> lista1(array1, array1 + n1);
    list<string> lista2(array2, array2 + n2);
    list<int> lista3(array3, array3 + n3);
    cout << "lista1: "; print_list(lista1);
    cout << "lista2: "; print_list(lista2);
    cout << "lista3: "; print_list(lista3);
    lista1.sort();
    cout << "lista1.sort(): "; print_list(lista1);
    lista2.sort();
    cout << "lista2.sort(): "; print_list(lista2);
    lista3.sort();
    cout << "lista3.sort(): "; print_list(lista3);
    lista1.merge(lista3);
    cout << "lista1.merge(lista3): "; print_list(lista1);
    cout << "binary_search(lista2.begin(), lista2.end(), utec): ";
    cout << binary_search(lista2.begin(), lista2.end(), "utec") << endl;
    auto low = lower_bound(lista1.begin(), lista1.end(), 5);
    cout << "*(lower_bound(lista1.begin(), lista1.end(), 5)): " <<*low << endl << endl;
}

void ejercicio4() {
    cout << "Ejercio 4:" << endl;
    vector<int> v = {1, 2, 3, 4};
    TStack<int> stack1(v);
    TStack<char> stack2;
    TStack<float> stack3;
    stack2.push('a');
    stack2.push('b');
    stack1.pop();
    stack1.print_data();
    cout << "size: " << stack1.size() << endl;
    cout << "top: " << stack1.top() << endl;
    stack2.print_data();
    cout << "size: " << stack2.size() << endl;
    cout << "top: " << stack2.top() << endl;
    stack3.print_data();
    cout << "size: " << stack3.size() << endl;
    cout << "empty: " << stack3.empty() << endl;
}
