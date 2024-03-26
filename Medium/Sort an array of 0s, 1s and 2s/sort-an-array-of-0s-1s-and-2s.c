//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C

void sort012(int nums[], int n)
{
    int z=0,o=0,t=0;


    for(int i=0;i<n ;i++){
       if(nums[i]==0)
       z++;

       else if(nums[i]==1)
       o++;

     else if(nums[i]==2)
       t++;
    }
        int i=0;
        while(z){
            nums[i++] = 0;
            z--;
        }
        while(o){
            nums[i++] = 1;
            o--;
        }
        while(t){
            t--;
            nums[i++] = 2;
        }   
}

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends