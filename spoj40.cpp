#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int s[101][101];
int mat[101][101];

int max(int a,int b,int c)
{
	int temp = max(a,b);
	temp = max(temp,c);
	return temp;
}

int philospher(int i,int j,int x,int y){
	if(i<0 || i>=x || j<0 || j>=y)
		return 0;
	if(s[i][j])
		return s[i][j];
	int temp = mat[i][j] + max(philospher(i+1,j,x,y),philospher(i+1,j+1,x,y),philospher(i+1,j-1,x,y));
	s[i][j] = temp;
	return temp;

}

int main(){
	int test;
	cin>>test;
	while(test--)
	{
		int x,y;
		cin>>x>>y;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				int z;
				cin>>z;
				s[i][j]=0;
				mat[i][j] = z;
			}
		}
		int minn=0;
		for(int j=0;j<y;j++){
			int temp;
			temp = philospher(0,j,x,y);
			if(temp>minn)
				minn = temp;
		}
		cout<<minn<<endl;

	}


}