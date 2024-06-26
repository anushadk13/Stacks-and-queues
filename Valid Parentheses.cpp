//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<int>stack;
        
        for(char c:s)
        {
            if(c=='(')
            stack.push(')');
            else if(c=='{')
            stack.push('}');
            else if(c =='[')
            stack.push(']');
            else if (stack.empty() || stack.top()!=c)
            return false;
            else 
            stack.pop();
            
        }
        
        return stack.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
