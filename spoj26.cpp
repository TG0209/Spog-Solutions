#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int army(vector<int> g,vector<int> m){
	sort(g.begin(),g.end());
	sort(m.begin(),m.end());
	int s1 = g.size();
	int s2 = m.size();
	int i=0;
	int j=0;
	while(i<g.size() && j<m.size()){
		if(g[i]<m[j])
		{
			s1--;
			i++;
		}
		else if(g[i]>=m[j])
		{
			s2--;
			j++;
		}

	}
	if(s1==0)
		return 1;
	else if(s2==0)
		return 2;
	
	return 0;
}

int main(){
	int test;
	cin>>test;
	vector<int> g;
	vector<int> m;
	while(test--){
		int a,b;
		cin>>a>>b;
		while(a--){
			int x;
			cin>>x;
			g.push_back(x);
		}
		while(b--){
			int y;
			cin>>y;
			m.push_back(y);
		}
		if(army(g,m)==2)
			cout<<"Godzilla"<<endl;
		else if(army(g,m)==1)
			cout<<"MechaGodzilla"<<endl;
		else
			cout<<"uncertain"<<endl;
		m.clear();
		g.clear();
	}
}