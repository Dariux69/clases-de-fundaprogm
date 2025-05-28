#include <iostream>
using namespace std;

int main(){
    //declaraqcion de variables
    string nombres="";
    float horas,precio_hora,salario;
    string datos;

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
    }else {
        salario= 44*precio_hora + 1.5 *precio_hora *(horas-44);
    }
        //salida de datos
        cout<< " su nombre es: "<<nombres<<endl;
        cout<<" su salario es : "<<salario<<endl;

        //preguntar al usuario si deasea otros datos o terminar su procedimiento


        cout<<"quieres realizar otro calculo? " <<endl <<"reponde yes si asi lo deseas" <<endl<<"responde no si deseas terminar el calculo"<<endl;
        cin>> datos;

        while(datos =="yes"){
            
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
                 }else {
                      salario= 44*precio_hora + 1.5 *precio_hora *(horas-44);}
                            
                //salida de datos
                     cout<< " su nombre es: "<<nombres<<endl;
                     cout<<" su salario es : "<<salario<<endl;

                     cout<<" quieres realizar otro calculo? "<<endl;
                     cin>> datos;


        }
        cout<<" gracias por elegirnos, Feliz Dia ";
        return 0;
}