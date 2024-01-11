class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count=0,max=0,i=0;
        for(i=0;i<nums.size();i++)
        {
            while(i<nums.size()&&nums[i]==1){
                count++;
                i++;
            }
            if(count>max)
            {max=count;
           
            }
             count=0;
                
        }
        if(count>max)
                max=count;
        return max;
        
    }
};
