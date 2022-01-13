//if array is sorted

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i;i<n;i++){ //input array should be sorted
        cin>>A[i];
    }
    int end=(n-1),start=0;
    int target;
    cin>>target;
    int mid;
    int flag=0;
    while(start<=end)
    {
        
        mid=(end+start)/2;
        if(target==A[mid]){
            flag++;
            break;
        }
        if(target>A[mid]){
            start=mid+1;
        }
        else if(target<A[mid]){
            end=mid-1;
        }
    }
    if(flag==1){
        cout<<mid;
    }
    else cout<<"not found";
        return 0;
}