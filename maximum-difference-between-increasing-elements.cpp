//use of two pointer approach

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=0;
        int sum=-1;
        int n=nums.size();
        for(int j=1;j<n;j++)
        {
           if(nums[j]>nums[i])
               sum=max(sum,nums[j]-nums[i]);
            else
                i=j;
        }
        
        return sum;
    }
};