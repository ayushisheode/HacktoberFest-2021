#include<bits/stdc++.h>
using namespace std;


int ascending(int arr[],int k,int n,int l,int e){
        while(l<=e){
    int mid=((l+e)/2);
    if(k==arr[mid]){
        cout<<"found at"<<" "<<mid;
        return 0;
    } else if(k<arr[mid]){
        e=mid-1;
    } else {
        l=mid+1;
    }
    }
    cout<<"not found";
    

}



int descending(int arr[],int k,int n,int l,int e){
    while(l<e){
            int mid=((l+e)/2);
            if(k==arr[mid]){
                cout<<"element found"<<" "<<mid;
                return 0;
            } else if(k>arr[mid]){
                e=mid-1;
            } else if(k<arr[mid]){
                l=mid+1;
            }
        }

        cout<<"not found";
    

}





int main(){
    
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    
    int arr[n];
    int l=0,e=n;
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;

    cout<<"enter the key\n";
    cin>>k;
    if(arr[0]<arr[n]){
        ascending(arr,k,n,l,e);
    } else if(arr[0]>arr[n]){
        descending(arr,k,n,l,e);

    }
}