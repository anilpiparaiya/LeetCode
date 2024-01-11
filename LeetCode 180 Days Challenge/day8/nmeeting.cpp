 
struct ele{
    long int start;
    long int end;
    long int pos;
};

 bool my_fn(ele a, ele b){
    if(a.end == b.end) return a.start<b.start;
    return a.end < b.end;
}

int maxMeetings(int start[], int end[], int n) {
    
   vector<ele> v(n);
   for(int i=0;i<n;i++){
	        
	        v[i].start = start[i];
	        v[i].pos = i;
	    }
	    for(int i=0;i<n;i++){
	       
	        v[i].end = end[i];
	    }
	    sort(v.begin(),v.end(),my_fn);
	    
	    long int st = -1;
	    int cnt = 0;
	    
	    for(int i=0;i<n;i++){
	        if(v[i].start > st){
	            st = v[i].end;
	            
	            cnt++;
	        }
	    }
 return cnt;

}
