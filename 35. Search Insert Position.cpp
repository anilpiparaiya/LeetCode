// Using Lowerbound concept

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = nums.size();

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }

            else{
                low = mid + 1;
            }
        }

        return ans;


        
    }
};


// Solution 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int low = 0;
        int high = nums.size()-1;

        int mid;

        while(low <= high){
            mid = low + (high - low)/2;

            if(nums[mid] == target){
                return mid;
            }

            else if(nums[mid] < target){
                low = mid + 1;
            }

            else high = mid - 1;
        }

        return low;



        
    }
};


// Solution 3 Easy Soution

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while (low <= high) {
            int mid = low + (high-low)/2;

            if (nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }


        return low;
    }
};

// Solution 4

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();

    while (l < r) {
      const int m = l + (r - l) / 2;
      if (nums[m] == target)
        return m;
      if (nums[m] < target)
        l = m + 1;
      else
        r = m;
    }

    return l;
  }
};


// Solution 5

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();

    while (l < r) {
      const int m = l + (r - l) / 2;
      if (nums[m] == target)
        return m;
      if (nums[m] < target)
        l = m + 1;
      else
        r = m;
    }

    return l;
  }
};

// Solution 6

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] < target) l = mid+1;
            else if(nums[mid] > target) r = mid - 1;
            else return mid;
            
        }
        
        return l;
        
    }
};
