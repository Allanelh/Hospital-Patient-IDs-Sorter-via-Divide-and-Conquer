# Hospital Patient Record Organizer

This project is a **C++ implementation of Merge Sort** for managing hospital patient records.  
Instead of using a fixed array, the program now allows the **user to enter any number of patient IDs** and sorts them efficiently.

## Problem Statement

A hospital needs to organize patient records quickly for quality healthcare delivery.  
Each patient is assigned a unique **patient ID**, and these IDs must be sorted for easy access.

This program applies the **Merge Sort algorithm** (Divide and Conquer strategy) to sort the IDs.

## Features
- User can specify how many patients they want to enter.
- Works with any number of patient IDs.
- Uses **Merge Sort** with `O(n log n)` complexity.
- Well-documented and beginner-friendly code with comments.

## How It Works

### Merge Sort Process
1. **Divide** → Split the array into halves recursively until each subarray has 1 element.  
2. **Conquer** → Sort the subarrays recursively.  
3. **Combine** → Merge the sorted subarrays into a single sorted list.  

## Running the Program
1. Compile the program:
   ```C
   cd hospital_sort
   g++ main.cpp -o hospital_sort
   ```

2. Run the program:
   ```C
   ./hospital_sort //for Linux / macOS
    hospital_sort.exe //for Windows
   ```
