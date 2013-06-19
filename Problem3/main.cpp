#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(double num) {

    double multiple;
    
    if(fmod(num, 2) == 0) {
        return false;
    }

    for(int i=1; i<=(num/2); i++) {
        if(fmod(num, i) == 0) {
            multiple = i;
        }
    }
    
    if(multiple == 1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    double input;
    double number;
    double bigPrimeFactor;
    double i = 3;
    
    cout << "Please enter a number: \n";
    cin >> input;
    number = input;

    while(i <= number) {
        if(isPrime(i)) {
            if(fmod(number, i) == 0) {
                bigPrimeFactor = i;
                number /= i;
            }
        }
        i += 2;
    }
    
    cout << "The largest prime factor of " << input << " is: " << bigPrimeFactor << ". \n";
    
    return 1;

}

