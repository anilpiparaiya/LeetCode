
string reverseWords(string s) 
{ 
    string k=""; 
    string ans="";
    for(int i=0;i<s.length();i++)
    {   if(s[i]!='.')
        k+=s[i]; 
        else{
            for(int j=0;j<k.length()/2;j++)
            {
                char temp=k[j];
                k[j]=k[k.length()-1-j];
                k[k.length()-1-j]=temp;
            }
            ans+=k;
            ans+=".";
            k="";
        }
    }
    if(k!="")
    {
         for(int j=0;j<k.length()/2;j++)
            {
                char temp=k[j];
                k[j]=k[k.length()-1-j];
                k[k.length()-1-j]=temp;
            }
            ans+=k;
            
            k="";
    }
    for(int j=0;j<ans.length()/2;j++)
            {
                char temp=ans[j];
                ans[j]=ans[ans.length()-1-j];
                ans[ans.length()-1-j]=temp;
            }
            return ans;
}
