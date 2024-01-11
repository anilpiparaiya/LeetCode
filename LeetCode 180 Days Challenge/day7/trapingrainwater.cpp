class Solution {
public:
    int trap(vector<int>& height) {
      int left=0,right=height.size()-1,sum=0,leftmax=0,rightmax=0;
        
       while(left<=right)
       {
           if(height[left]<=height[right])
           {    
               if(height[left]>=leftmax)
                   leftmax=height[left];
               else
                   sum+=leftmax-height[left];
               left++;
           }else{
               if(height[right]>=rightmax)
                   rightmax=height[right];
               else
                   sum+=rightmax-height[right];
               right--;
           }
           
       }
    
        return sum;
    }
};
