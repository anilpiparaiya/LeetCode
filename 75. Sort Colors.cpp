// Brute force 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int count0 = 0, count1 = 0, count2 = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                count0 += 1;
            }

            else if(nums[i] == 1){
                count1 += 1;
            }

            else if(nums[i] == 2){
                count2 += 1;
            }

            else{
                return;
            }

            
        }

        for(int i=0; i<count0; i++){
            nums[i] = 0;
        }

        for(int i=count0; i<count0 + count1; i++){
            nums[i] = 1;
        }

        for(int i=count0 + count1; i<n; i++){
            nums[i] = 2;
        }
        
    }
};


// Dutch National Flag Algorithm


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0, mid = 0, high = n-1;


        for(int i = 0; i<n; i++){

            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;

            }

            else if(nums[mid] == 1){
                mid++;
            }

            else{
                swap(nums[mid], nums[high]);
                high--;
            }

        }
        
    }
};
