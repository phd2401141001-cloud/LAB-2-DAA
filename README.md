# LAB-2-DAA: Algorithm Analysis and Sorting

## Overview
This laboratory assignment focuses on the empirical analysis of algorithms. You will work on two distinct problems:
1.  **Numerical Verification of Asymptotic Notation**: Verifying Big-O, Big-$\Omega$, and Big-$\Theta$ relationships numerically.
2.  **Comparative Analysis of Sorting Algorithms**: Implementing and timing Bubble Sort, Merge Sort, and Quick Sort.

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

You must base your decision on **numerical evaluation** (checking the ratio $f(n)/g(n)$ as $n$ increases) rather than symbolic derivation.

### Input Format
* An integer $T$ (number of test cases).
* $T$ lines follow, each containing an integer **ID**.

### Output Format
For each ID, print exactly three lines:
```text
Big-O: YES/NO
Big-Omega: YES/NO
Theta: YES/NO



# LAB-2-DAA: Algorithm Analysis and Sorting

## Overview
This laboratory assignment focuses on the empirical analysis of algorithms. You will work on two distinct problems:
1.  **Numerical Verification of Asymptotic Notation**: Verifying Big-O, Big-$\Omega$, and Big-$\Theta$ relationships numerically.
2.  **Comparative Analysis of Sorting Algorithms**: Implementing and timing Bubble Sort, Merge Sort, and Quick Sort.

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

You must base your decision on **numerical evaluation** (checking the ratio $f(n)/g(n)$ as $n$ increases) rather than symbolic derivation.

### Input Format
* An integer $T$ (number of test cases).
* $T$ lines follow, each containing an integer **ID**.

### Output Format
For each ID, print exactly three lines:
```text
Big-O: YES/NO
Big-Omega: YES/NO
Theta: YES/NO

InstructionsOpen main_A.cpp.Implement the function logic to calculate $f(n)$ and $g(n)$ for large values of $n$ (e.g., $10^6$ vs $10^7$).Analyze the trend of the ratio to determine the complexity class.📝 Problem B: Comparative Analysis of Sorting AlgorithmsDescriptionYou must implement three sorting algorithms manually (do not use std::sort):Bubble SortMerge SortQuick SortFor a given input array, you must sort it and measure the execution time for each algorithm in milliseconds.Input FormatAn integer $n$ (size of the array).A list of $n$ integers.Output FormatLine 1: The sorted array (space-separated).Line 2: BubbleSort: <time> msLine 3: MergeSort: <time> msLine 4: QuickSort: <time> msInstructionsOpen main_B.cpp.Implement the three sorting algorithms.Use <chrono> to measure the execution time of each sort.Crucial: Ensure the Sorted Array is printed on the very first line of output.🚀 How to Run & TestYou can test your solution locally before submitting.1. Open the TerminalIn your VS Code or GitHub Codespaces terminal, ensure you are in the repository folder.2. Run the AutograderType the following command:Bashbash check.sh
3. Interpret the Results✅ Problem A Logic Correct: Your solution for Problem A passed the visible test cases.✅ Problem B Logic Correct: Your sorting logic is correct and output format is valid.❌ Failed: Check the error message to see what went wrong (e.g., incorrect output format, sorting error).📤 SubmissionMake sure bash check.sh passes locally.Commit and push your changes to GitHub
