# include <iostream>
using namespace std;

int main(){

     //declarar variables
     string nombre;
     char salida;
     int opcion;
     //hacer menu
     cout<<" Menu para el almuerzo "<<endl;
        do{
             cout<<" Opciones de platos "<<endl;
             cout<<" Debe de selecionar un platillo "<<endl;
             cout<<" Comida China, digate 1."<<endl;
             cout<<" Comida Mexicana, digite 2. "<<endl;
             cout<<" Diferentes platillos de Pollo, digite 3."<<endl;
             cout<<" Comida Italiana, digite 4."<<endl;
             cout<<" Lo nuestro pupusas, digite 5 "<<endl;
             cout<<" salir, digite 6."<<endl;
             cin>> opcion;

                switch(opcion){

                    case 1:
                        cout<<" Patas de pollo "<<endl;
                        cout<<" sopa de murcielago"<<endl;
                    break;
                    case 2:
                        cout<<" Tacos de nopal "<<endl;
                        cout<<" Cgapulines tostados "<<endl;
                    break; 
                    case 3:
                        cout<<" Pollo a la bigcola"<<endl;
                        cout<<" Menudos en salsa"<<endl;
                    break;
                    case 4:
                        cout<<" Ensalada de monte"<<endl;
                        cout<<" Lasagna de garrobo"<<endl;
                    break;
                    case 5:
                        cout<<" pupusas de iguana "<<endl;
                        cout<<" pupusas de pacaya"<<endl;
                    break;
                    case 6:
                        cout<<" gracias"<<endl;
                        return 0;
                    break;

                    default:
                        cout<<"noooo"<<endl;
                    break;

                
                }
                cout<<" Deseas salir, digite s, para salir "<<endl;
                cin>>salida;

         } while(salida !='s');
                    cout<<"Gracias por tu compra, Feliz Dia ";

    return 0;
}