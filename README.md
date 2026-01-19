LAB-2-DAA: Algorithm Analysis and Sorting

Overview
This laboratory assignment focuses on the empirical analysis of algorithms using numerical experiments.

You will work on two independent problems:
1. Numerical Verification of Asymptotic Notation (Big-O, Big-Ω, Big-Θ)
2. Comparative Analysis of Sorting Algorithms (Bubble, Merge, Quick Sort)


Repository Structure
- main_A.cpp : Edit this file for Problem A
- main_B.cpp : Edit this file for Problem B
- check.sh   : Script to test your code locally
- README.md  : Instruction file

Warning: Do NOT rename files or modify the hidden .github folder.


Problem A: Numerical Verification of Asymptotic Notation

Description:
You are given predefined pairs of functions f(n) and g(n) identified by an ID.
For each ID, determine:
- f(n) ∈ O(g(n))
- f(n) ∈ Ω(g(n))
- f(n) ∈ Θ(g(n))

Rules:
- No symbolic manipulation
- No hard-coded answers
- Use numerical evaluation of f(n)/g(n)
- Use large n (e.g., 10^6, 10^7)
- Use long double precision

Input Format:
T
ID
ID
...

Output Format (exact):
Big-O: YES/NO
Big-Omega: YES/NO
Theta: YES/NO


Problem B: Comparative Analysis of Sorting Algorithms

Description:
Implement the following sorting algorithms manually:
- Bubble Sort
- Merge Sort
- Quick Sort

Do NOT use std::sort.

Input Format:
n
a1 a2 a3 ... an

Output Format:
(sorted array)
BubbleSort: <time> ms
MergeSort: <time> ms
QuickSort: <time> ms

Important:
The sorted array must be printed on the first line.


How to Run & Test:
1. Open terminal in the repository folder
2. Run: bash check.sh

Submission:
1. Ensure check.sh passes locally
2. Commit and push your code to GitHub

Good Luck!

