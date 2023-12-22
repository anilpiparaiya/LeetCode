string Solution::countAndSay(int a) {
    string s;
    s="1";
    a--;
    string k="";
    while(a--)
    {  int i=0;
       while(s[i]!='\0')
        {   int j=i+1;
            int count=1;
            while(s[j]!='\0'&&s[i]==s[j])
            {
                count++;
                i++;
                j++;
            }
            
            k+=to_string(count);
            k+=s[i];
            i++;
        }
        s=k;
        k="";
    }return s;
}
