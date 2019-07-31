#include <iostream>
#include <ctype.h>
#include <cstdlib>
#include "../lib/functions.h"
#include "../lib/ scientificFunctions.h"
using namespace std;



int main (void){
    char choice;
    long double value1, value2;
    
    cout<<"Escolha entre calculadora normal e cientifica: N - normal\n C - Cientifica"<<endl;
    cin>>choice;
    if(tolower(choice)== 'n'){
        cout<<"Selecione uma opção de operação, então 2 valores de entrada. \n P - Somar\n L - subtração\n M - multiplicação\n D - divisão."<<endl;
        while(cin>>choice>>value1>>value2){
            calc(tolower(choice), value1, value2);
            cout<<"Deseja Limpar a Tela?[y/n]"<<endl;
            cin>>choice;
            if(tolower(choice)=='y') system("clear");
            cout<<"Selecione uma opção de operação, então 2 valores de entrada. \n P - Somar\n L - subtração\n M - multiplicação\n D - divisão."<<endl;
        }
        cout<<"bye\n";
    }
    else if(tolower(choice)=='c'){
        cout<<"Selecione uma opção de operação, então 1 valor de entrada.\n S - seno\n C - cosseno\n T - tangente"<<endl;
        while(cin>>choice>>value1){
            scientificCalc(tolower(choice), value1);
            cout<<"Deseja Limpar a Tela?[y/n]"<<endl;
            cin>>choice;
            if(tolower(choice)=='y') system("clear");
            cout<<"Selecione uma opção de operação, então 1 valor de entrada.\n S - seno\n C - cosseno\n T - tangente"<<endl;
        }
        cout<<"bye\n";
    }else cout<<"bye\n";
    return 0;
}