#include <iostream>
using namespace std;

int main(){
    //declarar variables
    int n,primo,modulo;

    primo=1;
    cout<< " ingrese un numero "<<endl;
    cin>> n;
     for( int i=n-1; i>=2; i=i-1){
        modulo= n%i;

        if( modulo==0){
            cout<<"no es primo ";

            
        
        primo=0;
        break;}
     }
        
        if( primo ==1){
            cout<<" es primo ";
        }



    return 0;
}