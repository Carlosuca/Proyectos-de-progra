#include <iostream>
using namespace std;

int contadorp=0;
int sumap=0;
int contadori=0;
int sumai=0;
int contadorn=0;
int contadorpo=0;
int contadorc=0;
struct nodo{
	int dato;
	nodo *hijoizq;
	nodo *hijoDer;
};

class ABB{
	private: 
		nodo *pArbol;
	public:
		ABB(void);
		void mostrarIn(void);
		void mostrarIn(nodo *);
		void pares();
		void pares(nodo *);
		void negativos();
		void negativos(nodo *);
		void insNodo(int);
		void insNodo(nodo **, int);
		void operaciones(void);
};

ABB::ABB(void){
	pArbol=NULL;
}

void ABB::insNodo(int dato){
	insNodo(&pArbol,dato);
}

void ABB::insNodo(nodo **p,int dato){
	if(!(*p)){
		*p=new nodo;
		(*p)->dato=dato;
		(*p)->hijoizq=(*p)->hijoDer=NULL;
	}else{
		if(dato<(*p)->dato){
 			insNodo(&((*p)->hijoizq),dato);
		}else{
			if(dato>(*p)->dato){
				insNodo(&((*p)->hijoDer),dato);
			}else{
				cout<<"El nodo ya existe\n";
			}
		}
	}
}

void ABB::pares(void){
	pares(pArbol);
}

void ABB::pares(nodo *p){
	if(p){
		pares(p->hijoizq);
		if(p->dato%2==0){
			contadorp++;
			sumap=sumap+p->dato;
		}else{
			contadori++;
			sumai=sumai+p->dato;
		}
		pares(p->hijoDer);
	}
}

void ABB::negativos(void){
	negativos(pArbol);
}

void ABB::negativos(nodo *p){
	if(p){
		negativos(p->hijoizq);
		if(p->dato==0){
			contadorc++;
		}else if(p->dato>0){
			contadorpo++;
		}else{
			contadorn++;
		}
		negativos(p->hijoDer);
	}
}

void ABB::mostrarIn(void){
	mostrarIn(pArbol);
}

void ABB::mostrarIn(nodo *p){
	if(p){
		mostrarIn(p->hijoizq);
		cout<<p->dato<<endl;
		mostrarIn(p->hijoDer);
	}
}

void ABB::operaciones(void){
	char resp;
	int dato;
	
	cout<<"Desea meter un dato (s/n)? ";
	cin>>resp;
	while(resp=='s' || resp=='S'){
		cout<<"Digite el dato: ";
		cin>>dato;
		insNodo(dato);
		cout<<"Desea meter un dato (s/n)? ";
		cin>>resp;
	}
	
	cout<<"\nMostrar In-orden :"<<endl;
	mostrarIn();

	pares();
	cout<<"\nEl arbol posee "<<contadorp<<" numeros pares"<<endl;
	cout<<"La suma de los numeros pares del arbol es: "<<sumap<<endl;
	cout<<"\nEl arbol posee "<<contadori<<" numeros impares"<<endl;
	cout<<"La suma de los numeros impares del arbol es: "<<sumai<<endl;
	
	negativos();
	cout<<"\nEl arbol posee "<<contadorc<<" cero/s"<<endl;
	cout<<"El arbol posee "<<contadorn<<" numeros negativos"<<endl;
	cout<<"El arbol posee "<<contadorpo<<" numeros positivos"<<endl;
}

int main(void){
	ABB miArbol;
	miArbol.operaciones();
	return 0;
}