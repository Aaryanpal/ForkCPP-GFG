#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
        
       int hash[26] = {0};
        
        //counting frequency w.r.t to other string
        for(int i = 0;i<s1.length();i++){
            hash[s1[i]-'a']++;
        }
        for(int i = 0;i<s2.length();i++){
            hash[s2[i]-'a']--;
        }
        
        int count = 0;
        
        //counting characters need to be edited/deleted
        for(int i = 0;i<26;i++){
            if(hash[i] != 0){
                count+=abs(hash[i]);
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}