# Unexpected Behavior with std::vector<bool> in C++
This repository demonstrates a common, yet subtle, bug related to the specialization of `std::vector<bool>` in C++.  The standard library's optimization for `std::vector<bool>` often leads to unexpected results when performing bitwise operations or using iterators.

## The Problem
The `std::vector<bool>` specialization deviates from the standard vector implementation. Instead of storing each `bool` as a full byte, it attempts to pack them more tightly to save memory. This can lead to unexpected results when you expect the standard behavior of a vector.

## How to Reproduce
Compile and run `bug.cpp`. Observe the unexpected output and compare it to the corrected version in `bugSolution.cpp`

## Solution
Avoid using `std::vector<bool>` when bitwise operations or straightforward iterators are needed. Use `std::vector<char>` (or `std::vector<uint8_t>`) instead and keep track of booleans within the `char` values.  For improved efficiency, consider using bitsets if memory optimization is paramount and bit-level manipulation is necessary.