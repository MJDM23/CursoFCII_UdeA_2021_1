#include <iostream>
#include <cmath>

using namespace std;

double calc_prom(double datos[], int l){ //Para calcular el promedio, se le entrega un arreglo y una longitud de arreglo
	double suma = 0; 
	
	for(int i = 0; i < l; i++){ //Se define Suma de (dato_i) de 0 a l
		suma += datos[i];
		}
		
	double prom= suma / l; //Se define el promedio
	return prom;
	}

double varianza(double datos[], int l){ //Para calcular la varianza, se le entrega un arreglo y una longitud de arreglo
	double sum = 0;
	double prom = calc_prom(datos, l);
	
	for(int i = 0; i < l; i++){ // Se define Suma de (dato_i - promedio)^2 de 0 a l
		sum += pow((datos[i] - prom), 2);
		}
		
	double var= sum / l; //Se define la varianza
	return var;
	}

int main(){
	const int l = 14; //Se define el tamaño del arreglo constante
	double valores_prueba[l] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73}; //Se define el Arreglo
	
	double p = calc_prom(valores_prueba, l); //Se calcula el promedio
	double v= varianza(valores_prueba, l); //Se calcula la varianza

	cout << "Para los datos ";
	
	for (int i = 0; i < l; i++){
		cout << valores_prueba[i] << ", ";
		} 
		
	cout << "se tiene que un promedio de " << p << " y varianza " << v << "." << endl;

	return 0;
	}
