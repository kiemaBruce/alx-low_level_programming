### 0-linear.c
- Searches for an integer in an unsorted array using linear search algorithm.
- Prototype : int linear_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
  size is the number of elements in array
- And value is the value to search for
- The function returns the first index where value is located
- If value is not present in array or if array is NULL, the function
  returns -1
### 1-binary.c
- Searches for a value in a sorted array of integers using binary search
  algorithm.
- Prototype : int binary_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- The function returns the index where value is located.
- The function assumes that array is sorted in ascending order.
- It also assumes that value won’t appear more than once in array.
- If value is not present in array or if array is NULL, the function returns -1.
### 2-O
- Contains the time complexity (worst case) of a linear search in an array of
  size n.
### 3-O
- Contains the space complexity (worst case) of an iterative linear search
  algorithm in an array of size n.
### 4-O
- Contains the time complexity (worst case) of a binary search in an array of
  size n.
### 5-O
- Contains the space complexity (worst case) of a binary search in an array of
  size n.
### 6-O
- Contains the space complexity of a custom algorithm.
