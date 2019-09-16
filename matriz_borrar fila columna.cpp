#include <iostream>

using namespace std;

int main() {
    int numeros[100][100],filas,columnas;
    int borar_fila,borrar_columna;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
		
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<" ";
			cin>>numeros[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
        cout << "Fila y Columna a borrar ";
cin >> borar_fila;
cin >> borrar_columna;
cout << "sub-matriz";
cout << endl;
borar_fila = borar_fila - 1;
borrar_columna = borrar_columna - 1;

for (int i = 0; i <filas; i++) {
for (int j = 0; j < columnas; j++) {
if (i == borar_fila || j == borrar_columna) {
numeros[i][j] = 0;

}
else {
cout << numeros[i][j] << " ";
}
}
cout << endl;

}

    return 0;
}

