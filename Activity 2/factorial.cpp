#include<iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    if(n<0){
        cout<<"Renter a number ,only positive numbers are allowed."<<endl;
    }
    else if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
