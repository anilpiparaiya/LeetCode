class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> vec(n);
        if(n==0)
            return vec;
        
        vec[0].push_back(1);
        if(n==1)
            return vec;
        vec[1].push_back(1);
        vec[1].push_back(1);
        for(int i=2;i<n;i++)
        {   vec[i].push_back(1);
            for(int j=0;j<vec[i-1].size()-1;j++)
            {
                vec[i].push_back(vec[i-1][j]+vec[i-1][j+1]);
            }
         vec[i].push_back(1);
        }
        return vec;
    }
};
