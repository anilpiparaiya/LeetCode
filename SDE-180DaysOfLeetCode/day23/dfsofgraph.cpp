 void dfs(vector<int>&res, vector<int>adj[], int &v)
    {   
  for (auto it = adj[v].begin(); 
             it !=adj[v].end(); it++) 
      {  while(it!=adj[v].end()&&find(res.begin(),res.end(),*it)!=res.end())
        {
           it++;
        }
        if(it==adj[v].end())
        return;
             res.push_back(*it);
            
            dfs(res,adj,*it);
           
    }
    return;
    }
    
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    
	    vector<int>res;
	    
	   res.push_back(0);
	  
	   int v=0;
	    dfs(res,adj,v);
	    return res;
	}
