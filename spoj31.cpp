#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

long long int triangles(long long int n){


	return ceil((n*(n+2)*(2*n+1))/2);

}

int main(){
	int test;
	cin>>test;
	while(test--){
		long long int n;
		cin>>n;
		cout<<triangles(n)<<endl;
	}
}