#include <bits/stdc++.h>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int first = 0, second = 1;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    printFibonacci(n);  // Call the function
    return 0;
}
