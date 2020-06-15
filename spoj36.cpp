#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	string str;
	cin>>str;
	if(stoi(str)%10==0)
		cout<<"2"<<endl;
	else{
		sort(str.begin(), str.end(),greater<int>());
		cout<<"1"<<endl;
		cout<<str[0]<<endl;
	}
}