#include <iostream>

using namespace std;


int cards(float n){

	float sum=0;
	int cards=0;
	for(float i = 2.00 ;;i++){
		sum += 1/i;
		cards++;
		if(sum>=n)
			break;
	}
	return cards;

}
int main(){
	 while(1){
	 	float n;
	 	cin>>n;
	 	if(n==0.00)
	 		break;
	 	else
	 		cout<<cards(n)<<" card(s)"<<endl;
	 	

	 }
}