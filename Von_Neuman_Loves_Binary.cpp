//Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
// Sample Input
// 4
// 101
// 1111
// 00110
// 111111

// Sample Output
// 5
// 15
// 6
// 63

#include<iostream>
using namespace std;
int main() {
	int n,binary;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>binary;
		int decimal=0,weight=1;
		while(binary!=0){
			int rem=binary%10;
			binary=binary/10;
			decimal+=weight*rem;
			weight*=2;
		}
		cout<<decimal<<endl;

	}
	return 0;
}