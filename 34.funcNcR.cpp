#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for (int i=2;i<=n;i++){
        ans=ans*i;

    }
    return ans;
}
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));

}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<ans<<endl;
    return 0;
}