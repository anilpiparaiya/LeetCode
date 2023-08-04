// Solution using binary search
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int start = 0, end = citations.size() -1, mid;

        sort(citations.begin(), citations.end());

        while(start <= end){
            mid = (start + end) / 2;

            if(citations[mid] < n - mid){
                start = mid + 1;
            }

            else{
                end = mid - 1;
            }
        }

        return n - start;
        
    }
};
