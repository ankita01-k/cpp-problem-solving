# Linear Search vs Binary Search

## Goal
Compare the number of element comparisons used by linear search and binary search on the same sorted input.

## How it works
- Linear search checks elements one by one.
- Binary search checks the middle element and discards half of the remaining search range.
- Both methods report the index of the target, or `-1` if it is absent.

## Run
Compile with a C++ compiler, for example:

```bash
g++ -std=c++17 search_comparison.cpp -o search_comparison
./search_comparison
```

## Important limitation
The input must be sorted in ascending order for binary search to work correctly. The program counts comparisons; it does not claim benchmark timing results.

## Complexity
- Linear search: O(n) time, O(1) extra space.
- Binary search: O(log n) time, O(1) extra space.
