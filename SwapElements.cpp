Problem Statement:
Let two arrays A and B of integers are given, determine a pair of values such that one value is taken from each array which can be swapped to give the same sum of arrays.
Input Format:
1. The first line contains space-separated integers representing the elements of the first array.
2. The second line contains space-separated integers representing the elements of the second array.
Output Format:
1. If a pair of values that can be swapped to give the same sum of arrays is found, the program outputs two integers separated by a space, representing the pair of values (one from each array). If no such pair is found, the program outputs "Not found."
Constraints:
1. The length of both arrays will be between 1 and 105
2. Each element in the arrays will be an integer between -10° and 10°
Hint: If you swap two values, a and b, then the sum of array A become sumA - a + b and the sum of array B becomes sumB - b + a. These sums need to be equal.
Sample Input1:
412112
36 3 3
Sample Output:
13
Explanation: If we swap the pair of integers 1 3 between the arrays, the sum of both the arrays become equal, i.e., 13.
Sample Input2:
57 4 6
1 2 3 8
Sample Output2:
6 2
Explanation: If we swap the pair of integers 6 2 between the arrays, the sum of both the arrays becomes equal, i.e., 18.
