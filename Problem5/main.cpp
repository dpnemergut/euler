#include <iostream>

using namespace std;

int main() {
    int divMax;
    bool flag = false;
    int num;
    int div;

    cout << "Please enter the maximum divisor. \n";
    cin >> divMax;

    if(divMax%2 == 0) {
        num = divMax;
    } else {
        num = divMax + 1;
    }
    
    for(num; flag!=1; num++) {
        for (div=3; div <= divMax; div++) {
            if(num%div != 0) {
                break;
            } else if(div==divMax) {
                flag = true;
            }
        }
    }
    
    num--;
    
    cout << "The smallest number divisible by all numbers 1 to " << divMax << " is: " << num << "\n";
    
    return 1;
}

