#include <iostream>
#include <ctype.h>
#include "../lib/functions.h"
using namespace std;



int main (void){
    char choice;
    long double value1, value2;
        while(cin>>choice>>value1>>value2){
        calc(tolower(choice), value1, value2);
        }
    cout<<"bye\n";
    return 0;
}