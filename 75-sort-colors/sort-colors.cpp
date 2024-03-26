class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;


    for(int i=0;i<nums.size();i++){
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
};