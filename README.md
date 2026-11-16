# Worth It — The Questions Actually Worth Your Time

A filtered list of **42 questions** (out of 97 in [README.md](README.md)) that are tricky, teach a new concept, or are likely to show up in vivas. The basic ones (positive/negative, equal or not, simple formulas) are cut. Question numbers match the full workbook.

| Tag | Meaning |
|---|---|
| 🆕 | New concept (pointers, structs, file handling, recursion, strings, macros…) |
| 🧠 | Tricky logic that takes real thinking |
| 🎯 | Has a trap that catches people |

## Contents

| Exp | Topic | Questions |
|---|---|---|
| 2 | [Variables, Data Types, Operators, Expressions and I/O in C](#experiment-2--variables-data-types-operators-expressions-and-io-in-c) | 3 |
| 3 | [Conditional Branching (if-else, switch-case)](#experiment-3--conditional-branching-if-else-switch-case) | 4 |
| 4 | [Looping Control Structures (for, while, do-while)](#experiment-4--looping-control-structures-for-while-do-while) | 6 |
| 5 | [Nested Loops and Loop Control (break, continue)](#experiment-5--nested-loops-and-loop-control-break-continue) | 4 |
| 6 | [One-Dimensional Arrays](#experiment-6--one-dimensional-arrays) | 3 |
| 7 | [Two-Dimensional Arrays and Strings](#experiment-7--two-dimensional-arrays-and-strings) | 3 |
| 8 | [Functions, Recursion, Inline Functions and Macros](#experiment-8--functions-recursion-inline-functions-and-macros) | 7 |
| 9 | [Structures and Pointers](#experiment-9--structures-and-pointers) | 8 |
| 10 | [File Handling (Files and Streams)](#experiment-10--file-handling-files-and-streams) | 4 |
| | **Total** | **42** |

---

## Experiment 2 — Variables, Data Types, Operators, Expressions and I/O in C

#### Exp2 · Q5

🆕 New concept

Write a C program to demonstrate type conversion by converting a float to an integer and an integer to a float and displaying the results.

> **Why it's worth it:** Implicit vs explicit casting. float→int truncates (3.99 → 3), and `int/int` division silently drops the fraction.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp2 · Q9

🎯 Trap

Write a C program to interchange the values of two variables, x and y, and display the updated values. (using multiplication and division operator)

> **Why it's worth it:** Swap using `*` and `/` only. Breaks if either value is 0 (divide by zero) and can overflow. Handle the 0 case.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp2 · Q11

🧠 Tricky logic

Write a C program to calculate the area of a triangle using Heron's formula. Accept the lengths of the three sides as input.

> **Why it's worth it:** Needs `math.h` and `sqrt()`, plus a validity check (sum of any two sides > third). Compile with `-lm` on gcc.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 3 — Conditional Branching (if-else, switch-case)

#### Exp3 · Q3

🧠 Tricky logic

Write a C program to find whether a given year is a leap year or not.

> **Why it's worth it:** Leap year: divisible by 400, OR divisible by 4 and not by 100. The order of your conditions matters.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp3 · Q9

🆕 New concept

Write a C program that displays a menu to calculate the area of different geometric shapes using a switch-case statement. The menu should include Triangle, Square, Circle, Rectangle, and Regular Polygon. Accept the required dimensions from the user and display the calculated area of the selected shape.

> **Why it's worth it:** Menu-driven `switch`. Each case reads different inputs; regular polygon area needs `tan()` from `math.h`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp3 · Q14

🧠 Tricky logic

Write a C program to accept water consumption in gallons and calculate the total water bill according to the following tariff rates:
- First 50 gallons: Rs. 1.00 per gallon
- Next 100 gallons (51-150): Rs. 1.50 per gallon
- Next 100 gallons (151-250): Rs. 2.00 per gallon
- Above 250 gallons: Rs. 2.50 per gallon

After calculating the bill, add a surcharge of 15% to the total amount and display the final bill.

> **Why it's worth it:** Slab billing: compute each slab's charge separately, sum them, then add the 15% surcharge.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp3 · Q16

🆕 New concept

Write a C program to implement a simple banking application using a switch-case statement. Assume an initial account balance of Rs. 10,000. Display a menu with the following options:
- Deposit Amount
- Withdraw Amount
- View Balance
- Exit

Perform the selected operation and display the updated account balance after each transaction.

> **Why it's worth it:** Menu loop (`do-while` + `switch`) that keeps program state. Don't let a withdrawal exceed the balance.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 4 — Looping Control Structures (for, while, do-while)

#### Exp4 · Q5

🧠 Tricky logic

Develop a C program to determine whether a given number is a Perfect Number.

> **Why it's worth it:** Sum of proper divisors equals the number. Must be written with a `while` loop. Exclude the number itself.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp4 · Q10

🎯 Trap

Develop a C program that repeatedly accepts positive integers and computes the count, maximum, minimum, and average. Terminate when -1 is entered.

> **Why it's worth it:** Sentinel loop. Initialise min/max from the first input, not 0, and compute the average as a float.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp4 · Q12

🧠 Tricky logic

Implement a C program to compute the sum of the series 1 + 11 + 111 + 1111 + … for a user-specified number of terms.

> **Why it's worth it:** Build each term as `term = term*10 + 1` and add it up. No `pow()` needed. Same trick solves 9 + 99 + 999…

**Answer:**

```c

```

- [ ] Solved

---

#### Exp4 · Q18

🧠 Tricky logic

Construct a C program to determine whether a given integer is an Armstrong Number.

> **Why it's worth it:** Digit extraction plus a digit count. Raise each digit to that power with a loop, because `pow()` can give float errors.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp4 · Q20

🧠 Tricky logic

Implement a C program to determine the Greatest Common Divisor (GCD) of two positive integers.

> **Why it's worth it:** Euclid's algorithm with `%` in a `while` loop.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp4 · Q21

🧠 Tricky logic

Develop a C program to interchange the first and last digits of a given integer and display the modified number.

> **Why it's worth it:** Pure digit manipulation: get first digit, last digit (`% 10`) and the middle part. Single-digit numbers are an edge case.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 5 — Nested Loops and Loop Control (break, continue)

#### Exp5 · Q3

🆕 New concept

Write a program to print all prime numbers from 1 to 100 (use nested loop and break).

> **Why it's worth it:** Nested loop with `break`: stop at the first divisor, and only test up to √n.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp5 · Q5

🧠 Tricky logic

Q2 — Print the following pattern:
```
Enter a positive number n: 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

> **Why it's worth it:** Alternating 1/0 triangle. Look for the pattern in the parity of row + column.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp5 · Q6

🧠 Tricky logic

Q3 — Print the following pattern:
```
Enter a positive number n: 5
1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1
```

> **Why it's worth it:** Hollow rectangle. Print 1 only on the border: first/last row or first/last column, otherwise 0.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp5 · Q7

🆕 New concept

Develop a C program to use a loop and the `continue` statement to display all uppercase and lowercase letters along with their ASCII values. Handle non-alphabetic ASCII values between 91 and 96 by skipping them. (Hint: ASCII value of 'A' = 65, 'a' = 97)

> **Why it's worth it:** The `continue` statement. Loop over ASCII 65–122 and skip 91–96.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 6 — One-Dimensional Arrays

#### Exp6 · Q3

🧠 Tricky logic

Apply array manipulation techniques to construct a C program that reverses the elements of a one-dimensional array in place without using any auxiliary array.

> **Why it's worth it:** In-place reverse with two indices (`i` and `n-1-i`). Only loop to the halfway point or you undo your own work.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp6 · Q4

🧠 Tricky logic

Demonstrate the insertion operation by writing a C program that accepts an element and a valid position from the user and inserts the element into the specified position in an array, shifting subsequent elements accordingly.

> **Why it's worth it:** Insertion: shift elements right starting from the end. The array needs spare space, and validate the position.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp6 · Q9

🆕 New concept

Apply the Bubble Sort algorithm to develop a C program that arranges the elements of an integer array in ascending order and displays the sorted array.

> **Why it's worth it:** Bubble sort with nested loops. Add a `swapped` flag to exit early.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 7 — Two-Dimensional Arrays and Strings

#### Exp7 · Q3

🧠 Tricky logic

Employ matrix operations to construct a C program that verifies whether a given square matrix is Symmetric and reports the outcome.

> **Why it's worth it:** Symmetric means `a[i][j] == a[j][i]` for all pairs. Only defined for square matrices.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp7 · Q6

🆕 New concept

Perform string concatenation by developing a C program that joins two strings and stores the result in the first string without using the built-in `strcat()` function.

> **Why it's worth it:** Strings are `char` arrays ending in `'\0'`. Find the end of the first string, copy the second, re-terminate. The first array must be big enough.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp7 · Q7

🆕 New concept

Use character-by-character comparison to construct a C program that determines whether two strings are identical without using the built-in `strcmp()` function and displays the comparison result.

> **Why it's worth it:** Compare char by char until a mismatch or `'\0'`. Different lengths are the edge case.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 8 — Functions, Recursion, Inline Functions and Macros

#### Exp8 · Q1

🆕 New concept

Demonstrate the concept of parameter passing in C by implementing a function `increment(int n)` with a `void` return type. The function should increment the received parameter by 1 and display its value inside the function. Print the value of the original variable before and after the function call in `main()` to verify that the actual variable remains unchanged.

> **Why it's worth it:** Demonstrates pass by value: the original variable stays unchanged. This sets up pointers in Exp 9.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q2

🧠 Tricky logic

Develop a modular C program that uses two user-defined functions with parameters and return values, where one function computes the sum of the digits of a given integer and the other function finds the reverse of the same integer. Display the results returned by both functions in the `main()` function.

> **Why it's worth it:** Two functions, each returning an `int`. Think about what happens to trailing zeros when reversing.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q3

🆕 New concept

Implement a user-defined function `find_max()` that accepts an integer array and its size as arguments, identifies the largest element in the array, and returns it to the calling function. Call `find_max` from `main()` and display the maximum element.

> **Why it's worth it:** Passing an array to a function (it decays to a pointer), so you must also pass its size.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q5

🎯 Trap

Apply modular programming concepts to design and implement a C program that generates the Collatz sequence (3n + 1 sequence) for a user-entered positive integer. The input value should be passed to a user-defined function `generate_collatz()`, which repeatedly applies the Collatz rules until the sequence reaches 1. Display the complete sequence on a single line using appropriate separators such as `->`, and use the appropriate data type to safely handle intermediate values. For each step of the loop, if the current term is even, the next value is calculated as n/2, and if it is odd, the next value is calculated as 3n+1.

> **Why it's worth it:** Intermediate Collatz values overflow `int`; use `long long`. Print `->` only between terms, not after the last.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q6

🆕 New concept

Implement a recursive C function to calculate the power of a number and display the computed result for the given base and exponent.

> **Why it's worth it:** Recursion: define a clear base case. Think about exponent 0 (and negative exponents if you want to handle them).

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q8

🆕 New concept

Construct a recursive function `sum_digits(int n)` to determine and display the sum of the digits of a given integer.

> **Why it's worth it:** Recursion on digits: `n % 10` plus the same function on `n / 10`. Base case is `n == 0`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp8 · Q10

🎯 Trap

Use a macro function to implement a C program that calculates and displays the absolute difference between two user-input integers.

> **Why it's worth it:** Macros are text substitution. Parenthesise every argument, then try `ABS_DIFF(x++, y)` to see why macros are risky.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 9 — Structures and Pointers

#### Exp9 · Q1

🆕 New concept

Develop a C program that uses an Employee structure containing ID, Name, and Salary. Create an array of N employee records, accept their details from the user, and implement a search operation to locate an employee using a given ID. Display the employee details if the ID is found; otherwise, display an appropriate message.

> **Why it's worth it:** Array of structs plus a search by ID. Remember `scanf("%s", name)` has no `&` for char arrays.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q2

🆕 New concept

Implement a C program that uses a STUDENT structure containing SID, Name, Address, and CGPA. Accept the details of N students and display the information of all students whose address is "Mumbai" and whose CGPA is in the range of 7.0 to 10.0.

> **Why it's worth it:** Filter structs on two conditions at once. Compare the address with `strcmp()`, not `==`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q3

🆕 New concept

Construct a ComplexNumber structure containing Real and Imaginary parts. Develop a C program to add two complex numbers, store the result in a third ComplexNumber structure variable, and display the first complex number, the second complex number, and the resultant complex number.

> **Why it's worth it:** Struct as a user-defined type: three struct variables and adding the real and imaginary parts separately.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q4

🆕 New concept

Implement a C program that uses a function to increment the value of an integer variable by 1 through parameter passing (call by address). Display the value of the variable before and after the function call in `main()` to demonstrate the effect of the function on the original variable.

> **Why it's worth it:** Pointer basics and call by address. Watch the precedence trap: `(*p)++` is not `*p++`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q5

🆕 New concept

Develop a C program to calculate and display the sum of all elements in an array of user-specified size by applying pointer arithmetic for array traversal.

> **Why it's worth it:** Traverse with `*(p + i)` or `p++` instead of `a[i]`. User-specified size means a VLA or `malloc`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q6

🆕 New concept

Construct a function `custom_strlen()` that uses a character pointer to traverse a null-terminated string and determine its length without using the standard library function `strlen()`. Display the computed string length.

> **Why it's worth it:** Walk a `char *` until `'\0'` and count. This is `strlen` rebuilt from scratch.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q7

🆕 New concept

Apply pointer-based string processing to develop a C program that determines whether a user-entered string is a palindrome and displays the appropriate result.

> **Why it's worth it:** Two pointers, one at the start and one at the end, moving inward. Beware the trailing newline if you use `fgets`.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp9 · Q8

🎯 Trap

Write a structure `cricket` with information like Player Name, Team Name & Batting average. Write a program to read & display information of 11 players of a team.

> **Why it's worth it:** The sample program in the theory section is full of bugs (missing `struct`, missing `&`, wrong loop bound). Fix it as you solve.

**Answer:**

```c

```

- [ ] Solved

---

## Experiment 10 — File Handling (Files and Streams)

#### Exp10 · Q1

🆕 New concept

Develop a menu-driven C program using switch-case statements to perform file handling operations on a text file named `product.txt`. The program should write, read, append, search, and delete product records containing Product ID, Price, and Quantity using the `fprintf()` and `fscanf()` functions, and display the result of each operation.

> **Why it's worth it:** Text file I/O: `fopen` modes, `fprintf` / `fscanf`. Delete = copy everything except the record to a temp file, then remove and rename.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp10 · Q2

🆕 New concept

Implement a menu-driven C program using switch-case statements to manage product records stored in a binary file named `product.dat`. The program should write, read, append, search, and delete records of a structure containing Product ID, Price, and Quantity using appropriate binary file operations, and display the outcome of each operation.

> **Why it's worth it:** Binary I/O with `fwrite` / `fread` on a struct. `fseek` lets you jump to records. Delete works the same way as in the text version.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp10 · Q3

🆕 New concept

Write a program to copy the contents of one file (use the above `file.txt`) to another file, and also print a summary of the copy process, such as the number of characters, words, and lines copied.

> **Why it's worth it:** Copy with `fgetc` / `fputc` while counting characters, words and lines.

**Answer:**

```c

```

- [ ] Solved

---

#### Exp10 · Q4

🆕 New concept

Write a program to create two files called `even` and `odd`, and write a set of numbers stored in an array to these files. Store all odd numbers in the `odd` file and even numbers in the `even` file.

> **Why it's worth it:** Write to two files from one array. Odd numbers go to one file, even numbers to the other. Remember `fclose`.

**Answer:**

```c

```

- [ ] Solved
