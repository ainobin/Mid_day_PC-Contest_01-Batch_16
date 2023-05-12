// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeForces-977A/origin

#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    if (n>=2 && n<=10e9 && t>=1 && t<=50 )
    {
        for (int i = 0; i < t; i++)
        {
            if (n%10 == 0)
            {
                n = n/10;
            }else{
                n = n-1;
            }
            
        }
        cout<<n;
        
    }
    

    return 0;
}