#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n) {
    if (1 > i) return;
    printN(i - 1, n); //Backtracking method
    cout << i << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printN(n, n);
    return 0;
}