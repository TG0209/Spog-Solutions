#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void call(int sum,int i,int t){

	if(i%2==0){
		int n=1;
		int d=i;
		while(++sum!=t){
			n++;
			d--;
		}

		cout<<"TERM "<<t<<" IS "<<n<<'/'<<d<<endl;

	}
	else{
		int n=i;
		int d=1;
		while(++sum!=t){
			n--;
			d++;
		}
		cout<<"TERM "<<t<<" IS "<<n<<'/'<<d<<endl;
	}
}
void pattern(int n){
	int i=1;
	int sum=0;
	while(sum<n){
		sum+=i;
		i++;
	}
	i--;
	call(sum-i,i,n);
			
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int x;
		cin>>x;
		pattern(x);
	}
}
