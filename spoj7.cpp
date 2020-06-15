#include <iostream>
#include<vector>
#include<stdlib.h>
#include <string>
#include<algorithm>

using namespace std;

void add(int x,int y){
	int r = x+y;
	int l1,l2,l3;
	l1 = to_string(x).length();
	l2 = to_string(y).length()+1;
	l3 = to_string(r).length();
	int z = max({l1,l2,l3});
	vector<vector<char>> v(z);
	



}


int main(){
	int test;
	cin>>test;
	while(test--){
		int x,y;
		char c;
		cin>>x>>c>>y;
		cout<<x<<' '<<c<<' '<<y<<endl;
		
	}
}