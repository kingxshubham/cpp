#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout << endl;
}

int sum(int a[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += a[i];
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //print(a,n);
    int ans = sum(a,n);
    cout << ans << endl;
    return 0;
}