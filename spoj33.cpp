#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	while(1){
		int x;
		cin>>x;
		if(x==0)
			break;
		else
		{
			float area = pow(x,2)/(2*(3.1415926536));
			printf("%0.2f\n",area);
		}
	}
}