#include <iostream>
#include<vector>

using namespace std;

int mini(vector<vector<int>> r,int k,int s){
	int minn = 200009;
	for(int i=k+1;i<r[s].size();i++){
		if(r[s][i]!=0 && r[s][i]<minn )
			minn = i;
	}

	return minn;

}

int path(vector<vector<int>> r,vector<string> city,string s,string d){
	int source,dest,s1,s2;
	for(int i=0;i<city.size();i++){
		if(city[i]==s)
			s1 = i;
		if(city[i]==d)
			s2 = i;
	}
	source = min(s1,s2);
	dest = max(s1,s2);
	if(source==dest)
		return 0;
	int k=source;
	int cost=0;
	while(source!=dest){
		int idx = mini(r,k,source);
		cost = cost + r[source][idx];
		k=idx;
		source = idx;
	}

	return cost;
}






int main(){
	int test;
	vector<vector<int>> r;
	vector<string> s;
	cin>>test;
	while(test--){
		int city;
		int k=city;
		cin>>city;
		
		while(city--){
			string name;
			cin>>name;
			s.push_back(name);
			int c;
			cin>>c;
			vector<int> v(k,0);
			while(c--){
				int x,y;
				cin>>x>>y;
				v[x-1] = y;
			}
			r.push_back(v);
			v.clear();
		}
		int n;
		cin>>n;
		while(n--){
			string s1,s2;
			cin>>s1>>s2;
			cout<<path(r,s,s1,s2)<<endl;
		}
	}
}