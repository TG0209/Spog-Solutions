#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int stamps(vector<int> v,int need){
	int s = v.size();
	sort(v.begin(),v.end(),greater<int>());
	int cost=0;
	for(int i=0;i<s;i++){
		cost += v[i];
		if(cost>=need)
			return (i+1);
	}

	return -1;
}


int main(){
	int test;
	cin>>test;
	vector<int> sp;
	int j=1;
	while(test--){
		int a,b;
		cin>>a>>b;
		while(b--){
			int x;
			cin>>x;
			sp.push_back(x);
		}
		if(stamps(sp,a)!=-1){
			cout<<"Scenario #"<<j<<':'<<endl;
			cout<<stamps(sp,a)<<endl;
			cout<<endl;
		}
		else{
			cout<<"Scenario #"<<j<<':'<<endl;
			cout<<"impossible"<<endl;
			cout<<endl;
		}
		j++;
		sp.clear();
	}
}