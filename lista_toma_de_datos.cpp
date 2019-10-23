#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

class AdministradorLista{
    private:
    	struct persona{
		string nombre;
                string apeido;
                int edad;
                int carnet;
                string correElectronico;
                int telefono;
		persona *siguiente;
	};
	 persona *cabeza;
	
public:
        AdministradorLista();
	void InsertarPersona();
	void MostrarLista();
        void ImprimirListaRecursivo(struct persona *saltarin);
        void EliminarPersona(int carnet);
        void ActualizarPersona(int carnet);
};
AdministradorLista::AdministradorLista(){
	cabeza = NULL;
}
void AdministradorLista::InsertarPersona()
{
	
 	persona *nuevo_nodo = new persona();
        cout <<"\nIngrese el nombre: ";
	cin>>nuevo_nodo->nombre;
        cout << "\nIngrese apellidos: ";
        cin>>nuevo_nodo->apeido;
        cout << "\nIngrese edad: ";
        cin>>nuevo_nodo->edad;
        cout << "\nIngrese carnet: ";
        cin>>nuevo_nodo->carnet;
        cout << "\nIngrese correo Electronico: ";
        cin>>nuevo_nodo->correElectronico;
        cout << "\nIngrese telefono: ";
        cin>>nuevo_nodo->telefono;
	nuevo_nodo->siguiente = NULL;

	if (cabeza == NULL)
	{
		cabeza = nuevo_nodo;
	}
	else
	{
		persona *saltarin = cabeza;
		while(saltarin->siguiente != NULL)
		{
			saltarin = saltarin->siguiente;
		}
		saltarin->siguiente = nuevo_nodo;
	}
}
void AdministradorLista::MostrarLista(){
	ImprimirListaRecursivo(cabeza);
}
void AdministradorLista::ImprimirListaRecursivo(struct persona* saltarin)
{
	if(saltarin == NULL){
		cout << "Lista vacia!" << endl;
		return;
	}
	else{
		cout <<"\tNombre:  "<< saltarin->nombre << endl;
		cout <<"\tApellido:    "<< saltarin->apeido << endl;
		cout <<"\tCarnet:    "<< saltarin->carnet << endl;
		cout <<"\tTelefono:    "<< saltarin->telefono << endl;
		cout <<"\tCorreo:     "<< saltarin->correElectronico << endl;
		cout <<"\tEdad:    "<< saltarin->edad << endl;
                cout <<endl;
                cout <<endl;


		if(saltarin->siguiente != NULL)
			ImprimirListaRecursivo(saltarin->siguiente);
	}
}
void AdministradorLista::EliminarPersona(int carnet){
   persona *s = cabeza,*p = NULL;
        if(cabeza)
          if (s->carnet == carnet){
            cabeza = cabeza->siguiente;
            delete(s);
             }
             else{
             while(s->siguiente && s->siguiente->carnet != carnet){
                s= s->siguiente;
                if(s->siguiente){
                    p= s->siguiente;
                    s->siguiente = s->siguiente->siguiente;
                    delete(p);
        }
}
             }
}
void AdministradorLista::ActualizarPersona(int carnet){
    persona *s = cabeza,*p = NULL;
                string nombre;
                string apellido;
                int edad;
                int carnet2;
                string correo;
                int telefono;
        if(cabeza !=NULL)
          if (s->carnet == carnet){
              cout <<"ingrese el nuevo nombre: "<<endl;
              cin>>nombre;
              cabeza->nombre=nombre;
              cout <<"Ingrese el nuevo apellido: "<<endl;
              cin>>apellido;
              cabeza->apeido=apellido;
              cout <<"Ingrese la nueva edad: "<<endl;
              cin>>edad;
              cabeza->edad=edad;
              cout <<"Ingrese el nuevo carnet: "<<endl;
              cin>>carnet2;
              cabeza->carnet=carnet2;
              cout<< "Ingrese el nuevo correo: "<<endl;
              cin>>correo;
              cabeza->correElectronico=correo;
              cout <<"Ingrese el nuevo telefono: "<<endl;
              cin>>telefono;
              cabeza->telefono=telefono;
          }
          else{
              while(s->siguiente && s->siguiente->carnet != carnet){
                s= s->siguiente;
                if(s->siguiente){
                  s->siguiente = s->siguiente->siguiente;
                   ActualizarPersona(carnet);
                }
            }
                }
}
int main(void) {
  
    AdministradorLista Lista;
    int carnet;
       int opcion; 
	do{
		cout << "----------Menu----------"<<endl;
                cout << "1)Insertar persona"<<endl;
                cout << "2)Mostrar lista"<<endl;
                cout << "3)Eliminar persona"<<endl;
                cout << "4)Actualizar"<<endl;
                cout << "5)Salir"<<endl;
		cout << "Opcion: ";
		cin >> opcion;

		switch(opcion){
		case 1:
			
			Lista.InsertarPersona();
			break;
		case 2:
			cout << "Mostrando lista: " << endl;
			Lista.MostrarLista();
			break;
		case 3:
                    cout<<"Ingrese el carnet de la persona a eliminar: ";
                            cin>>carnet;
                   Lista.EliminarPersona(carnet);
			break;
		case 4:
                    cout<<"Ingrese el carnet de la persona a actualizar: ";
		   cin>>carnet;
                   Lista.ActualizarPersona(carnet);
			break;
		};
	}while(opcion >= 1 && opcion <= 4);

	cout << "Muchas gracias!" << endl;
    return 0;
}