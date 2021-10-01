#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    cin>>x;
    for(int i=1;i<=n;i++){
        if(i%x==0){
        continue;
        }
        cout<<i<<endl;
    }
}