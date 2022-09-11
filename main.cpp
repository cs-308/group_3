#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    printf("The factorial of 5 is %d\n", factorial(5));
    printf("The GCD of 56 and 98 is %d \n", gcd(25, 35));    
    return 0;
}
