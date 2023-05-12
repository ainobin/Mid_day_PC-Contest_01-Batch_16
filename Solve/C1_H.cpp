// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeForces-1822A/origin

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if (t>=1 && t<=1000)
    {
        while (t--)
        {
            
            int fin_result = 0;
            int n,m;
            cin>>n>>m;
            if (n>=1 && n<=50 && m>=1 && m<=200)
            {
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    // time
                    int temp = 0;
                    cin>>temp;
                    if (temp>=1 && temp<=100)
                    {
                        a[i]=temp;
                    }else{
                        a[i] = 0;
                    }
                    
                }
                int b[n];
                for (int i = 0; i < n; i++)
                {
                    //ent_value
                    int temp = 0;
                    cin>>temp;

                    if (temp>=1 && temp<=100)
                    {
                        b[i]= temp;
                    }else{
                        b[i] = 0;
                    }
                    
                }
                int max_val = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] <= (m-i))
                    {
                        if (b[i] > max_val)
                        {
                            max_val = b[i];
                            fin_result = i+1;
                        }
                        
                    }
                    
                }
                
            }
            if(fin_result == 0){
            cout<<-1<<endl;
            }else{
                cout<<fin_result<<endl;
            }
        }
    }
    return 0;
}