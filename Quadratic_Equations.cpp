//Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
//If Real and Distinct , print the roots in increasing order.
//If Real and Equal , print the same repeating root twice
//If Imaginary , no need to print the roots.

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	float d=b*b - 4*a*c;
    if(d<0){
        cout<<"Imaginary";
        return 0;
    }
	int root1=(-b + sqrt(d))/2*a;
	int root2=(-b - sqrt(d))/2*a;
    if(d>0){
		cout<<"Real and Distinct"<<endl;
		if (root1>root2) {
			swap(root1,root2);
		}
		cout<<root1<<" "<<root2;
	}
	if(d==0){
		cout<<"Real and Equal"<<endl;
		cout<<root1<<" "<<root2;
	}
	

	
	return 0;
}