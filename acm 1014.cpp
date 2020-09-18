#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    vector<int>a;
    if(n==0) cout<<10<<endl;
    else if(n==1) cout<<1<<endl;
    else
    {
        while(fact && n!=1)
        {
            fact=0;
            for(int i=9;i>1;--i)
            {
                if(n%i==0)
                {
                    a.push_back(i);
                    n/=i;
                    fact=1;
                    break;
                }
            }
        }
        reverse(a.begin(),a.end());
        if(fact==0) cout<<"-1"<<endl;
        else
        {
            for(int j=0;j<a.size();j++) cout<<a[j];   cout<<endl;
        }

    }
}
