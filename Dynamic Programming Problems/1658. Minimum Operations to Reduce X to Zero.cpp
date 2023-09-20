//C++ Memoization-->TLE
class Solution {
    unordered_map<string,int> mem;
    int solve(vector<int>& nums,int x,int left,int right,int count)
    {
        if(x==0)    //Sum found
            return count;
        if(x<0 or left>right)   //Out of bounds
            return 1e6;
        string key = to_string(left)+"*"+to_string(right)+"*"+to_string(x); //Form Key
        if(mem.count(key))  //Check if already calculated
            return mem[key];
        
        int l = solve(nums,x-nums[left],left+1,right,count+1);  //Include left element
        int r = solve(nums,x-nums[right],left,right-1,count+1); //Include right element
        return mem[key] = min(l,r);
    }
public:
    int minOperations(vector<int>& nums, int x) {
        int ans = solve(nums,x,0,nums.size()-1,0);
        return ans>=1e6?-1:ans;
    }
};

//MAP-->O(N)
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int,int> mymap;   //<sum,pos>
        for(int i=0;i<n;++i)
        {
            sum+=nums[i];
            mymap[sum] = i;
        }
        if(x>sum)   //Sum out of range
            return -1;
        mymap[0] = 0;
        
        int longest = 0;
        sum-=x;
        int val = 0;
        for(int i=0;i<n;++i)
        {
            val += nums[i];
            if(mymap.count(val-sum))
            {
                if(val-sum==0)
                    longest = max(longest,i-mymap[val-sum]+1);
                else
                    longest = max(longest,i-mymap[val-sum]);
            }
        }
        return longest==0?(sum==0?n:-1):n-longest;
    }
};
