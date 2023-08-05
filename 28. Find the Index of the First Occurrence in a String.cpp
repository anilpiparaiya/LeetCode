// Brute force approach 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        if(n2>n1){
            return -1;
        }

        for(int i=0; i<n1-n2+1; i++){
            if(haystack.substr(i, n2) == needle){
                return i;
            }

        }

        return -1;
        
    }
};


// Optimal solution using 2 pointer approach
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        if(n2>n1){
            return -1;
        }
        
        int i = 0;
        int j = 0; 
        int start = 0;


        while(i<n1 && j<n2){
            if(haystack[i] == needle[j]){
                if(i-start+1 == n2){
                    return start;
                }
                i++;
                j++;
            }

            else{
                j=0;
                start++;
                i=start;
            }
        }

        return -1;
    }


};
