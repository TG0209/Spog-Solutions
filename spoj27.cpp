#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool st(string s){
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])==false)
			return false;
	}
	return true;
}
void check(string s1,string s2,string s3){
	if(st(s1)&&st(s2)){
		int res = stoi(s1) + stoi(s2);
		cout<<s1<<" + "<<s2<<" = "<<res<<endl;
	}
	else if(st(s1)&&st(s3)){
		int res = stoi(s3) - stoi(s1);
		cout<<s1<<" + "<<res<<" = "<<s3<<endl;
	}
	else if(st(s3)&&st(s2)){
		int res = stoi(s3) - stoi(s2);
		cout<<res<<" + "<<s2<<" = "<<s3<<endl;
	}
	
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s2,s3,s4,s5;

		cin>>s1>>s2>>s3>>s4>>s5;

		check(s1,s3,s5);
	}
}