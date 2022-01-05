// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int v=1;
        for(int j=1;j<=(n-i+1);j++){
            cout<<v<<" ";
            v++;

        }
        

        for(int j=1;j<=(2*i-3);j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
}