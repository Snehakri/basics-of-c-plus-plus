//* * * * *
//* *   * *
//*       *
//* *   * *
//* * * * *
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=(n+1)/2;i++){
		if(i==1){
			for(int j=1;j<=n;j++){
				cout<<"*"<<"	";
			}	
		}
		else{
			for(int j=1;j<=((n+1)/2-i+1);j++){
				cout<<"*"<<"	";
			}
			for(int j=1;j<=(i-1);j++){
				cout<<" "<<"	";
			}
			for(int j=1;j<=(i-2);j++){
				cout<<" "<<"	";
			}
			for(int j=1;j<=((n+1)/2-i+1);j++){
				cout<<"*"<<"	";
			}
		}
		cout<<endl;
	}
	for(int i=(((n+1)/2)+1);i<=n;i++){
		if(i==n){
			for(int j=1;j<=n;j++){
				cout<<"*"<<"	";
			}	
		}
		else{

			for(int j=1;j<=(i-(n+1)/2+1);j++){
				cout<<"*"<<"	";
			}
			for(int j=1;j<=(n-i);j++){
				cout<<" "<<"	";
			}
			for(int j=1;j<=(n-i-1);j++){
				cout<<" "<<"	";
			}
			for(int j=1;j<=(i-(n+1)/2+1);j++){
				cout<<"*"<<"	";
			}
		}
		
		cout<<endl;

	}
	return 0;
}