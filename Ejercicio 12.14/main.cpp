#include <iostream>
#include <vector>
#include "Empleado.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main()
{
    PieceWorker t1("Milagros","Sanchez",15,20);
    HourlyWorker t2("Maria","Ponce",39,20);
    vector<Empleado*>vec={&t1,&t2};

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]->obtenerInformacion();
        cout<<vec[i]->ObtenerSueldo()<<endl;
    }

    return 0;
}
