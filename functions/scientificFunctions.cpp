#include <iostream>
#include <iomanip>
#include <math.h>
#include "../lib/ scientificFunctions.h"
using namespace std;


int fatorial(long int value1){
   return value1? value1*fatorial(value1 -1):1;
}
double sen(double value1){
    long double seno = sin(value1);
    return seno;
}

double coss(double value1){
    long double cosseno = cos(value1);
    return cosseno;
}

double tng(double value1){
    long double tangente = tan(value1);
    return tangente;
}

double scientificCalc(char choice, double value1){
    switch (choice)
    {
    case 's':
        cout<<fixed;
        cout<<setprecision(3)<<sen(value1)<<endl;
        break;

        case 'c':
        cout<<fixed;
        cout<<setprecision(3)<<coss(value1)<<endl;
        break;

        case 't':
        cout<<fixed;
        cout<<setprecision(3)<<tng(value1)<<endl;
        break;
        
        case 'f':
        cout<<fixed;
        cout<<setprecision(3)<<fatorial(value1)<<endl;
        break;
    default:
        break;
    }
    return 0;
}