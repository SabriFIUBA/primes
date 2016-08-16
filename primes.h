#ifndef PRIMES_H_
#define PRIMES_H_
#include "queue.h"

typedef unsigned long long int inputN;

class Primes{

public:

    Primes();

    Queue<inputN>* sieve(inputN n);

    bool decidePrime(inputN n);

    bool trialDiv(inputN n);

};




#endif // PRIMES_H_
