#include <iostream>
#include <iomanip>
#include "../lib/functions.h"
using namespace std;


double sum(long double value1, long double value2){
    long double result = value1+value2;
    return result;
}

double lesss(long double value1, long double value2){
    long double result = value1+value2;
    return result;
}

double multiply(long double value1, long double value2){
    long double result = value1*value2;
    return result;
}

double divide(long double value1, long double value2){
    long double result = value1/value2;
    return result;
}

double calc(char operation, long double value1, long double value2){
    switch(operation){
        case 'p':
        cout<<fixed;
        cout<<setprecision(3)<<sum(value1, value2)<< endl;
        break;
        case 'l':
        cout<<fixed;
        cout<<setprecision(3)<< lesss(value1, value2) << endl;
        break;
        case 'm':
        cout<<fixed;
        cout<<setprecision(3)<< multiply(value1, value2) << endl;
        break;
        case 'd':
        cout<<fixed;
        cout<<setprecision(3)<< divide(value1, value2) << endl;
        break;
    }
    return 0;
}