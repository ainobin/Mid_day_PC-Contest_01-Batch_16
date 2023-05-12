// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-GDTURN/origin

#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t; // test case
    if (1 <= t && t <= 100)
    {
    while (t--)
    {
        int X,Y;
        cin>>X>>Y;
        if (X >= 1 && X <= 6 && Y >= 1 && Y <= 6 )
        {
            if (X+Y > 6 )
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"No"<<endl;
            }
            
        }
        
    }
    }
    return 0;
}