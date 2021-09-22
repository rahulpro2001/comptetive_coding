#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
     string s;cin>>s;
    int n=s.size();
    int zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')one++;
        else zero++;
    }
        int mini=min(one,zero);
    cout<<mini<<"\n";
    
    }return 0;
}
