long long int merge(long long arr[],long long temp[],long long int left,long long int mid,long long int right ){
    long long int i=left,j=mid,k=left,inv=0;
    while((i<mid)&&(j<=right))
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            inv+=mid-i;
        }
    }
    while(i<mid)
        temp[k++]=arr[i++];
        
        while(j<=right)
        temp[k++]=arr[j++];
        
        for(i=left;i<=right;i++)
        arr[i]=temp[i];
    return inv;
}

long long int mergesort(long long arr[],long long temp[],long long int left,long long int right )
{ long long int inv=0;

    if(right>left)
    {
        long long int mid=0;
        mid=(left+right)/2;
        inv+=mergesort(arr,temp,left, mid);
        inv+=mergesort(arr,temp,mid+1,right);
        inv+=merge(arr,temp,left,mid+1,right);
    }
    return inv;
    
}
long long int inversionCount(long long arr[], long long n)
{long long temp[n];
    long long int left=0,right=n-1,inv_count=0;
    inv_count=mergesort(arr,temp,left,right);
    return inv_count;
}
