class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto num:nums1)   // O(n1)
            v.push_back(num);
        
        for(auto num:nums2)  // O(n2)
            v.push_back(num);
        
        // Sort the array to find the median
        sort(v.begin(),v.end());  // O(nlogn)
        
        // the median and Return it
        int n = v.size();  // O(n)

       if(n%2 != 0){
         return v[n/2];
       }
      else{
        return (v[n/2-1]+v[n/2])/float(2);
        }
        
    }
};
