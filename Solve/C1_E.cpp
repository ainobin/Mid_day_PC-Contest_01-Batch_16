// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-CRICMATCH/origin

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if (t>=1 && t<=1000)
    {
    
    
        while (t--)
        {
            int n,m,max_run;
            cin>>n>>m;
            if ( n>=1 && n<=1000 && m>=1 && m<=100)
            {
        
                max_run= m*6*6;
                if (max_run >= n)
                {
                cout<<"YES"<<endl;
                }else{
                cout<<"NO"<<endl;
                }
        
            }
        }
    }
    return 0;
}