#include<iostream>
#include<vector>

using namespace std;

int unique(vector<long long int> v){
	int res=0;
	for(int i=0;i<v.size();i++){
		res ^= v[i];
	}

	return res;
}

int main(){
	long long int test;
	vector<long long int> v;
	cin>>test;
	while(test--){
		long long int x;
		scanf("%lld",&x);
		v.push_back(x);
		}
		cout<<unique(v)<<endl;
		v.clear();

}