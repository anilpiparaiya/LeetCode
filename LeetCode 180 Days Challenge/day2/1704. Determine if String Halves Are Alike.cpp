class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int vowelsCount = 0;
        int mid = s.size() / 2;

        for(int i=0; i<mid; i++){
            char charA = s[i];
            char charB = s[mid + i];
            if(vowels.count(charA)) vowelsCount++;
            if(vowels.count(charB)) vowelsCount--;
        }

        return vowelsCount == 0;
        
    }
};
