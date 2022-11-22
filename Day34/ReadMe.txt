After rotating d positions to the left, the first d elements become the last d elements of the array
First store the elements from index d to N-1 into the temp array.
Then store the first d elements of the original array into the temp array.
Copy back the elements of the temp array into the original array

Input:
N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
D = 2
Output: 3 4 5 6 7 1 2
Explanation: 
Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
Rotate by 2: [3, 4, 5, 6, 7, 1, 2]
