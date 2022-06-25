class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int x=nums.size()/2;
       sort(nums.begin(),nums.end());
        if(x==1)
            return nums[1];
       if(x%2==0)
           return nums[x];
        else
            return nums[x+1];
        
         
        
        
    }
};