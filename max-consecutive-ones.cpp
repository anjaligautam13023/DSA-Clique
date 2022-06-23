class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int one=0,m=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]==1)
           {
               one=one+1;
                if(one>m)
                   m=one;
           }
           else
              one=0;
    }
        
    return m;  
        
    }
};