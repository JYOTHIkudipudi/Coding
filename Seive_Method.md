# Prime Sieve Algorithm Explanation

This document explains the implementation of the Sieve of Eratosthenes algorithm used in the provided C++ code to find all prime numbers up to a given number `N`.

## Code Explanation

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,i,j;
    // cout << "Enter Number:"
    cin >> N;
    vector<int>Seive(N+1,true);
    Seive[0]=Seive[1]=false;
    for(i=2;i*i<=N;i++){
            if(Seive[i]){
                for(j=i+i;j<=N;j=j+i){
                    Seive[j] = false;
                }
            }
    }
    for(int i=0;i<Seive.size();i++){
        if(Seive[i]==true){
            cout << i << " " << "is prime"<< endl;
        }
    }
    return 0;
}
```

### Step-by-Step Explanation

1. **Include Necessary Libraries**
   ```cpp
   #include<bits/stdc++.h>
   using namespace std;
   ```
   - The code includes all standard libraries using `#include<bits/stdc++.h>`, which is a GCC-specific extension.

2. **Main Function and Variable Declarations**
   ```cpp
   int main(){
       int N,i,j;
       // cout << "Enter Number:"
       cin >> N;
   ```
   - The main function is defined.
   - Variables `N`, `i`, and `j` are declared.
   - The input number `N` is read from the standard input.

3. **Initialize the Sieve Vector**
   ```cpp
   vector<int>Seive(N+1,true);
   Seive[0]=Seive[1]=false;
   ```
   - A vector `Seive` of size `N+1` is initialized with `true` values, indicating that all numbers are initially considered prime.
   - The indices 0 and 1 are set to `false` as 0 and 1 are not prime numbers.

4. **Sieve of Eratosthenes Algorithm**
   ```cpp
   for(i=2;i*i<=N;i++){
       if(Seive[i]){
           for(j=i+i;j<=N;j=j+i){
               Seive[j] = false;
           }
       }
   }
   ```
   - The outer loop iterates from 2 to the square root of `N`.
   - If `Seive[i]` is `true`, it means `i` is a prime number.
   - The inner loop marks all multiples of `i` as `false`, indicating they are not prime.

5. **Output the Prime Numbers**
   ```cpp
   for(int i=0;i<Seive.size();i++){
       if(Seive[i]==true){
           cout << i << " " << "is prime"<< endl;
       }
   }
   ```
   - The loop iterates through the `Seive` vector.
   - If `Seive[i]` is `true`, it means `i` is a prime number, and it is printed.

6. **Return Statement**
   ```cpp
   return 0;
   }
   ```
   - The program returns 0, indicating successful execution.

### Summary

The code implements the Sieve of Eratosthenes algorithm to find and print all prime numbers up to a given number `N`. It initializes a boolean vector, marks non-prime numbers, and prints the prime numbers.

### Expected Output

When you run the program and input a number `N` (e.g., `10`), the output will be:

```
2 is prime
3 is prime
5 is prime
7 is prime
```
If you input `N` as `20`, the output will be:

```
2 is prime
3 is prime
5 is prime
7 is prime
11 is prime
13 is prime
17 is prime
19 is prime
```
