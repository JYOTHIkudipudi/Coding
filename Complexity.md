# Time and Space Complexity Notes

## Time Complexity 
 
Time complexity is a way to represent the number of iterations or steps an algorithm takes to complete. There are several notations used to describe time complexity:

- **Big O (O)**: Represents the upper limit or worst-case scenario.
- **Big Theta (Θ)**: Represents the lower limit or best-case scenario.
- **Big Omega (Ω)**: Represents the average-case scenario.

### Big O Notation

Big O notation considers only the highest order term, which represents the worst-case scenario of an algorithm. For example, in the following loops:

```cpp
for (int i = 1; i <= 100; i++) { }
for (int i = 1; i <= 50; i++) { }
for (int i = 1; i <= 72; i++) { }
```

The time complexity is O(n), where n is the number of iterations.

### Common Time Complexities

1. **O(1)**: Constant time complexity.
2. **O(n)**: Linear time complexity.
3. **O(log(n))**: Logarithmic time complexity.
4. **O(n^2)**: Quadratic time complexity.
5. **O(n^3)**: Cubic time complexity.
6. **O(n log(n))**: Linearithmic time complexity.
7. **O(n!)**: Factorial time complexity.

To optimize your solution, calculate the complexity for your program, remove any unnecessary steps, and then re-evaluate the procedure.

## Space Complexity

Space complexity represents the amount of memory space required by an algorithm. For example:

```cpp
int main() {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j = j * 2) {
            // code
        }
    }

    for (int i = 0; i < n * n; i++) {
        // code
    }
}
```

The space complexity of the above code can be analyzed by evaluating the nested loops and their impact on memory usage.
