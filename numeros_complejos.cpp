#include<iostream>

using namespace std;

struct complejo{
	int real,imaginaria,resultado;
} n1,n2,n3,n4;

void pedirDatos();
complejo multi(complejo,complejo,complejo,complejo);
void muestra(complejo);

int main(){
	pedirDatos();
	
	complejo r = multi(n1,n2,n3,n4);
	
	muestra(r);	
	
	return 0;
} 

void pedirDatos(){
	cout<<"Digite el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>n1.real;
	cout<<"Parte Imaginaria: "; cin>>n2.imaginaria;
	
	cout<<"\nDigite el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>n3.real;
	cout<<"Parte Imaginaria: "; cin>>n4.imaginaria;
}

complejo multi(complejo n1,complejo n2,complejo n3, complejo n4){
    n1.real;
    n2.imaginaria;
    n3.real;
    n4.imaginaria;
    
 int r1=((n1.real*n3.real)-(n2.imaginaria*n4.imaginaria));
       int r2=((n1.real*n4.imaginaria)+(n2.imaginaria*n3.real));
	
        cout<<"\nLa multiplicacion de los numeros complejos es:  ("<<r1<<" , "<<r2<< "i)"<<endl;
}

void muestra(complejo r){
	
}