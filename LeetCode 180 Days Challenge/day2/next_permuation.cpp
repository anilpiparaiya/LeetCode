class Solution {
public:
    void nextPermutation(vector<int>& num) {
        int n=num.size(), min=n-1;
        for(int i=n-1;i>0;i--)
        {
            if(num[i]>num[i-1])
            {
                if(num[i-1]<num[min])
                {
                    int temp=num[min];
                    num[min]=num[i-1];
                    num[i-1]=temp;
                    sort(num.begin()+i,num.end());
                    goto p;
                }else{
                    while(min>=i)
                    {min--;
                     if(num[i-1]<num[min])
                {
                    int temp=num[min];
                    num[min]=num[i-1];
                    num[i-1]=temp;
                    sort(num.begin()+i,num.end());
                    goto p;
                }
                        
                    }
                }
            }
        }
        sort(num.begin(),num.end());
        p:
        n=0;
    }
};
