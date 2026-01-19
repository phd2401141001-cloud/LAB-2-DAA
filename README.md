# LAB-2-DAA: Algorithm Analysis and Sorting

## 📌 Overview
This laboratory assignment focuses on the empirical analysis of algorithms. You will work on two distinct problems:
1.  **Problem A (Numerical Verification):** Verifying Big-O, Big-$\Omega$, and Big-$\Theta$ relationships numerically.
2.  **Problem B (Sorting Analysis):** Implementing and timing Bubble Sort, Merge Sort, and Quick Sort.

---

## 📂 Repository Structure

* `main_A.cpp` 📝 **Edit this file** for Problem A.
* `main_B.cpp` 📝 **Edit this file** for Problem B.
* `check.sh` ⚙️ Run this script to test your code locally.
* `README.md` 📖 This instruction file.

> **⚠️ Warning:** Do not rename any files or modify the hidden `.github` folder. Doing so will break the autograder.

---

## 📝 Problem A: Numerical Verification of Asymptotic Notation

### Description
You are given predefined pairs of functions $f(n)$ and $g(n)$, identified by an **ID**. Your task is to determine whether:
* $f(n) \in O(g(n))$
* $f(n) \in \Omega(g(n))$
* $f(n) \in \Theta(g(n))$

**Constraint:** You must base your decision on **numerical evaluation** (checking the ratio $f(n)/g(n)$ as $n$ increases) rather than symbolic derivation.

### Input Format
* An integer $T$ (number of test cases).
* $T$ lines follow, each containing an integer **ID**.

### Output Format
For each ID, print exactly three lines:

Big-O: YES/NO
Big-Omega: YES/NO
Theta: YES/NO
text
InstructionsOpen main_A.cpp.Implement the logic to calculate $f(n)$ and $g(n)$ for large values of $n$ (e.g., $10^6$ vs $10^7$).Analyze the trend of the ratio to determine the complexity class.

