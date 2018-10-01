# Lab03
Ian Kelly

1: i: 256, n: 256, sum: -32639

2. Detect an overflow by checking when the sum becomes negative, or less than the previous n term's sum.

3. i: 65536, n: 65536, sum: -2147450879

4. Detect an overflow by checking if the value becomes inf
i: 34, n: 34, product: inf

5. i: 170, n: 170, product: inf

6. Float works more precisely for higher values of n, because it uses less accurate values for fractions, which add together to equal zero more often. Double uses higher presicion decimals, which do not add together to exactly zero for larger values of n.
Float, n:9
Double, n:8

7. The numeric error occurs when using float because the function finds 4.4 to be less than 4.4. The numeric error occurs because the float value for 4.4 is actually lower than 4.4 by numerous decimal places. 

8. Using double, 4.4 is not less than 4.4, giving one less iteration of i. The value comparison for float and doubles is fuzzy for whole numbers, some "whole numbers"being less or greater than their actual values. i.e.: double 4.4 = 4.40000000000000355 and double 3.4 = 3.39999999999999911
