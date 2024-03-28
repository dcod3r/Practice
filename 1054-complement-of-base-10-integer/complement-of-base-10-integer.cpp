class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n == 0)
            return 1;   //complement of 0 is 1
        int m = n; //value intact
        int mask=0; //mask varibale for operation with ~a & mask = ans;

        while(m)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        return (~n) & mask;
        
    }
};