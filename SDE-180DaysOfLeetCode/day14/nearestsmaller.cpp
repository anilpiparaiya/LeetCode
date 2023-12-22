vector<int> Solution::prevSmaller(vector<int> &a) {
    stack<int>st;
    vector<int>vec(a.size());
    int j=0;
    for(int i=0;i<a.size();i++)
    {
        if(st.empty())
        {
            vec[j++]=-1;
            st.push(a[i]);
        }else if(st.top()<a[i])
        {
            vec[j++]=st.top();
            st.push(a[i]);
        }else if(st.top()>=a[i])
        {
            while(!st.empty()&&st.top()>=a[i])
            {
                st.pop();
            }
            if(st.empty())
            vec[j++]=-1;
            else
            vec[j++]=st.top();
            st.push(a[i]);
        }
    }
    return vec;
}
