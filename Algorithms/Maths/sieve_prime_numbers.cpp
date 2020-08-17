/**
 * 
 * 
 Given a number N, calculate the prime numbers upto N using Sieve of Eratosthenes.  

Input: 
The first line of the input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing N.

Output: 
For all testcases, in a new line, print all the prime numbers upto or equal to N.

Constraints:
1 <= T<= 100
1 <= N <= 104

Example:
Input:
2
10
35
Output:
2 3 5 7
2 3 5 7 11 13 17 19 23 29 31 
 * */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 10005

void calculateSieve(vector<int> &vector){
    for(int i=2;i*i<vector.size();i++){
        if(vector[i] == 1){
            for(int j=i*i;j<vector.size(); j +=i){
                vector[j] = 0;
            }
        }
    }
}

int main() {
	// your code goes here
	int t; 
	cin>>t;
	 vector<int> vector(MAX, 1); 
	 calculateSieve(vector);
	while(t--){
	    int n;
	    cin>>n;
	   for(int i=2;i<n;i++){
	       if(vector[i] ==1){
	           cout<<i<<" ";
	       }
	   }
	   cout<<"\n";
	    
	}
	
	return 0;
}
