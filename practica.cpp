#include <iostream>
using namespace std;

int main(){
     //declarar variables
     int opciones,opcpelis,e1,e2,e3,e4,numero;
     float p1,p2,p3,p4,t1,t2,t3,t4;
     char salida;
        
     //mostrar al usuario de que se trata el menu
      cout<<"Este es un menu multiples opciones"<<endl<<endl;
      cout<<"En las cuales son:"<<endl;
      cout<<"Opcion 1: cartelera cinematografica y compra de entradas"<<endl;
      cout<<"Opcion 2: tabla de multiplicar del numero que solicite "<<endl;
      cout<<"Opcion 3: calculador de notas para promedios estudiantiles"<<endl;
      cout<<"Opcion 4: salir del programa"<<endl<<endl;
      cout<<"Que opcion deseas tomar el dia de hoy?"<<endl;
      cout<<"precione 1 para la primera opcion"<<endl;
      cout<<"presione 2 para la segunda opcion"<<endl;
      cout<<"Presione 3 para la tercera opcion"<<endl;
      cout<<"Presione 4 para la cuarta opcion"<<endl;
      cin>> opciones;

      

        switch (opciones)
        {
            case 1:
             cout<<"Bienvenido, esta es la cartelera de peliculas de esta semana"<<endl<<endl;
             cout<<"stitch ---- precio: $4.75"<<endl;
             cout<<"Spider-man lejos de casa ---- precio: $3.85"<<endl;
             cout<<"75 Sombras de grey ---- precio: $4.25 "<<endl;
             cout<<"Destino final 5 ---- precio: $5.00"<<endl<<endl;
             cout<<"Que pelicula deseas ver?"<<endl;
             cout<<"precione 1 para ver stitch"<<endl;
             cout<<"presione 2 para ver Spider-man lejos de casa"<<endl;
             cout<<"Presione 3 para ver 75 sombras de grey"<<endl;
             cout<<"Presione 4 para ver Destino final 5"<<endl;
             cin>> opcpelis;
             switch (opcpelis)
             {
             case 1:
                cout<<"tu pelicula elegida fue stitch"<<endl<<endl;
                cout<<"Cuantas entrada deseas comprar?"<<endl;
                cin>>e1;
                p1=4.75*e1;
                cout<<"su total a pagar es: $"<<p1;
                break;
             case 2:
                cout<<"tu pelicula elegida fue Spider-man lejos de casa"<<endl<<endl;
                cout<<"Cuantas entrada deseas comprar?"<<endl;
                cin>>e2;
                p2=3.85*e2;
                cout<<"su total a pagar es: $"<<p2;
                break;
             case 3:
                cout<<"tu pelicula elegida fue 75 Sombras de grey"<<endl<<endl;
                cout<<"Cuantas entrada deseas comprar?"<<endl;
                cin>>e3;
                p3=4.25*e3;
                cout<<"su total a pagar es: $"<<p3;
                break;
             case 4:
                cout<<"tu pelicula elegida fue Destino final 5"<<endl<<endl;
                cout<<"Cuantas entrada deseas comprar?"<<endl;
                cin>>e4;
                p4=5.00*e4;
                cout<<"su total a pagar es: $"<<p4<<endl;
                break;
             
             
             default :
             cout<<"noooo";
                break;
             }
             cout<<"deseas volver al menu?"<<endl;
             cout<<"digite s para salir"<<endl;
             cin>> salida;
             
        while(salida!='s');

            
            case 2:
            cout<<" A que numero le deseas crear la tabla de multiplicar?"<<endl;
            cout<<" ingrese un numero "<<endl;
            cin>>numero;
            cout<<"Tabla de jmultilicar del numero :"<<numero<<endl<<endl;

            for(int i=1;i<=10;i++){
                cout<< numero << "x" <<i <<"=" <<numero*i<<endl;
            }
            break;
            case 3:
            cout<<"Calculador de notas para promedio"<<endl<<endl;
            cout<<"ingrese";

            break;
            case 4:
            cout<<"Gracias por visitarnos, ten un lindo dia😊";
            return 0;
            break;

         default:
            break;
        }

    





    return 0;
}