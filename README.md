# C Programming Practice

A collection of standalone C programs for practicing fundamental programming concepts. The exercises are numbered `c1.c` through `c42.c`; most read input from the terminal and print a result.

## Topics

| Files | Exercises |
|---|---|
| `c1.c`–`c10.c` | Student marks and grades, swapping values, temperature conversion, bitwise even/odd checks, triangle area and classification, digit sums, string digit checks, and leap years |
| `c11.c`–`c15.c` | Fibonacci sequence, prime checks, primes in a range, Armstrong numbers, and star patterns |
| `c16.c`–`c21.c` | Array minimum and maximum, reversing and shifting arrays, values above the average, finding a pair for a target in a sorted array, and bubble sort |
| `c22.c`–`c27.c` | Functions, recursion, powers, factorials, digit sums, and array sums |
| `c28.c`–`c29.c` | Matrix operations |
| `c30.c`–`c32.c` | Dynamic memory allocation with `malloc`, `calloc`, and `realloc` |
| `c33.c`–`c34.c` | String length and concatenation |
| `c35.c`–`c38.c` | Structures, unions, student data, and arithmetic with complex numbers |
| `c39.c`–`c42.c` | File input/output, including character- and string-based operations |

## Compile and run

Each source file is a separate program with its own `main` function. Compile and run one file at a time with a C compiler such as GCC:

```powershell
gcc .\c1.c -o c1.exe
.\c1.exe
```

For example, compile a different exercise by replacing `c1.c` with its filename. The programs use C99 features, so use a compiler configured for C99 or newer. `c14.c` uses `pow` from the math library; on platforms that require explicit math linking, compile it with:

```sh
gcc c14.c -o c14 -lm
```

These are practice exercises and may require corrections or adjustments depending on your compiler and inputs.
