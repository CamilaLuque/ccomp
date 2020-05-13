#include <iostream>

using namespace std;
void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void InvertirIterativa(int arr[], int tam) {
    int mitad = tam / 2;
    for (int i = 0; i < mitad; i++, tam--) {
        Swap(arr[i], arr[tam - 1]);
    }
}

void InvertirRecursiva(int arr[], int tam, int i = 0) {
    if (i >= tam) {
        return;
    }
    Swap(arr[i], arr[tam - 1]);
    InvertirRecursiva(arr, tam - 1, i + 1);
}

int main()
{
    int arr[] = { 1,2,3,4,5 };
    /*InvertirIterativa(arr,3);
    for(int i=0;i<3;i++){
     cout<<arr[i]<<endl;
    }
    cout<<endl;*/
    InvertirRecursiva(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}
