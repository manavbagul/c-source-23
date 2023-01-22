////////////////////////////////////////////////////////////////////////////////
//
// Function Name : super prime or not
// Description : get input and tell is it super prime or not
// Input Arguments : integer
// Output: integer
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void superPrime(int n);
int main(){
    int n = 11;
    superPrime(n);
    
    return 1;
}

void superPrime(int n){
    int prime[n+1];
    int primes[n];

    for (size_t i = 2; i <= n; i++)
    {
        prime[i] = 0;
    }

    for (size_t i = 2; i <= n; i++){
        if(prime[i] == 0){
            for (size_t j = i*i; j <= n; j+=i){
                prime[j] = 1;
            }   
        }
    }

    for (size_t i = 2; i <= n; i++){
        if(prime[i] == 0){
            printf("%d, ", i);
        }
    }    
}