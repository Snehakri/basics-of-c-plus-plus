#include<iostream>
using namespace std;
int main() {
	int n,reverse=0;
	cin>>n;
	while(n>0){
		int rem=n%10;
		n=n/10;
		reverse=reverse*10+rem;
	}
	cout<<reverse;
	return 0;
}