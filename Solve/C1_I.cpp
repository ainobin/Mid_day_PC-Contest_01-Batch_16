// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeForces-617A/origin

#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if (n>=1 && n<= 1000000)
    {
        if (n<=5)
        {
            cout<<1;
        }else
        {
            long long result = n/5;
            
            if ( n%5 != 0)
            {
                result += 1;
            }
            cout<<result;
            
            
        }
        
        
    }
    

    return 0;
}