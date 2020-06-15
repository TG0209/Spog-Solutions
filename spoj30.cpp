#include<iostream>
#include<vector>

using namespace std;

void ap(long long int a,long long int b,long long int c){
	long long int n,f,d;
	n = (c*2)/(a+b);

	d = (b-a)/(n-5);

	f = a - 2*d;

	cout<<n<<endl;
	for(int i=1;i<=n;i++){
		long long int x;
		x = f + (i-1)*d;
		cout<<x<<' ';
	}
	cout<<endl;
}


int main(){
	int test;
	cin>>test;
	while(test--){
		long long int a,b,c;
		cin>>a>>b>>c;
		ap(a,b,c);
	}
}