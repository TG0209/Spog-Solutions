#include <iostream>
#include<stack>
using namespace std;

string post(string s){
	stack<char> c;
	string k;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			c.push('(');
		}


		else if(s[i]==')'){
				while(c.top()!='('){
					k.push_back(c.top());
					c.pop();
				}
			c.pop();
		}


		else if(s[i]=='+'){
			if(c.empty() || c.top()=='('){
				c.push('+');
			}
			else {
				while(c.top()=='-' ||  c.top()=='/' || c.top()=='*' || c.top()=='^' || c.top()=='+'){
					k.push_back(c.top());
					c.pop();
				}
			}

		}


		else if(s[i]=='-'){
			if(c.empty() || c.top()=='(' || c.top()=='+'){
				c.push('-');
			}
			else {

				while(c.top()=='-' ||  c.top()=='/' || c.top()=='*' || c.top()=='^'){
					k.push_back(c.top());
					c.pop();
				}
			}


		}


		else if(s[i]=='*'){
			if(c.empty() || c.top()=='(' || c.top()=='+' || c.top()=='-'){
				c.push('*');
			}
			else {

				while(  c.top()=='/' || c.top()=='*' || c.top()=='^'){
					k.push_back(c.top());
					c.pop();
				}
			}


		}


		else if(s[i]=='/'){
			if(c.empty() || c.top()=='(' || c.top()=='+' || c.top()=='-' || c.top()=='*'){
				c.push('/');
			}
			else {

				while(  c.top()=='/'  || c.top()=='^'){
					k.push_back(c.top());
					c.pop();
				}
			}


		}

		else if(s[i]=='^'){
			if(c.empty() || c.top()=='(' || c.top()=='+' || c.top()=='-' || c.top()=='*' ||  c.top()=='/'){
				c.push('^');
			}
			else {

				while( c.top()=='^'){
					k.push_back(c.top());
					c.pop();
				}
			}


		}

		else
			k.push_back(s[i]);
	}

	while(!c.empty()){
		k.push_back(c.top());
		c.pop();
	}

	return k;
}

int main(){
	int k;
	cin>>k;
	while(k--){
		string s;
		cin>>s;
		cout<<post(s)<<endl;
	}
}