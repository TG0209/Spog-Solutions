#include <iostream>
#include<vector>

using namespace std;

int candy(vector<int> &v,int sum){
	int n = v.size();
	if(sum%n==0){
		int c = (sum)/n;
		int diff=0;
		for(int i=0;i<n;i++){
			if(v[i]>c)
				diff += (v[i]-c); 
		}
		return diff;
	}

	return -1;
}

int main(){
	vector<int> v;
	while(1){
		int n;
		cin>>n;
		if(n==-1)
			break;
		int sum=0;
		while(n--){

			int x;
			cin>>x;
			sum = sum + x;
			v.push_back(x);
		}
		cout<<candy(v,sum)<<endl;
		v.clear();
	}
}