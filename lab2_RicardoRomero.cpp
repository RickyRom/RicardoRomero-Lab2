#include <iostream>
#include <math.h>

#define PI 3.1415

using namespace std;

void Ejer1();
void Ejer2();
void Ejer3();
void Dimensiones(double,double,double);
bool primeN(int);

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
	return opcion;
}

void Ejer1() {
	int impar = -1;
	int n, total;
	cout<<"Ingrese el numero de cubos: "<<endl;
	cin>> n;

	for(int i = 1; i <= n; i++){
		impar = impar + 2;
		total = impar;
		cout<<i<<"^3"<<"="<<impar<<"+";
		
		for(int j = 2; j <= i; j++){
			impar = impar + 2;
			total = total + impar;
			if(j != n) {
			cout<<impar<<"+";
			}else{
				cout<<impar;
			}			
		}
		cout<<"="<<total<<endl;
		 
	}
	

}

void Ejer2() {
    double x, y, z, area, s;
	double x2, y2, z2;
	cout<<"Ingrese el primer lado: "<<endl;
	cin>> x;
	cout<<"Ingrese el segundo lado: "<<endl;
	cin>> y;
	cout<<"Ingrese el tercer lado: "<<endl;
	cin>> z;

	if(y*y + z*z == x*x || x*x + z*z == y*y || x*x + y*y == z*z) {
		
		s = (x+y+z) / 2;

		area = sqrt(s * (s-x) * (s-y) * (s-z));

		cout<<"El Area es: "<<area<<endl;
		cout<<"Es un Triangulo Rectangulo"<<endl;

		double angleB = 0;
		double angleA = 0;
		double angleC = 0;

		angleB = acos(((y*y*-1) + x*x + z*z) / (2*x*z));
		angleA = asin(((x*x*-1) + y*y + z*z) / (2*y*z));
		angleC = 180 - angleA - angleB;
		angleB = (angleB * 180) / PI;
		angleC = (angleC * 180) / PI;
		angleA = (angleA * 180) / PI;
		cout<<"Angulo A:"<<angleA<<endl;
		cout<<"Angulo B:"<<angleB<<endl;
		cout<<"Angulo C:"<<angleC<<endl;

	}else{
		cout<<"No es un triangulo rectangulo"<<endl;
	}
}

void Ejer3() {
    int n, d, r, sum;
	int cont = 0;
    cout<<"Ingrese el Numero n: "<<endl;
    cin>> n;
    
    for(int i = 1; i <= n+1; i++){
        if(n % i == 0) {
            cout<<i<<endl;

			r = (i + n) / i;
			d = r + n;

			if(primeN(r)) {
				cont += r;
				cout<<"Hizo la Suma"<<endl;
			}
        }
    }
	cout<<"La Suma es de: "<< cont <<endl;
}

bool primeN(int primo) {
	for(int i = 2; i < primo; i++){
		if(primo % 2 != 0) {
			return true;
		}else{
			return false;
		}
	}
}