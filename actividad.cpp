#include "iostream"
using namespace std;

int main(){
    //declaracion de variables
    float nota1,nota2,nota3,promedio,sumaTotal;

    cout<<"ingrese primer nota";
    cin>> nota1;
    cout<<"ingrese segunda nota";
    cin>> nota2;
    cout<<"ingrese tercera nota";
    cin>> nota3;
    //si el promedio es mayor a 6 es aprobado y si es menor no es aprobado
      promedio = nota1 + nota2 + nota3;
      promedio = sumaTotal/3;
      cout<<" tu promedio es: "<<promedio;
       if(promedio>=6){

        cout<<"CONGRATULATIONS, HAS APROBADO :)";
       } else{
        cout<<"SUERTE PARA LA PROXIMA";
       }







return 0;
}