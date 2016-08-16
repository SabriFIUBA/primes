#include <iostream>
#include "primes.h"

using namespace std;


int main(){

inputN number;

cout << "Insert number > 0:   ";
cin >> number;

unsigned int option;
cout << endl << endl << "1) Decide if " << number << " is prime" << endl;
cout << "2) List primes number up to " << number << endl;
cin >> option;

while ( option!=1 && option!=2 ) {

    cout << endl << endl << "Wrong option, reenter: ";
    cin >> option;

}

Primes* prime = new Primes();

if ( option==1 ) {
    bool itsPrime = prime->decidePrime(number);
    if ( itsPrime ) {cout<<endl<<number<< " IT'S PRIME" << endl;}
    else            {cout<<endl<<number<< " IT'S NOT PRIME" << endl;}

} else {

    Queue<inputN>* primeList = prime->sieve(number);

    cout<<endl<<endl<<"Prime list up to "<<number<<endl;

    while ( !primeList->isEmpty() ) {
        cout << primeList->dequeue() << endl;
    }
}

return 0;
}
