We basically ignore half of the elements just after one comparison.

Compare x with the middle element.
If x matches with the middle element, we return the mid index.
Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
Else (x is smaller) recur for the left half

Problem: Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array.

                 Consider array is 0 base index.

Example: 

Input: arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170}, x = 110
Output: 6
Explanation: Element x is present at index 6. 