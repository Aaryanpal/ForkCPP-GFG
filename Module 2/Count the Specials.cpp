#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countSpecials(int[], int, int);


 // } Driver Code Ends
//User function Template for C++

/*Function to count number of elements with occurrence
* exactly equal to floor(sizeof_array/K)
* arr : input array
* sizeof_array : number of array elements
*/
int countSpecials(int arr[], int sizeof_array, int K){
    
    int f = floor(sizeof_array/K), count = 0;
    // int ele=arr[0];
    // sort(arr,arr+sizeof_array);
    // for(int i=1;i<sizeof_array;i++){
    //     if(arr[i]==ele){
    //         count++;
    //     }else{
    //         if(count==f){
    //             return count;
    //         }
    //         count=1;
    //         ele=arr[i];
    //     }
    // }
    
    // // Your code here
    
    
    
    // return 0;
    map<int,int> mp;
    for(int i=0;i<sizeof_array;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second==f){
            count++;
        }
    }
    return count;
}

// { Driver Code Starts.

// Driver code to rest countSpecials function
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    // sizeof_array : number of array elements
	    // K : as given in statement
	    int sizeof_array, K;
	    cin >> sizeof_array >> K;
	    
	    // array of size sizeof_array
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
	    
	    // calling function and printing count the occurrence
	    cout << countSpecials(arr, sizeof_array, K) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends