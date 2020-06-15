#include<iostream>
#include<vector>

using namespace std;


void func(vector<int> v){
	int s = v.size();
	int k=0;
	vector<int> r(s);
	for(int i=0;i<s;i++)
		r[v[i]-1] = i+1;
	for(int i=0;i<s;i++){
		if(v[i]!=r[i]){
			cout<<"not ambiguous"<<endl;
			k=1;
			break;
		}
	}
	if(k==0)
		cout<<"ambiguous"<<endl;
}

int main(){
	vector<int> v;
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		else
		{
			while(n--){
				int x;
				cin>>x;
				v.push_back(x);
			}
			func(v);
			v.clear();

		}
	}
}