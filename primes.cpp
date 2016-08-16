#include "queue.h"
#include "primes.h"
#include <cmath>


Primes::Primes(){
}

Queue<inputN>* Primes::sieve(inputN n) {

    Queue<inputN>* primeList = new Queue<inputN>;

    unsigned int v[n];

    for (inputN i=0; i<=n ; i++){
        v[i]=0;

    }

    /*  v[i]=0   not visited
        v[i]=1   not prime
        v[i]=2   prime
    */

    inputN p = 2;

    while ( p <= n ) {

        v[p]=2;
        primeList->enqueue(p);

        for (inputN i = 2; i*p <= n ; i++){
            v[i*p] = 1;
        }

        do {
            p++;
        } while ( (p<=n) && (v[p]!=0) );

    }


    return primeList;


}

bool  Primes::decidePrime(inputN n){
    bool itsPrime;

    if (n==1) { itsPrime = false; }
    else { itsPrime = trialDiv(n); }

    return itsPrime;

}

bool Primes::trialDiv(inputN n) {

    bool itsPrime = true;

    float floatSieve = sqrt(n);

    inputN nSieve = static_cast<inputN> (floatSieve);

    Queue<inputN>* primeList = sieve( nSieve );

    while (itsPrime==true && !primeList->isEmpty()) {
        if( n % primeList->dequeue() == 0 ){
            itsPrime=false;
        }
    }

    return itsPrime;
}
