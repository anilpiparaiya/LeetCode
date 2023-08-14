// Solution 1 Using Sorting

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
        
    }
};



// Solution 2 Using Min-Heap
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>min_heap(nums.begin(), nums.begin() + k);


        for(int i = k; i<nums.size(); i++){
            if(nums[i] > min_heap.top()){
                min_heap.pop();
                min_heap.push(nums[i]);
            }
        }

        return min_heap.top();
        
    }
};

// Solution 3 QuickSelect Algorithm

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1;
        while (true) {
            int pivot_index = rand() % (right - left + 1) + left;
            int new_pivot_index = partition(nums, left, right, pivot_index);
            if (new_pivot_index == nums.size() - k) {
                return nums[new_pivot_index];
            } else if (new_pivot_index > nums.size() - k) {
                right = new_pivot_index - 1;
            } else {
                left = new_pivot_index + 1;
            }
        }
    }

private:
    int partition(vector<int>& nums, int left, int right, int pivot_index) {
        int pivot = nums[pivot_index];
        swap(nums[pivot_index], nums[right]);
        int stored_index = left;
        for (int i = left; i < right; i++) {
            if (nums[i] < pivot) {
                swap(nums[i], nums[stored_index]);
                stored_index++;
            }
        }
        swap(nums[right], nums[stored_index]);
        return stored_index;
    }
};

