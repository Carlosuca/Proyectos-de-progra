#include <iostream>

using namespace std;
int func(int n){
   if(n==0)
          return(0);
   return(n + func(n-1));
}
int suma (int n){
    int r=0;
    for (int i=n; i>=0;i--){
       r += i;  
    }
   
    cout<<r;
       
}



int main(void) {

    int n=0;
    cout<<"ingrese un numero: ";
    cin>> n;
 suma(n);
 
 cout<<func(n);
 
    
    
    return 0;
}
