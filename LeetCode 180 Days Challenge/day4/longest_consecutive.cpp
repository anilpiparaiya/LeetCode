class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i=0,n=nums.size();
        int max=0,count=0;
      for(i=0;i<n;i++){
          int num=nums[i];
          if(find(nums.begin(),nums.end(),num-1)==nums.end())
          {count=0;
               while(find(nums.begin(),nums.end(),num++)!=nums.end())
                   count++;
            if(count>max)
                max=count;
          }
      }
        return max;
    }
};
