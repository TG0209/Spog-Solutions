#include <iostream>

using namespace std;

int main(){
	while(1){
		int x,y,z;
		cin>>x>>y>>z;
		if(x==0 && y==0 && z==0)
			break;
		else if((y-x)==(z-y)){
			cout<<"AP "<<(z+(y-x))<<endl;
		}
		else if((y/x)==(z/y)){
			cout<<"GP "<<z*(y/x)<<endl;
		}
	}
}