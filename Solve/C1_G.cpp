// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-TSTROBOT/origin

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if (t>=1 && t<= 100)
    {
        while (t--)
        {
            int n,x;
            cin>>n>>x;
            char a[n];
            cin>> a;
            int max_step = x;
            int min_step = x;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'R' || a[i] == 'r')
                {
                    x += 1;
                }else if(a[i] == 'L' || a[i] == 'l'){
                    x -= 1;
                }
                
                if (x > max_step){
                    max_step = x;
                } else if (x < min_step){
                    min_step = x;
                } 
            }
            int result = (max_step - min_step)+1;
            cout<<result<<endl;
            
        }
        
    }
    return 0;
}