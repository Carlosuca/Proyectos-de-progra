#include<iostream>
#include<string.h>

using namespace std;
 
int palindroma(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}
int main(void){
    
    char palabra[50];
    int tam,pal;
    
    cout<<" Introduzca una palabra para ver si es palindrome: ";
    cin.getline(palabra,50);
    tam=strlen(palabra);
    pal=palindroma(palabra,0,tam-1);
    if(pal==1)
    cout<<"La palabra es palindrome";
    else if(pal==0)
    cout<<"la palabra no es Palindrome: ";
 
    return 0;
}