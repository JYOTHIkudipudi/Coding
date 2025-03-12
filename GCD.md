# GCD and LCM Calculation

This document provides a combined code snippet for calculating the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers using different methods:
1. **GCD without optimization**
2. **GCD with optimization using Euclidean's theorem**
3. **GCD and LCM calculation**

## Code

```cpp
#include <iostream>
using namespace std;

// Function to calculate GCD without optimization
void gcdWithoutOptimization(int x, int y) {
    int min = (x > y) ? y : x;

    for (int i = min; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            cout << "GCD without optimization is " << i << endl;
            break;
        }
    }
}

// Function to calculate GCD with optimization using Euclidean's theorem
void gcdWithOptimization(int x, int y) {
    int a = x, b = y;
    while (x != 0 && y != 0) {
        if (x > y) {
            x = x % y;
        } else {
            y = y % x;
        }
    }
    cout << "GCD with optimization is " << max(x, y) << endl;
}

// Function to calculate GCD and LCM
void gcdAndLcm(int x, int y) {
    int a = x, b = y;
    while (x != 0 && y != 0) {
        if (x > y) {
            x = x % y;
        } else {
            y = y % x;
        }
    }

    int gcd = max(x, y);
    cout << "GCD is " << gcd << endl;
    cout << "LCM is " << (a * b) / gcd << endl;
}

int main() {
    int x, y;
    cin >> x >> y;
    
    // Call the function to calculate GCD without optimization
    gcdWithoutOptimization(x, y);
    
    // Call the function to calculate GCD with optimization
    gcdWithOptimization(x, y);
    
    // Call the function to calculate GCD and LCM
    gcdAndLcm(x, y);

    return 0;
}
```

## Explanation

### GCD without Optimization
The function `gcdWithoutOptimization` calculates the GCD of two numbers by iterating from the smaller of the two numbers down to 1 and checking if the current number divides both input numbers. It stops as soon as it finds the largest number that divides both.

### GCD with Optimization (Euclidean's Theorem)
The function `gcdWithOptimization` uses Euclidean's algorithm to find the GCD. This method is more efficient and works by repeatedly replacing the larger number by its remainder when divided by the smaller number until one of the numbers becomes zero. The non-zero number at this point is the GCD.

### GCD and LCM Calculation
The function `gcdAndLcm` calculates both the GCD and the LCM of two numbers. It first finds the GCD using Euclidean's algorithm and then calculates the LCM using the formula `LCM(x, y) = (x * y) / GCD(x, y)`.

The `main` function reads input values `x` and `y`, and then calls each of the three functions in sequence to display the GCD (without and with optimization) and the LCM.
