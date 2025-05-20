#include <iostream>
using namespace std;

int main (){

    //declarar variables//
    char dia;
    cout << "ingresar letra ";
    cin>> dia;

    switch(dia){
        case 'a':
        cout<< dia<< "feliz empiezo de semana";
        break;
        case 'b':
        cout<< dia << "es martes de tacos";
        break;
        case 'c' :
        cout <<dia << "miercoles de futbol";
        break;
        case 'd' :
        cout << dia << "jueves de labo";
        break;
        case 'e' :
        cout << dia << "feliz fin de semana";
        break;
        case 'f':
        cout << dia << "sabado de champion league";
        break;
        case 'g' :
        cout << dia << "domingo de asados";
        break;
        default :
        cout << dia << "datos incorrecto";
        

    }





return 0 ;
}