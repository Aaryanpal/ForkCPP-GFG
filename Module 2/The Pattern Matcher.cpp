#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       int x_count=0;
        
        //to store count of y
        int y_count=0;
        bool flag=false;
        for(int i=0; i<s.length(); i++)
        {
           
            if(s[i]=='x')
            {
                x_count++;
            }
            else
            {
                while(i<s.length() && s[i]=='y')
                {
                    y_count++;
                    i++;
                }
                i--;
               
                if(x_count==y_count)
                {
                    x_count=y_count=0;
                }
                else
                {
                    flag=true;
                    break;
                }
            }
         
        }
       
        if(flag==false && x_count==y_count)
            cout<<1;
        else
            cout<<0;
       
        
       cout<<endl;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}