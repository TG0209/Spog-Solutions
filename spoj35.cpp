#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	while(1){
		int a,b;
		cin>>a>>b;
		if(a==-1 && b==-1)
			break;
		else{
			 float r = max(a,b)/(min(a,b)+1.0);
			 int res = ceil(r);
			cout<<res<<endl;
		}
	}
}