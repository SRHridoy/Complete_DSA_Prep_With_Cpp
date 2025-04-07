# Complete-DSA-Prep-With-C++

## Frequently Asked Questions (FAQ)

### What is Data Structures and Algorithms (DSA)?
DSA is a branch of computer science focused on organizing and manipulating data efficiently. Data structures store and organize data, while algorithms are step-by-step procedures for tasks.

### Why is DSA important?
DSA is essential for solving problems efficiently and writing optimized code, widely used in software development, competitive programming, and technical interviews.

### Common Data Structures and Real-World Examples
- **Arrays**: Contiguously stored elements, like a train with numbered carriages, used in image processing.
- **Linked Lists**: Elements linked via pointers, like a treasure hunt where each clue points to the next, used in music playlists.
- **Stacks**: Follows LIFO (Last In, First Out), like a stack of plates, used in undo mechanisms in software.
- **Queues**: Follows FIFO (First In, First Out), like a line at a ticket counter, used in printer task scheduling.
- **Trees**: Hierarchical structure, like a family tree, used in file systems.
- **Graphs**: Nodes connected by edges, like a city map, used in social networks and navigation systems.

### Common Algorithms and Industry Examples
- **Sorting Algorithms**: Arrange data, like sorting emails by date.
- **Searching Algorithms**: Find data, like searching for a contact in a phonebook.
- **Dynamic Programming**: Solve complex problems by breaking them down, used in route optimization.
- **Greedy Algorithms**: Make the best choice at each step, used in network routing.

### Time and Space Complexity

Understanding the efficiency of algorithms is crucial in computer science. Two primary metrics are used to evaluate this efficiency:

- **Time Complexity**: Measures how long an algorithm takes to run based on input size, like cooking time.
- **Space Complexity**: Measures memory usage based on input size, like packing luggage.

#### Types of Time Complexity
1. **Constant Time - O(1)**: The algorithm's runtime is constant and does not change with input size. Example: Accessing an array element by index.
2. **Logarithmic Time - O(log n)**: The runtime increases logarithmically as the input size increases. Example: Binary search.
3. **Linear Time - O(n)**: The runtime increases linearly with the input size. Example: Iterating through an array.
4. **Linearithmic Time - O(n log n)**: The runtime increases in proportion to n log n. Example: Merge sort.
5. **Quadratic Time - O(n^2)**: The runtime increases quadratically with the input size. Example: Bubble sort.
6. **Cubic Time - O(n^3)**: The runtime increases cubically with the input size. Example: Matrix multiplication.
7. **Exponential Time - O(2^n)**: The runtime doubles with each additional input element. Example: Solving the traveling salesman problem using brute force.
8. **Factorial Time - O(n!)**: The runtime grows factorially with the input size. Example: Generating all permutations of a set.

#### Types of Space Complexity
1. **Constant Space - O(1)**: The algorithm uses a fixed amount of space regardless of input size. Example: Swapping two variables.
2. **Logarithmic Space - O(log n)**: The space usage grows logarithmically with the input size. Example: Recursive algorithms that divide the problem in half each time.
3. **Linear Space - O(n)**: The space usage grows linearly with the input size. Example: Storing an array of size n.
4. **Quadratic Space - O(n^2)**: The space usage grows quadratically with the input size. Example: Storing a 2D matrix.

Understanding these complexities helps in choosing the most efficient algorithm for a given problem, ensuring optimal performance and resource utilization.

### Time Complexity Chart
| Algorithm            | Best Case  | Average Case | Worst Case  |
|----------------------|------------|--------------|-------------|
| Bubble Sort          | O(n)       | O(n^2)       | O(n^2)      |
| Merge Sort           | O(n log n) | O(n log n)   | O(n log n)  |
| Quick Sort           | O(n log n) | O(n log n)   | O(n^2)      |
| Binary Search        | O(1)       | O(log n)     | O(log n)    |
| Linear Search        | O(1)       | O(n)         | O(n)        |
| Hash Table           | O(1)       | O(1)         | O(n)        |
| Binary Search Tree   | O(log n)   | O(log n)     | O(n)        |

## Prime number check implementation in C++

* This code snippet checks if a given number `n` is a prime number.
* It uses a boolean flag `isPrime` to determine the primality of the number.
* The loop iterates from 2 to the square root of `n`, checking for divisibility.
* If `n` is divisible by any number in this range, it is not a prime number.
* The result is then printed to the console.

```cpp
bool isPrime = true;
// Loop from 2 to the square root of n
for (int i = 2; i*i <= n; i++)
{
    // If n is divisible by i, it's not a prime number
    if(n % i == 0){
        isPrime = false;
        break;
    }
}
// Output the result
if(isPrime) cout << n << " is a prime number!" << endl;
else cout << n << " is not a prime number!" << endl;
```

# Practicing Patterns : 
## Pattern Printing Implementation in C++

* This code snippet creates a square pattern of numbers.
* Takes input `n` for the size of the pattern.
* Prints `n` rows, each containing numbers from 1 to n.
* Uses nested loops for row and column iteration.
* Each row is followed by a newline character.

```cpp
int n;
cin >> n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n; j++)
    {
        cout << j << " ";
    }cout << endl;
    
}
```

/**
 * Prints a square pattern of numbers
 * Takes an integer input 'n' from the user and creates an n x n matrix
 * Each row contains numbers from 1 to n
 * 
 * Example for n=3:
 * 1 2 3
 * 1 2 3
 * 1 2 3
 * 
 * @param n The size of the square pattern (read from standard input)
 */

## Character Pattern Implementation in C++

* This code snippet creates a square pattern of alphabets.
* Uses variable `n` to define the size of the pattern.
* Prints `n` rows, each containing letters from 'A' onwards.
* Each row starts with 'A' and increments for each column.
* Uses nested loops and character increment operation.
* Each row ends with a newline character.

```cpp
int n = 5;
for (int i = 0; i < n; i++)
{
    char ch = 'A';
    for (int j = 0; j < n; j++)
    {
        cout << ch << " ";
        ch++;
    }cout << endl;
}
```

/**
 * Prints a square pattern of alphabets
 * Creates an n x n matrix where each row starts with 'A'
 * Each column in a row increments the letter
 * 
 * Example for n=3:
 * A B C
 * A B C
 * A B C
 * 
 * @param n The size of the square pattern
 */

## Number Count Pattern Implementation in C++

* This code snippet creates a sequential number pattern.
* Uses variable `n` to define the size of the pattern.
* Uses `cnt` to maintain a continuous count across rows.
* Prints `n` rows with sequential numbers.
* Each number is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 3;
int cnt = 1;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << cnt++ << " ";
    }cout << endl;
    
}
```

/**
 * Prints a square pattern of sequential numbers
 * Creates an n x n matrix with continuous counting
 * 
 * Example for n=3:
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 
 * @param n The size of the square pattern
 */

## Count Character Pattern Implementation in C++

* This code snippet creates a continuous alphabet pattern.
* Uses variable `n` to define the size of the pattern.
* Uses `ch` to maintain a continuous alphabet sequence.
* Prints letters sequentially across all positions.
* Each letter is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 3;
char ch = 'A';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << ch++ << " ";
    }cout << endl;
    
}
```

/**
 * Prints a square pattern of sequential alphabets
 * Creates an n x n matrix with continuous alphabet sequence
 * 
 * Example for n=3:
 * A B C
 * D E F
 * G H I
 * 
 * @param n The size of the square pattern
 */

## Triangle Pattern Implementation in C++

* This code snippet creates a right-angled triangle pattern using asterisks.
* Uses variable `n` to define the height of the triangle.
* Outer loop controls the number of rows.
* Inner loop prints asterisks based on row number.
* Each row contains `i+1` asterisks.
* Each asterisk is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << "* "; 
    }cout << endl;
    
}
```

/**
 * Prints a right-angled triangle pattern using asterisks
 * Number of asterisks increases by 1 in each row
 * 
 * Example for n=4:
 * *
 * * *
 * * * *
 * * * * *
 * 
 * @param n The height of the triangle pattern
 */

## Number Triangle Pattern Implementation in C++

* This code snippet creates a right-angled triangle pattern using row numbers.
* Uses variable `n` to define the height of the triangle.
* Each row prints the row number (i+1) multiple times.
* Number of digits in each row equals the row number.
* Each number is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << i+1 << " ";
    }cout << endl;
    
}
```

/**
 * Prints a right-angled triangle pattern using row numbers
 * Each row contains its row number repeated row-number times
 * 
 * Example for n=4:
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 * 
 * @param n The height of the triangle pattern
 */

## Alphabet Triangle Pattern Implementation in C++

* This code snippet creates a right-angled triangle pattern using alphabets.
* Uses variable `n` to define the height of the triangle.
* Uses `ch` starting with 'A' and increments after each row.
* Each row prints the same letter multiple times.
* Number of letters in each row equals the row number.
* Each letter is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 5;
char ch = 'A';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << ch << " ";
    }cout << endl;
    ch++;
    
}
```

/**
 * Prints a right-angled triangle pattern using alphabets
 * Each row uses a different letter, starting from 'A'
 * 
 * Example for n=5:
 * A
 * B B
 * C C C
 * D D D D
 * E E E E E
 * 
 * @param n The height of the triangle pattern
 */

## Count Pattern Implementation in C++

* This code snippet creates a right-angled triangle pattern with ascending numbers.
* Uses variable `n` to define the height of the triangle.
* Each row starts with 1 and counts up to the row number.
* Inner loop prints numbers from 1 to current row position.
* Each number is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << j+1 << " ";
    }cout << endl;
    
}
```

/**
 * Prints a right-angled triangle pattern with counting numbers
 * Each row counts from 1 up to the row position
 * 
 * Example for n=4:
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 
 * @param n The height of the triangle pattern
 */

## Reverse Count Pattern Implementation in C++

* This code snippet creates a right-angled triangle pattern with descending numbers.
* Each row starts with the row number and counts down to 1.
* Uses variable `n` to define the height of the triangle.
* Inner loop prints numbers from current row position down to 1.
* Each number is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j > 0; j--)
    {
        cout << j << " ";
    }cout << endl;
    
}
```

/**
 * Prints a right-angled triangle pattern with descending numbers
 * Each row counts down from row position to 1
 * 
 * Example for n=4:
 * 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 * 
 * @param n The height of the triangle pattern
 */

## Sequential Triangle Pattern Implementation in C++(Floyd Triangle)

* This code snippet creates a right-angled triangle with sequential numbers.
* Takes input `n` for the height of the triangle.
* Uses `cnt` to maintain a continuous count across all positions.
* Each row has one more number than the previous row.
* Each number appears only once in the pattern.
* Each number is followed by a space.
* Each row ends with a newline character.

```cpp
int n;
cin >> n;
int cnt = 1;
for (int i = 0; i < n; i++){
    for (int j = 0; j < i + 1; j++){
        cout << cnt++ << " ";
    }
    cout << endl;
}
```

/**
 * Prints a right-angled triangle with sequential counting
 * Numbers increase continuously across rows
 * 
 * Example for n=4:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 
 * @param n The height of the triangle pattern (read from standard input)
 */

## Sequential Alphabet Triangle Pattern Implementation in C++

* This code snippet creates a right-angled triangle with sequential alphabets.
* Uses variable `n` to define the height of the triangle.
* Uses `ch` starting with 'A' and continuously increments.
* Each position gets the next alphabet in sequence.
* Alphabets continue across rows without resetting.
* Each letter is followed by a space.
* Each row ends with a newline character.

```cpp
int n = 4;
char ch = 'A';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << ch++ << " ";
    }cout << endl;
    
}
```

/**
 * Prints a right-angled triangle with sequential alphabets
 * Letters continue in sequence across rows
 * 
 * Example for n=4:
 * A
 * B C
 * D E F
 * G H I J
 * 
 * @param n The height of the triangle pattern
 */

## Right-Shifting Number Pattern Implementation in C++(Inverted Triangle)

* This code snippet creates a pattern of numbers with right shifts.
* Uses variable `n` to define the size of the pattern.
* Each row starts with increasing spaces based on row number.
* Number of digits decreases in each subsequent row.
* Each row prints the same digit (row number + 1).
* Uses nested loops for spaces and digits.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int k = 0; k < i; k++)
    {
        cout << " ";
    }

    for (int j = 0; j < n-i; j++)
    {
        cout << i+1;
    }
    
    cout << endl;
    
}
```

/**
 * Prints a pattern of numbers with right shifts
 * Each row is indented one space more than the previous
 * Number of digits decreases by one in each row
 * 
 * Example for n=4:
 * 1111
 *  222
 *   33
 *    4
 * 
 * @param n The size of the pattern
 */

## Right-Shifting Alphabet Pattern Implementation in C++

* This code snippet creates a pattern of letters with right shifts.
* Uses variable `n` to define the size of the pattern.
* Uses `ch` starting with 'A' and increments after each row.
* Each row starts with increasing spaces based on row number.
* Number of letters decreases in each subsequent row.
* Each row prints the same letter before moving to next.
* Each row ends with a newline character.

```cpp
int n = 4;
char ch = 'A';
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }
    for (int  k = 0; k < n-i; k++)
    {
        cout << ch;
    }
    ch++;
    cout << endl;
}
```

/**
 * Prints a pattern of letters with right shifts
 * Each row is indented one space more than the previous
 * Number of letters decreases by one in each row
 * 
 * Example for n=4:
 * AAAA
 *  BBB
 *   CC
 *    D
 * 
 * @param n The size of the pattern
 */

## Number Pyramid Pattern Implementation in C++

* This code snippet creates a symmetric pyramid pattern with numbers.
* Uses variable `n` to define the height of the pyramid.
* Has three distinct parts in each row:
    * Leading spaces that decrease with each row
    * Ascending numbers from 1 to row position
    * Descending numbers from row position back to 1
* Uses nested loops for spaces and numbers.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
        for (int j = 0; j < n-i-1; j++)
        {
                cout << " ";
        }
        for (int j = 0; j < i+1 ; j++)
        {
                cout << j+1;   
        }
        for (int k = i; k > 0; k--)
        {
                cout << k;
        }
        cout << endl;
}
```

/**
 * Prints a symmetric pyramid pattern with numbers
 * Each row has ascending and descending number sequences
 * 
 * Example for n=4:
 *    1
 *   121
 *  12321
 * 1234321
 * 
 * @param n The height of the pyramid pattern
 */

## Diamond Pattern Implementation in C++

* This code snippet creates a hollow diamond pattern using asterisks.
* Uses variable `n` to define the size of the diamond.
* Pattern consists of two parts:
    * Upper half: Inverted triangle of spaces followed by asterisks
    * Lower half: Regular triangle of spaces followed by asterisks
* Each line has two asterisks with spaces between them.
* First and middle lines have single asterisks.
* Uses nested loops for spaces and asterisk placement.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < n - i - 1; j++)
    {
        cout << " ";
    }
    cout << "*";
    if (i != 0)
    {
        for (int k = 0; k < (2 * i - 1); k++)
        {
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}

for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < i + 1; j++)
    {
        cout << " ";
    }
    cout << "*";
    if (i != n - 2)
    {
        for (int k = 0; k < 2 * (n - i) - 5; k++)
        {
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}
```

/**
 * Prints a hollow diamond pattern using asterisks
 * Creates symmetrical upper and lower halves
 * 
 * Example for n=4:
 *    *
 *   * *
 *  *   *
 * *     *
 *  *   *
 *   * *
 *    *
 * 
 * @param n The size of the diamond pattern
 */


## Butterfly Pattern Implementation in C++

* This code snippet creates a butterfly pattern using asterisks.
* Uses variable `n` to define the size of the butterfly pattern.
* Pattern consists of two parts:
    * Upper half: Expanding asterisks with center spaces
    * Lower half: Contracting asterisks with center spaces
* Each row is symmetrical around the center.
* Uses three nested loops in each half for pattern formation.
* Each row ends with a newline character.

```cpp
int n = 4;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout << "*";
    }
    for (int k = 0; k < 2*(n-i-1); k++)
    {
        cout << " ";
    }
    for (int l = 0; l < i+1; l++)
    {
        cout << "*";
    }
    cout << endl;
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i; j++)
    {
        cout << "*";
    }
    for (int k = 0; k < 2*i; k++)
    {
        cout << " ";
    }
    for (int k = 0; k < n-i; k++)
    {
        cout << "*";
    }
    cout << endl;
}
```

/**
 * Prints a butterfly pattern using asterisks
 * Pattern expands outward then contracts inward
 * 
 * Example for n=4:
 * *      *
 * **    **
 * ***  ***
 * ********
 * ********
 * ***  ***
 * **    **
 * *      *
 * 
 * @param n The size of each wing of the butterfly
 */




 # Function : 

## Functions in Programming

A function is a reusable block of code that performs a specific task. Think of it as a mini-program within your program.

### Key Concepts:
- **Input**: Values passed to the function (parameters/arguments)
- **Process**: The actual task performed by the function
- **Output**: Value returned by the function (if any)

### Example in C++:
```cpp
int add(int a, int b) {    // Function declaration
    return a + b;          // Return statement
}

// Function call
int result = add(5, 3);    // result = 8
```

### Benefits:
1. **Code Reusability**: Write once, use multiple times
2. **Modularity**: Break complex problems into smaller parts
3. **Maintainability**: Easier to fix and update code
4. **Readability**: Makes code more organized and understandable

### Types of Functions:
1. **Built-in Functions**: Pre-defined in programming language
2. **User-defined Functions**: Created by programmers
3. **Parameterized Functions**: Accept inputs
4. **Non-parameterized Functions**: Don't accept inputs

### Important Concepts:
#### Parameters vs Arguments
- **Parameters**: Variables in function declaration
- **Arguments**: Actual values passed to function
```cpp
// num is a parameter
void printSquare(int num) {
    cout << num * num;
}

// 5 is an argument
printSquare(5);
```

#### Pass by Value vs Reference
- **Pass by Value**: Copy of value is passed
- **Pass by Reference**: Memory address is passed
```cpp
// Pass by value
void increment(int x) {
    x++;    // Original value unchanged
}

// Pass by reference
void increment(int& x) {
    x++;    // Original value modified
}
```

#### Function Overloading
Multiple functions with same name but different parameters
```cpp
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}
```
### Example: Sum of First N Numbers
This function calculates the sum of first N natural numbers.

```cpp
void sumN(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (i+1);
    }
    cout << sum << endl;
}

int main() {
    int n;
    cin >> n;
    sumN(n);
}
```

**Function Breakdown:**
- Takes integer `n` as input
- Uses loop to add numbers from 1 to n
- Prints sum to console
- Example: For n=5, output is 15 (1+2+3+4+5)


### Example: Factorial Calculation
This function calculates the factorial of a given number N.

```cpp
int factorial(int n) {
    int fact = 1;
    for (int i = 0; i < n; i++) {
        fact *= (i+1);
    }
    return fact;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
}
```

**Function Breakdown:**
- Takes integer `n` as input
- Uses loop to multiply numbers from 1 to n
- Returns factorial value
- Example: For n=5, output is 120 (1*2*3*4*5)

### Function Memory Management

Functions have specific memory allocation patterns in program execution:

#### Memory Segments
- **Stack**: Stores local variables and function parameters
- **Heap**: Dynamic memory allocation
- **Code/Text**: Stores actual function instructions

#### Stack Frame
Each function call creates a stack frame containing:
- Local variables
- Parameters
- Return address
- Previous frame pointer

#### Memory Lifecycle
1. **Function Call**: New stack frame created
2. **Execution**: Memory used for operations
3. **Return**: Stack frame destroyed, memory freed

#### Example of Stack Usage
```cpp
void func(int x) {    // x stored in stack frame
    int y = 5;        // y stored in stack frame
    // operations
}                     // stack frame cleared
```

#### Memory Optimization Tips
- Avoid excessive recursion
- Use references for large objects
- Clear dynamic allocations
- Be mindful of stack size limits


### Example: Sum of Digits
This function calculates the sum of all digits in a given number.

```cpp
int sumOfDigits(int n){
    int digitSum = 0;
    while (n>0)
    {
        digitSum+=n%10;
        n/=10;
    }
    return digitSum;
}

int main(){
    int num;
    cin >> num;
    cout << sumOfDigits(num);
}
```

**Function Breakdown:**
- Takes integer `n` as input
- Uses modulo and division to extract digits
- Adds each digit to running sum
- Returns total sum of digits
- Example: For n=123, output is 6 (1+2+3)


### Example: nCr Calculation
This implementation calculates the combination (nCr) of two numbers using factorial calculations.

```cpp
int factorial(int n){
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact*=(i+1);
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    
    return fact_n/(fact_r*fact_nmr);
}
```

**Function Breakdown:**
- `factorial`: Helper function that calculates factorial
- `nCr`: Main function that calculates combination
- Uses formula: nCr = n!/(r!*(n-r)!)
- Returns the combination value
- Example: For n=5, r=2, output is 10


### Example: Print All Prime Numbers
This function prints all prime numbers up to a given number N and counts them.

```cpp
void printAllPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cnt++;
            cout << i << " ";
        } 
    }cout << endl;
    cout << "Total no. of Primes from 1 to n is " << cnt << endl;
}

int main()
{
    int n;
    cin >> n;
    printAllPrime(n);
}
```

**Function Breakdown:**
- Takes integer `n` as input
- Checks each number from 1 to n for primality
- Uses efficient square root method for prime check
- Prints each prime number found
- Counts total prime numbers
- Example: For n=10, output is "1 2 3 5 7" and count is 5


### Example: Fibonacci Number
This recursive implementation calculates the nth Fibonacci number.

```cpp
int fibonacci(int n){
    if(n<=1) return n;
    else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
}
```

**Function Breakdown:**
- Uses recursion to calculate Fibonacci numbers
- Base case: returns n if n<=1
- Recursive case: adds previous two Fibonacci numbers
- Returns nth Fibonacci number
- Example: For n=5, output is 5 (sequence: 0,1,1,2,3,5)

