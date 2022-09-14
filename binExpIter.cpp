#include<bits/stdc++.h> 
using namespace std;
const int Mod = 13;
//log(b)
int binExpIter(int a,int b){
    int ans=1;
    while(b){   //(b--)
        if(b&1){  // (a&1==1)
        ans = (ans* 1ll *a)%Mod;
    }
    a=(a* 1ll* a)%Mod;
    b = b >> 1;
    }
    return ans;

}
int main()
{
    int a=2, b=90;
    cout << binExpIter(a,b);
}
