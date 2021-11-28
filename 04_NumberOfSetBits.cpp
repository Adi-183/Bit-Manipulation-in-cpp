//number if set bits in binary representation of a number 
//i.e. number if bits that are 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=1;//f=000001
    int count=0;
    // if(int(n&f)!=0){
    //     //0th bit set
    //     count++;
    // }
    // for(int i=0;i<32;i++){
    //     if(n>=0){
    //         n=n>>1;//right shifting
    //     }
       
    //     if(int(n&f)!=0){
    //         count++;
    //     }
    // }
    /*better code*/
    while(n>0){
        if((n&1)>0) count++;
        n=n>>1;
    }//O(logn)
    /*another approach*/
    int n1=n;
    int cnt=0;
    while(n1>0){
        cnt++;
        n=n&(n-1);//removing rightmost set bit from n each time
    }

    cout<<count<<endl;

}