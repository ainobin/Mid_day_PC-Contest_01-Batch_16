// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-BALLOON/origin

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    if (t>=1 && t<=10500)
    {
        while (t--)
        {
            int n;
            cin>>n;
            
            if (n>=7 && n<=15)
            {
                int result = 0;
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    int temp= 0;
                    cin>>temp;
                    if (temp>=1 && temp<=n)
                    {
                        a[i]=temp;
                    }else{
                        a[i] = 0;
                    }
                }
                int fixed_val[7]={1,2,3,4,5,6,7};
                for (int i = 0; i < 7; i++)
                {
                    int flag=0;
                    for (int j = 0; j < n; j++)
                    {
                        flag++;
                        if (fixed_val[i] == a[j])
                        {
                            break;

                        } 
                    }
                    if (flag > result)
                    {
                        result = flag;
                    }
                }
                cout<<result<<endl;  
            }  
        }
    }
    return 0;
}