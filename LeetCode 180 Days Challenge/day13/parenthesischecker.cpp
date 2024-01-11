// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
   stack<char>st;
   for(int i=0;i<x.length();i++)
   {
       if(x[i]=='['||x[i]=='{'||x[i]=='(')
       st.push(x[i]);
       else{
           if(st.empty())
           return false;
          if(x[i]==']')
          {
              if(st.top()=='[')
              st.pop();
              else
              return false;
          }else if(x[i]==')')
          {
              if(st.top()=='(')
              st.pop();
              else
              return false;
          }else if(x[i]=='}')
          {
              if(st.top()=='{')
              st.pop();
              else
              return false;
          }
       }
   }
   if(st.empty())
   return true;
   else
   return false;
}
