#include <iostream>
#include<string.h>

using namespace std;


void orignal(string s,int n){
	int r = s.length()/n;
	int k=0;
	int c=0;
	char res[r][n];
	for(int i=0;i<r;i++){
		if(k==0){
			for(int j=0;j<n;j++){
				res[i][j] = s[c];
				c++;
			}
			k=1;
		}
		else{
			for(int j=n-1;j>=0;j--){
				res[i][j] = s[c];
				c++;				
			}
			k=0;
		}
	}

	for(int j=0;j<n;j++){
		for(int i=0;i<r;i++)
			cout<<res[i][j];
	}
	cout<<endl;
}
int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		else{
			char s[250];
			cin>>s;
			orignal(s,n);
		}
	}
}