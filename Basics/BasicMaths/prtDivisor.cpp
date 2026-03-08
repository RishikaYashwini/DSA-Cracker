// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.

// Example 
// Input: n = 6
// Output = [1, 2, 3, 6]

#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    vector<int> ans;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
            if (i != n / i) {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result = divisors(n);
    cout << "Divisors of " << n << " are: ";
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}