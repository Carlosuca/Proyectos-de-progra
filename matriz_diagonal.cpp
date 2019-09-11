#include <iostream>

using namespace std;
void matrizencero(int matriz[5][5]);
void mostrarlamatriz(int matriz[5][5]);
void llenarlamatriz(int matriz[5][5]);
int main()
{
 int matriz[5][5];

 
 matrizencero(matriz);
 mostrarlamatriz(matriz);
 llenarlamatriz(matriz);
 mostrarlamatriz(matriz);
 system("pause");
    return 0;
}
void matrizencero(int matriz[5][5]) {
 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
   matriz[i][j] = 0;
  }
 }
}

void mostrarlamatriz(int matriz[5][5]) {
 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
   cout << matriz[i][j] << "  ";
  }
  cout << endl;
 }

}
void llenarlamatriz(int matriz[5][5]) {
 for (int i = 1; i < 5; i++) {
  for (int j = 0; j < i; j++) {
   cout << "Ingrese algun numero entero para la matriz: ";
   cin >> matriz[i][j];
   cout << endl;
  }

 }
}
