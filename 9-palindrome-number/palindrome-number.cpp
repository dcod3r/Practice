class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        if(x == 0)
            return true;
        int temp = x, n=0;
        while(temp){
            temp = temp / 10;
            n++;
        }
        int a[n];
        int i=0;
        temp = x;
        while(temp){
            a[i++] = temp % 10;
            temp = temp / 10;
        }
        i--;
        int j = 0;
        while(j<=i)
        {
            if(a[j++] != a[i--])
                return false;
        }

        return true;
    }
};