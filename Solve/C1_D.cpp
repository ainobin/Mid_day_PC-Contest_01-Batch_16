// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-IPLTRSH/origin

#include<iostream>
using namespace std;

int main(){
    int t,n,m;

    cin>>t;

    while (t--)
    {
        cin>>n>>m;

        if(m >= n){
            cout<<"0"<<endl;
        }else{
            cout<< (n-m)<<endl;
        }
    }
    return 0;
}