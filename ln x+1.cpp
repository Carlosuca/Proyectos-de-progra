#include <iostream>
#include <math.h>
using namespace std;

double log_mac(double);

int main()
{
    double x = 0.2;
    cout << "calculo de ln de taylor" << endl
    << "ln = " << log(x) << endl;

    cout << "calculo de ln por sumatorio" << endl;
    cout << "ln = " << log_mac(x) << endl;
}

double log_mac(double x){
    double resp = 0;
    int iteraciones = 10;

    for(int n = 1 ; n <= iteraciones ; n++){
        resp += pow(-1, n + 1) * pow(x - 1.0, n) / n;
    }

    return resp;
}