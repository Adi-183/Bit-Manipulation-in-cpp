//given a number n
//check if ith bit is set
//meaning check if ith bit is 1
//--------------------------------
//example
/*N=12 ->1100
1)i=0 not set
2)i=1 not set
3)i=2 set
4)i=3 set
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int f=1;//0000001
    f=f<<i;//left shift f by i 0001000
    if(int(n&f)==0){
        cout<<i<<"th bit is not set in number "<<n<<endl;
    }
    else{
        cout<<i<<"th bit is set in number "<<n<<endl;
    }
}
