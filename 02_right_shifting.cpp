//right shifting
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    //n<<i=n*2^(-i)
    cout<<n<<" >> "<<i<<" = "<< n<<"*"<<"2^(-"<<i<<")"<<" = " <<(n>>i)<<endl;
}