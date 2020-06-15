#include <iostream>

using namespace std;

int puzzle(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		ans = ans + i*i;
	}
	return ans;
}

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		else
			cout<<puzzle(n)<<endl;
		
	}
}