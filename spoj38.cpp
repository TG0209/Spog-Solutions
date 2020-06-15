#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int beehive(int n){
	int sum=1;
	for(int i=0;i<n;i++){
		sum = 6*i + sum;
		if(sum==n)
			return 1;
		else if (sum>n)
			return 0;
	}

	return 0;
}

int main(){
	while(1){
		int x;
		cin>>x;
		if(x==-1)
			break;
		else{
			if(beehive(x)==1)
				cout<<"Y"<<endl;
			else
				cout<<"N"<<endl;
		}
	}
}