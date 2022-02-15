#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int checkPalindrome(int x)
{   

    string str = to_string(x);
    // Calculating string length
    int len = str.length();
   
    // Traversing through the string
    // upto half its length
    for (int i = 0; i < len / 2; i++) {
       
        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }
   
    // If the above loop doesn't return then it is
    // palindrome
    return true;
}

int main(){

    int maxPal = 0;

    for (int i = 100 ; i <= 999; i++){

        for (int j = 100 ; j <= 999 ; j++){

            if (checkPalindrome(i*j)){
                if (i*j > maxPal) maxPal = i*j;
            }
        }
    }

    cout << "maxpal :" << maxPal;
}