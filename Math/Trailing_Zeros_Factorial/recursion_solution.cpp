#include <iostream>
using namespace std;

class solution{
 public:
  int trailingZeros(int n){
    int count =0;
    while(n>0){
        n/=5;
        count+=n;
    }
    return count;
  }
};

int main(){
    solution sol;
     int n ;
    cin>>n;
    cout<<sol.trailingZeros(n)<<endl;
    return 0;
}