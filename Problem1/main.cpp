#include <iostream>

using namespace std;

int main() {

    int max;
    int sum = 0;
    
    cout << "Please input a maximum. \n";
    cin >> max;
    cout << "Let's find the sum of the multiples of 3 and 5 below " << max << ". \n";

    //This algorithm will find the solution with O(n)
    for (int i=1; i<max; i++) {
        if ((i%3==0) || (i%5==0)) {
            sum += i;
        }
    }
    
    cout << "The sum of the multiples of 3 and 5 below " << max << " is: " << sum << ". \n";
    
    return 1;
}
