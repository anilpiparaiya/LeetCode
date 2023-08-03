// solution 1
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        // sort the array
        sort(nums.begin(), nums.end());
        int lastSmaller = INT_MIN;
        int count = 0;
        int longest = 1;


        // fint longest sequence

        for(int i=0; i<n; i++){
            if(nums[i] - 1 == lastSmaller){
                count += 1;
                lastSmaller = nums[i];
            }

            else if(nums[i] != lastSmaller){
                count = 1;
                lastSmaller = nums[i];
            }

            longest = max(longest, count);
        }


        return longest;
        
    }
};


// solution 2


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
         if (n == 0) return 0;

        int longest = 1;
      unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

        // fint longest sequence

       
    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
        
    }
};


