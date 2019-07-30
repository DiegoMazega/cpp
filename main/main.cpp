#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include "../lib/functions.h"
using namespace std;



int main (void){
    char choice;
    long double value1, value2;
    cout<<"Selecione uma opção de operação, então 2 valores de entrada. \n P - Somar\n L - subtração\n M - multiplicação\n D - divisão."<<endl;
    while(cin>>choice>>value1>>value2){
        calc(tolower(choice), value1, value2);
        cout<<"Deseja Limpar a Tela?[y/n]"<<endl;
        cin>>choice;
        if(tolower(choice)=='y') system("clear");
        cout<<"Selecione uma opção de operação, então 2 valores de entrada. \n P - Somar\n L - subtração\n M - multiplicação\n D - divisão."<<endl;
    }
    cout<<"bye\n";
    return 0;
}