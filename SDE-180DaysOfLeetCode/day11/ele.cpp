
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int left=0,right=n-1,mid=0;
        while(left<=right)
        {
            mid=(left+right)/2;
            
            if(mid==0)
            {
                if(arr[mid]!=arr[mid+1])
                return arr[mid];
                
            }else if(mid==n-1)
            {
                if(arr[mid]!=arr[mid-1])
                return arr[mid];
            }else{
                if(mid&1)
                {
                    if(arr[mid]!=arr[mid-1])
                   right=mid-1;
                   else
                   left=mid+1;
                }else{
                    if(arr[mid]!=arr[mid+1])
                    right=mid-1;
                    else
                    left=mid+1;
                }
            }
        }
        return arr[left];
    }
};
