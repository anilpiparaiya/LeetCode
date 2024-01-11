/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string patterm(string s, string search)
{
    int d=256,l=search.length();
    long sum=0,res=0;
    int m=l-1;
    for(int j=0;j<l;j++)
        {
            sum+=(search[j]-'0')*pow(256,m);
            sum=sum%101;
            
            res+=(s[j]-'0')*pow(256,m);
          
            res=res%101;
            m--;
        }
       
    for(int i=0;i<=s.length()-l;i++)
    {
         m=l-1;
       
         if(res==sum)
         return "yes";
         else{long h=(s[i]-'0')*pow(256,m);
        
         h=h%101;
        
             res=res-(h%101);
             
             res=res*256;
             res+=(s[i+l]-'0');
             res=res%101;
                    if (res < 0)  
            res = (res+ 101); 
         }
        
    }
    return "no";
}

int main()
{string a,b;
cout<<"enter string to search from"<<endl;
cin>>a;
cout<<"enter string to search "<<endl;
cin>>b;
    cout<<patterm(a,b);

    return 0;
}
