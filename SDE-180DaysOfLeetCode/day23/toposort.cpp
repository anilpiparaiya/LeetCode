class Solution{	
public:
	void dfs(vector<int>& res,vector<int> adj[], int &i, bool visited[])
	{ visited[i]=true;
	    for(auto it=adj[i].begin();it!=adj[i].end();it++)
	    {
	        if(!visited[*it])
	        dfs(res,adj,*it,visited);
	        
	    }
	    res.push_back(i);
	    return;
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    vector<int>res;
	    bool visited[V];
	    for(int j=0;j<V;j++)
	    visited[j]=false;
	    vector<int>s;
	    int i=0;
	    for(i=0;i<V;i++)
	    {   if(!visited[i])
	     dfs(res,adj,i, visited);   
	    }
	    for(int j=0;j<V;j++)
	   {
	       s.push_back(res[V-1-j]);
	      
	   }
	    return s;
	}
};
