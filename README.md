# Number-Based Programming Solutions in C
**This repository includes a collection of C programs solving various number-based problems. Each program checks if a given number satisfies specific properties, showcasing different mathematical and logical concepts. Below are the programs included and their respective logic with examples.**

**1. Spy Number**  
Logic: A number where the sum of its digits equals the product of its digits.  
Examples:
<pre>
    112: Sum = 1 + 1 + 2 = 4, Product = 1 × 1 × 2 = 4
    22: Sum = 2 + 2 = 4, Product = 2 × 2 = 4
</pre>
---
**2. Duck Number**  
Logic: A number that contains at least one '0' but does not start with it.  
Examples:
<pre>
    203: Contains '0' not at the beginning.
    1405: Contains '0' in the middle.
</pre>
---
**3. Tech Number**  
Logic: A number with an even number of digits that can be split into two parts, and the square of their sum equals the number.  
Examples:
<pre>
    2025: Split as 20 and 25; (20 + 25)² = 2025.
    3025: Split as 30 and 25; (30 + 25)² = 3025.
</pre>
---
**4. Buzz Number**  
Logic: A number divisible by 7 or ending in 7.  
Examples:
<pre>
    49: Divisible by 7.
    27: Ends with 7.
</pre>
---
**5. Disarium Number**  
Logic: A number where the sum of its digits powered by their positions equals the number itself.  
Examples:
<pre>
    175: 1¹ + 7² + 5³ = 175.
    89: 8¹ + 9² = 89.
</pre>
---
**6. Tribonacci Number**  
Logic: A number that appears in a sequence where each term is the sum of the preceding three terms, starting with 0, 1, and 1.  
Examples:
<pre>
    4: Sequence = 0, 1, 1, 2, 4...
    13: Sequence = 0, 1, 1, 2, 4, 7, 13...
</pre>
---
**7. Magic Number**  
Logic: A number where the sum of its digits, repeatedly added together, equals 1.  
Examples:
<pre>
    1729: 1 + 7 + 2 + 9 = 19, then 1 + 9 = 10, then 1 + 0 = 1.
    19: 1 + 9 = 10, then 1 + 0 = 1.
</pre>
---
**8. Abundant Number**  
Logic: A number where the sum of its proper divisors (excluding itself) is greater than the number.  
Examples:
<pre>
    12: Divisors = 1, 2, 3, 4, 6; Sum = 16 > 12.
    18: Divisors = 1, 2, 3, 6, 9; Sum = 21 > 18.
</pre>
---
**9. Neon Number**  
Logic: A number where the sum of the digits of its square equals the number itself.  
Examples:
<pre>
    9: 9² = 81, Sum of digits = 8 + 1 = 9.
    1: 1² = 1, Sum of digits = 1.
</pre>
---
**10. Armstrong Number**  
Logic: A number where the sum of its digits, each raised to the power of the number of digits, equals the number.  
Examples:
<pre>
    153: 1³ + 5³ + 3³ = 153.
    370: 3³ + 7³ + 0³ = 370.
</pre>
---
**11. Pronic Number**  
Logic: A number that is the product of two consecutive integers.  
Examples:
<pre>
    12: 3 × 4 = 12.
    20: 4 × 5 = 20.
</pre>
---
**12. Harshad Number**  
Logic: A number divisible by the sum of its digits.  
Examples:
<pre>
    18: Sum of digits = 9, and 18 ÷ 9 = 2.
    24: Sum of digits = 6, and 24 ÷ 6 = 4.
</pre>
---
**13. Harshad Magic Number**  
Logic: A Harshad number where the sum of the digits, when repeatedly added, equals 1.  
Examples:
<pre>
    1729: 1 + 7 + 2 + 9 = 19, 1 + 9 = 10, 1 + 0 = 1.
</pre>
---
**14. Dudeney Number**  
Logic: A number where the sum of the digits equals the cube root of the number.  
Examples:
<pre>
    512: Cube root = 8, Sum of digits = 8.
    1: Cube root = 1, Sum of digits = 1.
</pre>
---
**15. Niven Number (Similar to Harshad Number)**  
Logic: A number divisible by the sum of its digits.  
Examples:
<pre>
    18: Sum of digits = 9, 18 ÷ 9 = 2.
    24: Sum of digits = 6, 24 ÷ 6 = 4.
</pre>
---
**16. Bouncy Number**  
Logic: A number whose digits are neither entirely increasing nor entirely decreasing.  
Examples:
<pre>
    132: Not entirely increasing or decreasing.
    253: Increasing from 2 to 5, then decreasing from 5 to 3.
</pre>
---

## Running the Programs
Each program file is standalone and can be compiled using a C compiler such as gcc.  
Run a program by entering:

```
gcc program_name.c -o output_name
./output_name
```


