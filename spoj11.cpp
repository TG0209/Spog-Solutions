#include <iostream>

using namespace std;

int coord(int x,int y){
	if(y==x){
		int n=1;
		while(x!=0 && x!=1){
			n++;
			x-=2;
		}
		if(x==1)
			return (4*n-3);
		else
			return (4*n-4);
	}
	else if(y==(x-2)){
		int n=1;
		while(y!=0 && y!=1){
			n++;
			y-=2;
		}
		if(y==1)
			return (4*n-1);
		else
			return (4*n-2);
	}

	return 0;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int x,y;
		cin>>x>>y;
		int res = coord(x,y);
		if(res!=0)
			cout<<res<<endl;
		else
			cout<<"No Number"<<endl;
	}
}