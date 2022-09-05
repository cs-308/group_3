#include<iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    int i=0;
    i++;
    if(n<0){
        //cout<<"Renter a number ,only positive numbers are allowed."<<endl;
        printf("Renter a number ,only positive numbers are allowed.\n");

        //cout<<"Renter a number ,only positive numbers are allowed."<<endl;
        printf("Renter a number ,only positive numbers are allowed.\n");

    }
    else if(n!=1){
        //cout<<"Recursive function called for: "<<i<<endl;
        printf("Recursive function called for: %d\n",i);
        
	return(n * factorial(n-1));
    }
    else return 1;
}
