class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            if(!isVowel(s[left])) left++;
            if(!isVowel(s[right])) right--;

            if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left++], s[right--]);
            }
        }

        return s;        
    }

    bool isVowel(char x){
        return (x=='a' ||  x=='e' ||  x=='i' || x=='o' || x=='u' || x=='A' ||  x=='E' 
        ||  x=='I' ||  x=='O' || x=='U');
    }
};
