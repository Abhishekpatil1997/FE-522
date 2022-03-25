#include "std_lib_facilities.h"
#include <cassert>

// Lab Exercise 1: Determine whether an integer is a palindrome.
//                 An integer is a palindrome when it reads the same backward as forward.
bool isPalindrome(int x) {
    int a=0, temp=x;
    while(temp>0){
        a = a * 10 + temp % 10;
        temp /= 10;
    }
    if(a==x) return true;
    return false;
}

// Example use cases:
int main() {
    // Input: 121
    // Output: true
    assert(isPalindrome(121) == true);

    // Input: -121
    // Output: false
    // Explanation: From left to right, it reads -121.
    //              From right to left, it becomes 121-.
    //              Therefore it is not a palindrome.
    assert(isPalindrome(-121) == false);

    // Input: 10
    // Output: false
    // Explanation: Reads 01 from right to left.
    //              Therefore it is not a palindrome.
    assert(isPalindrome(10) == false);

    cout << '\n' << "Success! Your code passed all tests." << '\n';
    return 0;
}
