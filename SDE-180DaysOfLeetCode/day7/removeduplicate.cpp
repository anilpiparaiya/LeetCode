class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(i<n-1&&nums[i]==nums[i+1])
            {
               
                i++;
            }
            
            nums[first++]=nums[i];
            
        }
    return first;
    }
};
