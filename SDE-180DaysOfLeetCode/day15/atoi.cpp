
/*You are required to complete this method */
int atoi(string str)
{
    int l=str.length();
    long num=0;
    int p=0;
    for(int i=l-1;i>=0;i--)
    {
        char ch=str[i];
        if(ch>='0'&&ch<='9')
        {int x=ch-'0';
        num+=x*pow(10,p++);
        }else{
            if(ch=='-')
            return 0-num;
            return -1;
        }
        
    }
    return num;
}
