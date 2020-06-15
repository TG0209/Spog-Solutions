#include <iostream>
using namespace std;

bool isprime(int n){
	if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int main() {
	
	int test;
	cin>>test;
	while(test--){
		int n,m;
		cin>>n;
		cin>>m;
		for(int i=n;i<=m;i++){
			if(isprime(i))
				cout<<i<<endl;
		}
		cout<<endl;
		
	}
	return 0;
}