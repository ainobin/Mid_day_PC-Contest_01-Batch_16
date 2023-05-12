// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeForces-231A/origin

#include<iostream>
using namespace std;

int main(){
    int a[3],t;
    cin>>t;
    if (t >= 1 && t <= 1000)
    {
        int flag=0;
        while (t--)
        {
            for (int i = 0; i < 3; i++)
            {
                int temp=0;
                cin>>temp;
                if (temp == 0 || temp == 1)
                {
                    a[i]=temp;
                }
                
            }
            
            int sum=0;
            for (int i = 0; i < 3; i++)
            {
                sum += a[i];
            }
            if (sum >= 2)
                {
                    flag++;
                }
            
        }
        cout<<flag;
        
    }
    

    return 0;
}