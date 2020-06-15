#include<iostream>

using namespace std;

bool ispower(long long int n){
	return n && (!(n&(n-1)));
}
int main(){
	long long int n;
	cin>>n;
	if(ispower(n))
		cout<<"TAK"<<endl;
	else
		cout<<"NIE"<<endl;
}