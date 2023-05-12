// This Code Is written by Nobin
// Thanks me later
// main Poblem link: https://vjudge.net/problem/CodeChef-PRACTICEPERF/origin
#include<iostream>
using namespace std;

int main(){
    int p[4];

    for (int i = 0; i < 4; i++)
    {
        int temp=0;
        cin>>temp;

        if (temp>=1 && temp<=100)
        {
            p[i]=temp;
        }else{
            p[i]=0;
        }
        
    }
    int count= 0;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] >= 10)
        {
            count++;
        }
        
    }
    cout<<count;

    return 0;
}