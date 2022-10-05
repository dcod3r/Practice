
/*Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
In case of multiple subarrays, return the subarray which comes first on moving from left to right.

Example 1:
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.*/
#include<iostream>
using namespace std;
void subarraySum(int arr[], int n, int sum)
{
            // Your code here
    int start=0,end=1, cs=arr[0];
    while(end<=n)
    {
        if(cs == sum)
        {
            cout<<start<<" "<<end; 
            return;
        }
        else if(cs > sum && start < end)
            cs = cs - arr[start++];
        else if(cs < sum && end <n)
            cs = cs + arr[end++];
    }
}

int main()
{
    int A[] = {10,3,5,8,6,12,20,15,31};
    subarraySum(A,sizeof(A)/sizeof(int),31);
    return 0;
}
