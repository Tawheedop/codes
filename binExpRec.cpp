#include <bits/stdc++.h>
using namespace std;
const int M = 13;
int binExpRec(int a, int b)
{
 if(b==0) return 1;
 int  res = binExpRec(a,b/2);
 if(b&1){
    return (a * ((res* 1ll* res)%M ) %M);
 }else{
    return (res* 1ll * res)%M;
 }
}

int main(){
    int a=2, b=90;
    cout << binExpRec(a,b);
}
