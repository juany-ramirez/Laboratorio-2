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
		for(int i=0; i<=15; i++){
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
		double x1, x2, x3, x4;
		double y1, y2, y3, y4;
		cout << "Ingrese las 1' coordenadas: "<< endl << "X: ";
		cin >> x1;
		cout << "Y1: ";
		cin >> y1;
		cout << "Ingrese las 2' coordenadas: "<< endl << "X2: ";
		cin >> x2;
                cout << "Y2: ";
                cin >> y2;
		cout << "Ingrese las 3' coordenadas: " << endl << "X3: ";
		cin >> x3;
		cout << "Y3: ";
		cin >> y3;
		cout << "Ingrese las 4' coordenadas: " << endl << "X4: ";
		cin >> x4;
		cout << "Y4: ";
		cin >> y4;

		bool error = false;
		if((y1==y2 && y2==y3) || (y2==y3 &&  y3==y4) || (y4==y1 && y1==y2)){
			error = true;
		}
                if((x1==x2 && x2==x3) || (x2==x3 &&  x3==x4) || (x4==x1 && x1==x2)){
                	error = true;
                }
		if((x1 == x2 && y1==y2)||(x2==x3 && y2==y3)|| (x3==x4 && y3 ==y4) || (x1==x4 && y1==y3)){
			error = true;
		}
		if (error){
			cout<< "Error en las coordenas, reingresar datos";
	                cout << "Ingrese las 1' coordenadas: "<< endl << "X: ";
	                cin >> x1;
	                cout << "Y1: ";
	                cin >> y1;
	                cout << "Ingrese las 2' coordenadas: "<< endl << "X2: ";
	                cin >> x2;
	                cout << "Y2: ";
	                cin >> y2;
	                cout << "Ingrese las 3' coordenadas: " << endl << "X3: ";
	                cin >> x3;
	                cout << "Y3: ";
	                cin >> y3;
	                cout << "Ingrese las 4' coordenadas: " << endl << "X4: ";
	                cin >> x4;
	                cout << "Y4: ";
	                cin >> y4;
				
		}

		double d1 = sqrt((pow((x2-x1),2)+pow((y2-y1),2))),
                d2 = sqrt((pow((x3-x2),2)+pow((y3-y2),2))),
                d3 = sqrt((pow((x3-x1),2)+pow((y3-y1),2))),
                d4 = sqrt((pow((x4-x1),2)+pow((y4-y1),2))),
                d5 = sqrt((pow((x4-x3),2)+pow((y4-y3),2)));
        	cout << "Los puntos son: "<< endl;
		cout << "( " << x1 << ", " << y1 <<" )" <<endl;
		cout << "( " << x1 << ", " << y1 <<" )" <<endl;
                cout << "( " << x1 << ", " << y1 <<" )" <<endl;
                cout << "( " << x1 << ", " << y1 <<" )" <<endl;		
		
		cout << "Las distancias del plano son"<< endl;
		cout << "Distancia 1: " << d1 <<endl;
                cout << "Distancia 2: " << d2 <<endl;
                cout << "Distancia 3: " << d3 <<endl;
                cout << "Distancia 4: " << d4 <<endl;
                cout << "Distancia 5: " << d5 <<endl;
		
		cout << "El semiperimetro del primer triangulo es: " << (d1+d2+d3)/2 << endl;
		cout << "El semiperimetro del segundo triangulo es: "<< (d3+d4+d5)/2 << endl;
		cout << "EL perimetro del primer triangulo es: " << (d1+d2+d3)<< endl;
		cout << "El perimetro del segundo triangulo es: " << (d3+d4+d5) << endl;

		double cuadrado1, cuadrado2, s1, s2;
		s1 = (d1+d2+d3)/2;
		s2 = (d3+d4+d5)/2;
		
		cuadrado1 = sqrt(s1*(s1-d1)*(s1-d2)*(s1-d3));
		cuadrado2 = sqrt(s2*(s2-d3)*(s2-d4)*(s2-d5));
		cout << endl;
		cout << "Triangulo 1: "<< endl;	
	        cout << "Altura #1: " << 2/d1*cuadrado1<<endl; 
                cout << "Altura #2: " << 2/d2*cuadrado1<< endl;
                cout << "Altura #3: " << 2/d3*cuadrado1<< endl << endl;
		cout << "Triangulo 2: "<< endl;
                cout << "Altura #1: " << 2/d3*cuadrado2<< endl;
                cout << "Altura #2: " << 2/d4*cuadrado2<< endl;
                cout << "Altura #3: " << 2/d5*cuadrado2<< endl;
	

		cout << "El area del primer triangulo es: " << cuadrado1 << endl;
		cout << "El area del segundo triangulo es: " << cuadrado2 << endl;

		  
		
	}
	cout << "Desea salir: " << endl << "1. Si " << endl <<"2. No" <<endl;
	cin >> resp;

	}
	return 0;
}
