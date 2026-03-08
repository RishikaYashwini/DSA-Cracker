// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.

// Example
// Input: n = 7748
// Output: 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int cnt=0;
    while( n>0){
        n/=10;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}