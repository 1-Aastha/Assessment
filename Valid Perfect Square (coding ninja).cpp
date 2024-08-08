#include <bits/stdc++.h>//can be solved by binary search too 
bool isPerfectSquare(long long n) {//doing by math function
         long long x=sqrt(n);
		 return x*x==n;
	 
}

/*binary search logic
The basic idea of this approach is to do a binary search to find the square root of the given number if it exists.

 

The steps are as follows:

 

    Create and initialize two variables ‘low’ and ‘high’ to 1 and 10^4 respectively. ['low', ‘high’] denotes the range of possible values of the square root.
    Now, loop while ‘low’ is less than or equal to ‘high’:
        Assign ‘mid’ = ('low' + ‘high’) / 2
        Check if ‘mid’ is the perfect square. If it is, then return true.
        Otherwise, check if the square of ‘mid’ is greater than the given number ‘N’. If it is, then any number less than ‘mid’ can have the chance of being the square root. So adjust the upper limit of the search space to ‘mid' - 1 i.e. ‘high’ = ‘mid’ - 1
        Similarly, if the square of ‘mid’ is smaller than the given number ‘N’, then any number greater than the ‘mid’ can have the chance of being the square root. So adjust the lower limit of the search space to 'mid' + 1 i.e. 'low' = 'mid' + 1
    Finally, return false if ‘N’ is not a perfect square.*/
