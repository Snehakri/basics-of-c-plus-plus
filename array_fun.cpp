//reversing the elements of an array
#include<iostream>
using namespace std;

void reverse(int *a,int n){
    int i=0,j=(n-1);
    while(i<j){
        swap(a[i++],a[j--]);
    }

}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    // return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,n);
    print(a,n);
}


//plus one  every element of an array
#include<iostream>
using namespace std;

void update(int *a,int n){
    for(int i=0;i<n;i++){
        *(a+i)+=1;
        
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    update(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    
    
}