#include <iostream>

float  suma(float numerouno, float numerodos){
    float resultado=0;
    resultado = numerouno + numerodos;
    return resultado;

}
    float resta(float numerouno, float numerodos){

        float resultado =0;
        resultado = numerouno - numerodos;
        return resultado;
        }
             float multiplicacion(float numerouno, float numerodos){
                float resultado=0;
                resultado = numerouno * numerodos;
                return resultado;
            }
                float division(float numerouno, float numerodos){
                    float resultado=0;
                    if(numerodos>numerouno&&numerodos==0){
                        resultado = 5000;
                        return resultado;
                    }else{resultado = numerouno / numerodos;
                    return resultado;}
                    
                }

using namespace std;

int main(){
    //declarar variables
    float numero1,numero2,sumatoria=0,numero3=7,numero4=56,sumatoria2=0,resultadoresta=0,resultadomultiplicacion=0,resultadodivision=0;

    cout<<" Opeaciones "<<endl;
    cout<<"Ingrese el primer numero"<<endl;
    cin>> numero1;

    cout<<"Ingrese el segundo numero "<<endl;
    cin>> numero2;

    sumatoria = suma(numero1,numero2);

    sumatoria2 =suma(numero3, numero4);

    resultadoresta = resta(numero1 , numero2);

    resultadomultiplicacion = multiplicacion(numero1,numero2);

    resultadodivision = division(numero1,numero2);
    if(resultadodivision==5000){
        cout<<" division invalida "<<endl;
    }

    cout<<" El resultado de la suma es: "<<sumatoria<<endl;
    cout<<" El resultado de la segunda suma es: "<<sumatoria2<<endl;
    cout<<" El resultado de la resta es: "<<resultadoresta<<endl;
    cout<<" El resultado de la multiplicacion es: "<<resultadomultiplicacion<<endl;
    cout<<" El resultado de la division es: "<<resultadodivision<<endl;

     



return 0;
}