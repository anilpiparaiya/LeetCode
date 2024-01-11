class Solution{
public:
  bool fun(vector<vector<bool>> & vec,int col, vector<bool> &r, vector<bool>&nd, vector<bool>&dd)
    {
        if(col>=vec.size())
        return true;
        
        for(int i=0;i<vec.size();i++)
        {
            if(nd[i-col+vec.size()-1]==false && dd[i+col]==false && r[i]==false)
            {
                vec[i][col]=true;
                nd[i-col+vec.size()-1]=true;
                dd[i+col]=true;
                r[i]=true;
                
                if(fun(vec,col+1,r,nd,dd))
                {
                    return true;
                }
                  vec[i][col]=false;
                nd[i-col+vec.size()-1]=false;
                dd[i+col]=false;
                r[i]=false;
                
                
            }
            
        }
    }
    
  
    void nQueen(int n) {
    vector<vector<bool>>vec(n);
    vector<bool>nd;
    vector<bool>dd;
    vector<bool>r;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vec[i].push_back(false);
        }
    }
    
    for(int i=0;i<2*n-1;i++)
    {
        nd.push_back(false);
        dd.push_back(false);
    }
    
    for(int i=0;i<n;i++)
    r.push_back(false);
    
   bool ans=fun(vec,0,r,nd,dd);
   if(ans)
   {
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<vec[i][j]<<" ";
        }
        cout<<""<<endl;
    }
   }
  return;
    }
};
