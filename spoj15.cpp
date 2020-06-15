#include <iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>

using namespace std;

long long int hot(vector<int> men,vector<int> wmen){
	sort(men.begin(),men.end());
	sort(wmen.begin(),wmen.end());
	long long int hotness = 0;
	for(int i=0;i<men.size();i++){
		hotness += men[i]*wmen[i];
	}

	return hotness;
}
int main(){
	int test;
	cin>>test;
	vector<int> men;
	vector<int> wmen;
	while(test--){
		int n;
		cin>>n;
		int z=n;
		while(n--){
			int x;
			cin>>x;
			men.push_back(x);
		}
		while(z--){
			int x;
			cin>>x;
			wmen.push_back(x);
		}
		cout<<hot(men,wmen)<<endl;
		men.clear();
		wmen.clear();
	}
}