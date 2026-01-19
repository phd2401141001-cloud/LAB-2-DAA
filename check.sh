#!/bin/bash

echo "========================================"
echo "      AUTOGRADER: PROBLEMS A & B        "
echo "========================================"

# --- PROBLEM A ---
echo "Checking Problem A..."
g++ -o student_A main_A.cpp
if [ $? -ne 0 ]; then
    echo "❌ Compilation of main_A.cpp failed!"
else
    # Compile the grader (Now located in .github/scripts/)
    g++ -o grader_A .github/scripts/grader_A.cpp
    
    # Run the grader
    ./grader_A
    if [ $? -eq 0 ]; then
        echo "✅ Problem A Logic Correct."
    else
        echo "❌ Problem A Failed."
    fi
fi
echo "----------------------------------------"

# --- PROBLEM B ---
echo "Checking Problem B..."
g++ -o student_B main_B.cpp
if [ $? -ne 0 ]; then
    echo "❌ Compilation of main_B.cpp failed!"
else
    # Compile the grader (Now located in .github/scripts/)
    g++ -o grader_B .github/scripts/grader_B.cpp
    
    # Run the grader
    ./grader_B
    if [ $? -eq 0 ]; then
        echo "✅ Problem B Logic Correct."
    else
        echo "❌ Problem B Failed."
    fi
fi
echo "========================================"

# Cleanup
rm -f student_A student_B grader_A grader_B input_A.txt input_B.txt output_A.txt output_B.txt