

#include <iostream>
#include <array>

using namespace std;

//7.32
int maximoRecursivo(array<int, 10> mayor,int i=0,int may){
    if (i == mayor.size()){
        return;
    }
    else{
        if (mayor[i]>may){
            return maximoRecursivo(mayor,i+1,mayor[i]);
        }
        else{
            return maximoRecursivo(mayor,i+1,may);
        }
    }
}

int main()
{
    array <int, 10> mayor{ 1,2,3,4,5,6,7,8,9,10 };
    cout << maximoRecursivo(mayor, mayor[0]);
}