#include<iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    int i=0;
    i++;
    if(n<0){
        //cout<<"Renter a number ,only positive numbers are allowed."<<endl;
        printf("Renter a number ,only positive numbers are allowed.\n");
        return -1;

    }
    else if(n!=1){
        return(n * factorial(n-1));
    }
    else return 1;
}
