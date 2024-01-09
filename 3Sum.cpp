// Solution 1

class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    if (nums.size() < 3)
      return {};

    vector<vector<int>> ans;

    sort(begin(nums), end(nums));

    for (int i = 0; i + 2 < nums.size(); ++i) {
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      // choose nums[i] as the first num in the triplet,
      // and search the remaining nums in [i + 1, n - 1]
      int l = i + 1;
      int r = nums.size() - 1;
      while (l < r) {
        const int sum = nums[i] + nums[l] + nums[r];
        if (sum == 0) {
          ans.push_back({nums[i], nums[l++], nums[r--]});
          while (l < r && nums[l] == nums[l - 1])
            ++l;
          while (l < r && nums[r] == nums[r + 1])
            --r;
        } else if (sum < 0) {
          ++l;
        } else {
          --r;
        }
      }
    }

    return ans;
  }
};


// Solution 2

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1,h=nums.size()-1;
            int t=-nums[i];
            while(l<h)
            {
                int sum=nums[l]+nums[h];
                if(sum<t)
                    l++;
                else if(sum>t)
                    h--;
                else
                {
                    vector<int>temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[l];
                    temp[2]=nums[h];
                    ans.push_back(temp);
                    while(l<h&&nums[l]==temp[1])
                        l++;
                    while(l<h&&nums[h]==temp[2])
                        h--;
                    while(i<nums.size()-1&&nums[i]==nums[i+1])
                        i++;
                }
            }
        }
        return ans;
    }
};
