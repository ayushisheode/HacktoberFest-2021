#include<bits/stdc++.h>
using namespace std;





int main(){
    int sum=0;
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}