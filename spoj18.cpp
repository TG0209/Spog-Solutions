#include <iostream>
#include<math.h>

using namespace std;
int rectangle(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++)
		sum += (n/i) - i +1;

	return sum;
}

int main(){
	int n;
	cin>>n;
	cout<<rectangle(n)<<endl;

}