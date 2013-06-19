#include <iostream>

using namespace std;

bool isPrime(int num) {
    if(num<=2) {
        return true;
    } else if(num%2 == 0) {
        return false;
    } else {
        for(int j=3; j<num; j++) {
            if(num%j==0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int count=0;
    int max;
    int bigPrime;
    
    cout << "Let us find a prime. Which prime would you like to find? \n";
    cin >> max;

    for(int i=2; count<max; i++) {
        if(isPrime(i)) {
            bigPrime = i;
            count++;
        }
    }
    
    cout << "The " << max << " prime number is: " << bigPrime << "\n";

    return 1;
}
