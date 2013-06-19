#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

string intToString(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

bool isPalindrome(string str) {
    int length = str.length();
    string str1, str2;
    
    //If odd amount of letters, split and ignore middle
    if(length % 2 == 0) {
        str1 = str.substr(0, (length/2));
        str2 = str.substr((length/2), (length/2));
    } else {
        str1 = str.substr(0, ((length-1)/2));
        str2 = str.substr(((length+1)/2), ((length-1)/2));
    }
    
    //Reverse 1 string and compare
    str2 = string(str2.rbegin(), str2.rend());
    
    if (str1.compare(str2)) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int power;
    int min;
    int max;
    int mult1;
    int mult2;
    int product;
    int bigProduct = 0;
    string prodStr;
    
    cout << "Let's find the largest palindrome product of two numbers. \n";
    cout << "Please enter the number of digits we shall use. \n";
    cin >> power;
    
    max = pow(10, power);
    min = pow(10, (power-1));

    for(mult1=min; mult1 < max; mult1++) {
        for(mult2=min; mult2 < max; mult2++) {
            product = mult1 * mult2;
            prodStr = intToString(product);
            
            if(isPalindrome(prodStr)) {
                if(product > bigProduct) {
                    bigProduct = product;
                }
            }
        }
    }
    
    cout << "The largest palindrome from the product of " << power << " digits is: " << bigProduct << "\n";

    return 1;
}

