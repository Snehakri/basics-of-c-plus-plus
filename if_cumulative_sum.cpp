// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.

// Sample Input
// 1
// 2
// 88
// -100
// 49

// Sample Output
// 1
// 2
// 88

#include<iostream>
using namespace std;
int main() {
	int n;
	int sum=0;
	while(true){
		cin>>n;
		
		sum+=n;
		if(sum>=0){
			cout<<n<<endl;
		
		}
		else if(sum<0){
			break;
		}
	}
	
	return 0;
}