#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<long long int> v;
long long int  sum(long long int n){
	int s=0;
	while(n>0){
		s += pow((n%10),2);
		n=n/10;
	}

	return s;
}

int func(long long int n,int count){
	long long int t = sum(n);
	cout<<t<<endl;
	v.push_back(t);
	if(v.size()>1 && v[0]==t){
		cout<<"sc";
		return -1;
	}
	else if(t ==1)
		return count;
	else
		count = 1 + func(t,count);

}


int main(){
	long long int n;
	cin>>n;
	cout<<func(n,1)<<endl;
}