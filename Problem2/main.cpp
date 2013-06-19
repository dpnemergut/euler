#include <iostream>

using namespace std;

int main() {

    int fibA, fibB, fib;
    int sum = 0;
    int max;
    
    cout << "Please enter a maximum. \n";
    cin >> max;
    
    fibA = 1;
    fibB = 2;
    fib = fibA + fibB;
    
    while(fibB < max) {
        if(fibB % 2 == 0) {
            sum += fibB;
        }
        fibA = fibB;
        fibB = fib;
        fib = fibA + fibB;
    }

    cout << "The sum of all even terms of the Fibonacci sequence up to " << max << " is: " << sum << ". \n";

    return 1;

}
