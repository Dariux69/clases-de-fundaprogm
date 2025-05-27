#include <iostream>
using namespace std;

int main(){
    //declaraqcion de variables
    string newdatos,nombres="";
    float horas,precio_hora,salario;
    char s;
    int datos;

        //pedir datos del usuario
        cout<<" ingresar nombre "<<endl;
        cin>> nombres;
        cout<<"ingresar horas"<<endl;
        cin >>horas;
        cout<<"ingrese su precio de hora "<<endl;
        cin>> precio_hora;

        //declarar las condiciones
    if(horas<=44){
        salario=horas*precio_hora;
    }else if(horas>44){
        salario= 44*precio_hora + 1.5 *precio_hora *(horas-44);
    }
        //salida de datos
        cout<< nombres<<endl;
        cout<<salario<<endl;

        cout<<"quieres otros datos? "<<endl;
        cin>> datos;
        cout<<" si quieres pon una s "<<endl;
        cin>> s;
    


    return 0;
}