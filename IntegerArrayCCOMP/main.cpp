#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    IntegerArray a(2);
    a.print();
    cout<<"Constructor copia: "<<endl;
    if(true) {
        IntegerArray b = a;
        b.print();
    }
    cout<<"Modificando: "<<endl;
    a.insert(3,2);
    a.push_back(1);
    a.remove(0);
    a.remove_back();
    cout<<"Tamanio del arreglo: "<<a.getSize()<<endl;
    cout<<a.isEmpty()<<endl;
    cout<<a.isFull()<<endl;
    a.print();
}
