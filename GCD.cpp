//The largest number that divides both N1 and N2 is called the GCD of N1 and N2.

#include<iostream>
using namespace std;
int main() {
	long int n1,n2;
	cin>>n1>>n2;
	int count=0,max=0;
	for(int i=1;i<=n1;i++){
		if(n1%i==0 && n2%i==0){
			count=i;
		}
		if(count>max){
			max=count;
		}
	}
	cout<<max;

	return 0;
}