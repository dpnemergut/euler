#include <iostream>

using namespace std;

int main() {
    int num;
    int squareOfSum = 0;
    int sumOfSquare = 0;
    int diff;
    
    cout << "Please enter how far we shall go. \n";
    cin >> num;
    
    for(int i=1; i<=num; i++) {
        sumOfSquare += i*i;
        squareOfSum += i;
    }
    
    squareOfSum *= squareOfSum;
    
    diff = squareOfSum - sumOfSquare;
    
    cout << "The difference of sum of squares and square of sums up to " << num << " is: " << diff << "\n";

    return 1;
}
