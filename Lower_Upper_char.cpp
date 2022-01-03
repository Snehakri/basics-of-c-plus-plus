#include<iostream>
using namespace std;
int main() {
	 char c;
    cin>>c;
    int v=c;
    if(v>=65 && v<=90)//taking ascii value of char
    {
        cout<<"UPPERCASE";
    }
    else if(v>=97 && v<=122){
        cout<<"lowercase";
    }
    else{
        cout<<"Invalid";
    }
	return 0;
}