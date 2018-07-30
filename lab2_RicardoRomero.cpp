#include <iostream>

using namespace std;

void Ejer1();
void Ejer2();
void Ejer3();

int main(){

    int opcion;
	do{
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Ejercicio 1"<<endl;
		cout<<"2.- Ejercicio 2"<<endl;
		cout<<"3.- Ejercicio 3"<<endl;
		cout<<"4.- Salir"<<endl;
		cin>> opcion;
		switch (opcion) {

			case 1:{
				Ejer1();
			}
				break;
			case 2:{
				Ejer2();
			}
				break;
			case 3:{
				Ejer3();
			}
				break;
            case 4:
                cout<<"Tenga Buen Dia"<<endl;
                break;    	
		}
	}while(opcion != 4);
	return 0;
}

void Ejer1() {
	cout<<"Nada Todavia"<<endl;

}

void Ejer2() {
    cout<<"Nada Todavia"<<endl;
}

void Ejer3() {
    int n, d, r;
    cout<<"Ingrese el Numero n: "<<endl;
    cin>> n;
    
    for(int i = 1; i <= n+1; i++){
        if(n % i == 0) {
            cout<<i<<endl;

			r = (i + n) / i;
			d = r + n;
        }
    }
	cout<<"La Suma es de: "<< d <<endl;
}