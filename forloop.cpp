// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     for(int i=0;i<s.length();i++)
//     {
//         if(i%3!=0){
//             cout<<s[i];
//         }
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int max=A[0];
    int min=A[0];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(A[0]<A[i]){
            max=A[i];
            
        }
    
        if(A[0]>A[i]){
            min=A[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==min){
            sum+=i;
        }
        else if(A[i]==max){
            sum+=i;
        }
    }
    cout<<sum;
    


}
