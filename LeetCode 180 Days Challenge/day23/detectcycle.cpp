bool isCyclicUtil(int v, bool visited[], int parent,vector<int> adj[]) 
{ 
      
    // Mark the current node as visited 
    visited[v] = true; 
  
    // Recur for all the vertices  
    // adjacent to this vertex 
 
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i) 
    { 
          
        // If an adjacent is not visited,  
        //then recur for that adjacent 
        if (!visited[*i]) 
        { 
           if (isCyclicUtil(*i, visited, v,adj)) 
              return true; 
        } 
  
        // If an adjacent is visited and  
        // not parent of current vertex, 
        // then there is a cycle. 
        else if (*i != parent) 
           return true; 
    } 
    return false; 
} 
  
	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Call the recursive helper  
    // function to detect cycle in different 
    // DFS trees 
    for (int u = 0; u < V; u++) 
    { 
        
        // Don't recur for u if  
        // it is already visited 
        if (!visited[u])  
          if (isCyclicUtil(u, visited, -1,adj)) 
             return true; 
    } 
    return false;
	}
};
