#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    cin>>n;
    vector<int> v(n);
    
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
       int a,b;
        cin>>a>>b;
        for(int j=a-1;j<=b-1;j++)
            v[j]++;
    }
    
 // for(int i=0;i<n;i++)cout<<v[i]<<" ";
    
    int q;cin>>q;
   while(q--)
   {
       int count=0;
       int qur;cin>>qur;
       for(int i=0;i<n;i++)
       {
           if(qur<=v[i])count++;
       }
       cout<<count<<"\n";
   }
    
    return 0;
}
