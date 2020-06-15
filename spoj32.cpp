#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 

int replace(string A, string B){
	int n = A.length();
	int m = B.length();
	if(n==0 && m==0)
		return 0;
	else if(A.empty())
		return m;
	else if(B.empty())
		return n;
	int dp[n+1][m+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0)
				dp[i][j] = j;
			else if(j==0)
				dp[i][j] = i;
			
			else if(A[i-1]==B[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);


		}
	}

	return dp[n][m];

}

int main(){
	int test;
	cin>>test;
	while(test--){
		string a,b;
		cin>>a>>b;
		cout<<a<<b<<endl;
		cout<<replace(a,b)<<endl;
	}

}