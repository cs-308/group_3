#include<iostream>
#include "functions.h"
using namespace std;
int factorial(int n){
    int i=0;
    i++;
    if(n<0){
        printf("Re-enter a number, only positive numbers are allowed.");
    }
    else if(n!=1){
        printf("Recursive function called for: ",i);
        
	return(n * factorial(n-1));
    }
    else return 1;
}
