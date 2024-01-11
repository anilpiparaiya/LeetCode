bool mi_fi(Job a, Job b)
{
    return a.profit>b.profit;
}

pair<int,int> JobScheduling(Job arr[], int n) 
{ int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].dead>max)
        max=arr[i].dead;
    }
vector<int>vec(max);
for(int i=0;i<max;i++)
{
    vec[i]=0;
}
sort(arr,arr+n,mi_fi);

for(int i=0;i<max,i<n;i++)
{ int k=arr[i].dead-1;
    while(k>=0&&vec[k]!=0)
    {k--;
        
    }
    if(k>=0)
    vec[k]=arr[i].profit;
}
long int sum=0,count=0;
for(int i=0;i<max;i++)
{
    sum+=vec[i];
    if(vec[i]!=0)
    count++;
}
pair<int,long int>pa;
pa.first=count;
pa.second=sum;
return pa;
} 
