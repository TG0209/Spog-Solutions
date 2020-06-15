#include <iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;


bool check(vector<long> v,int cow,int d){
	cow--;
	int j=0;
	for(int i=1;i<v.size();i++){
		if(v[i]-v[j]>=d){
			cow--;
			j=i;
		}
		if(cow==0)
			return true;

	}
	if(cow==0)
		return true;
	else
		return false;

}

int dist(vector<long> &v,int cow){
	long s,e;
	long maxx = -1;
	s = 0;
	e = v[v.size()-1] - v[0];
	long mid;
	while(s<=e){
		mid = (s+e)/2;
		if(check(v,cow,mid)){
			if(mid>maxx)
				maxx=mid;
			s = mid+1;
		}
		else
			e = mid-1;
	}

	return maxx;
}


int main(){

	int test;
	vector<long> v;
	cin>>test;
	while(test--){
		long n,c;
		cin>>n>>c;
		while(n--){
			long x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout<<dist(v,c)<<endl;
		v.clear();
	}
}