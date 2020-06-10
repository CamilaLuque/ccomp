#ifndef _INTEGERARRAY_H_
#define _INTEGERARRAY_H_

#include <iostream>

using namespace std;

class IntegerArray {

    private:
        int size;
        int current;
        int *arr;
    public:
        IntegerArray(int size) {
            this->current = 0;
            this->size = size;
            this->arr = new int[this->size];
        }

        IntegerArray(const IntegerArray &o) {
            this->size = o.size;
            this->arr = new int[this->size];
            for(int i = 0; i < this->size; i++)
                this->arr[i] = o.arr[i];
        }

        void insert(int elem, int pos) {
            size++;
            int *tmp = new int[size];
            for (int i=0; i<pos; i++){
                 tmp[i]=arr[i];
            }
            tmp[pos-1] = elem;
            for (int j=pos+1; j<size-1; j++){
                 tmp[j]=arr[j-1];
            }
            delete[]arr;
            arr = tmp;
            current+=1;
        }

        void push_back(int elem) {
            size ++;
            int *tmp = new int[size];
            for (int i=0; i<size-1; i++){
                tmp[i]=arr[i];
            }
            tmp[size-1] = elem;
            delete[]arr;
            arr = tmp;
            current+=1;
        }

        void remove_back() {
            --size;
            int *tmp = new int[size];
            for (int i=0; i<size; i++){
                tmp[i]=arr[i];
            }
            delete[]arr;
            arr=tmp;
            current-=1;
        }

        void remove(int pos) {
            --size;
            int *tmp = new int[size];
            for (int i=0; i<pos; i++){
                 tmp[i]=arr[i];
            }
            for (int j=pos+1; j<size; j++){
                 tmp[j]=arr[j];
            }
            delete[]arr;
            arr=tmp;
            current-=1;
        }

        int getSize() const {
            return size;
        }

        bool isEmpty () const {
            if (current==0){
                return true;
            }
            return false;
        }

        bool isFull() const {
            if (current==size){
                return true;
            }
            return false;
        }

        void print() const {
            cout << "[ ";
            for(int i = 0; i < this->size; i++)
                cout << arr[i] << "  ";
            cout << "]" << endl;
        }

        ~IntegerArray() {
            delete[] arr;
        }

};

#endif
