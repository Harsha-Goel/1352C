#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    if(k%(n-1)==0){
        cout<<((k/(n-1))*n)-1 nn;
    }
    else{
        cout<<((k/(n-1))*n)+(k%(n-1)) nn;
    }
    }
    
    return 0;
}