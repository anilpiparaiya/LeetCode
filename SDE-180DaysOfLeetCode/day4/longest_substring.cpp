class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l=s.length(),max=0,count=0;
        int last=-1;
        for(int i=0;i<l;i++)
        {
            if(mp.find(s[i])!=mp.end())
               {
             if(mp[s[i]]>last)
               {
                   last=mp[s[i]];
                   mp[s[i]]=i;
                   if(count>max)
                       max=count;
                   count=i-last;
               }
                else
                {
                    mp[s[i]]=i;
                    count++;
                }
               }else{
                    mp.insert({s[i],i});
                    count++;
                if(count>max)
                    max=count;
            }
        }
        
        if(count>max)
            max=count;
        
        return max;
        
        
        
    }
};
