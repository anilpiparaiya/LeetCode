struct ele{
    int start;
    int end;
};

bool mysort(ele a, ele b)
{
    if(a.end==b.end)
    return a.start<b.start;
    return a.end<b.end;
}

int activitySelection(int start[], int end[], int n){
vector<ele>vec(n);
for(int i=0;i<n;i++)
{
    vec[i].start=start[i];
    vec[i].end=end[i];
    
}
sort(vec.begin(),vec.end(),mysort);
int count=0,last=0;
for(int i=0;i<n;i++)
{
    if(vec[i].start>=last)
    {
        count++;
        last=vec[i].end;
    }
}
return count;
}
