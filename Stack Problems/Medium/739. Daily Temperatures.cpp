class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>result(n);
        stack<int>st;

        for(int i=0; i<n; ++i){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                const int index = st.top();
                st.pop();
                result[index] = i - index;
            }

            st.push(i);
        }
        return result;
    }
};
