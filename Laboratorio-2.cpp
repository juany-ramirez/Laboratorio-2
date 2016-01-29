#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
	int resp = 2;

	while(resp == 2){	
	int menu;
	cout << "Ingrese opcion del menu: "<< endl << "1. Euler" << endl << "2. Triangulo"<< endl;
	cin >> menu;
	if(menu == 1){
		int num;
		cout <<  "Ingrese numero: ";
		cin >> num;
		double acumulador=0;
		int numerador, denominador;
		for(int i=0; i<15; i++){
			numerador = pow(num,i);
			denominador = 1;
			for(int k=1; k<=i ; k++){
				denominador *= k;
			}
			cout << "Denominador - " << denominador << endl;
			acumulador = (numerador*1.0/denominador*1.0)+acumulador;
		}
	       	cout << "El resultado es: "<< acumulador << endl;
	}else if(menu == 2){
		double x1, x2, x3;
		double y1, y2, y3;
		
		cout << "Ingrese las 1 coordenadas: "<< endl << "X: ";
		cin >> x1;
		cout << "Y: ";
		cin >> y1;
		cout << "Ingrese las 2 coordenadas: "<< endl << "X2: ";
		cin >> x2;
		
		 
		
	}
	cout << "Desea salir: " << endl << "1. Si " << endl <<"2. No" <<endl;
	cin >> resp;
	}
	return 0;
}
