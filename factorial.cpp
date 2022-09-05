#include<iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    int i=0;
    i++;
    if(n<0){
        cout<<"Renter a number ,only positive numbers are allowed."<<endl;
    }
    else if(n!=1){
        cout<<"Recursive function called for: "<<i<<endl;
        
	return(n * factorial(n-1));
    }
    else return 1;
}
