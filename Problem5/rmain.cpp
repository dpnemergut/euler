#include <iostream>

using namespace std;

void divCheck(int num, int div, int divMax) {
     if(num%div == 0) {
        if(div == divMax) {
            cout << "The smallest number divisible by all numbers 1 to " << divMax << " is: " << num << "\n";
            return;
        } else {
            divCheck(num, ++div, divMax);
        }
    } else {
        divCheck(++num, 3, divMax);
    }
}

int main() {
    int divMax;
    
    cout << "Please enter the maximum divisor. \n";
    cin >> divMax;
    
    divCheck(divMax, 3, divMax);

    return 1;
}
