class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>map1;
        if(s.length()!=t.length())
            return false;
        else{
            for(int i=0;i<s.length();i++)
            {
                if(map1.find(s[i])==map1.end())
                    map1.insert({s[i],1});
                else
                    map1[s[i]]=map1[s[i]]+1;
            }
            
             for(int i=0;i<t.length();i++)
            {
                if(map1.find(t[i])==map1.end())
                   return false; 
                else
                {  map1[t[i]]=map1[t[i]]-1;
                
                }
                 
            }
            map<char, int >::iterator itr;
             for(itr=map1.begin();itr!=map1.end();itr++)
            {
               if(itr->second!=0)
                   return false;
               //  cout<<itr->first<<" "<<itr->second<<endl;
            }
            return true;
        }
    }
};
