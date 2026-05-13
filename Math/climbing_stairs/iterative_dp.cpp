#include<bits/stdc++.h>
using namespace std;
int climbstairs(int n){
    if(n<=2) return n;
    int a=1;
    int b=2;
    for(int i=3;i<=n;i++){
        int c = a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n ;
    cin>>n;
    cout<<climbstairs(n)<<endl;
    return 0;
}