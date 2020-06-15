#include <iostream>
#include<stack>

using namespace std;




int main(){
	stack<int> s;
	stack<int> m;
	while(1){
		int test;
		cin>>test;
		if(test==0)
			break;
		else{
			int t=1;
			int top = test;
			while(test--){
				int x;
				cin>>x;
				while(!s.empty() && !m.empty() && s.top()==t){
						m.push(s.top());
						s.pop();
						t++;
					}
				if(x==t){
					m.push(x);
					t++;
				}
				
				else{
					s.push(x);
				}
				
				}
				while(!s.empty()){
					m.push(s.top());
					s.pop();
				}
				int k=1;
				while(!m.empty()){
					if(m.top()==top){
						top--;
						m.pop();
					}else{
						k=0;
						cout<<"no"<<endl;
						break;
					}
				}
				if(k==1)
					cout<<"yes"<<endl;
				
			
		}
	}
}