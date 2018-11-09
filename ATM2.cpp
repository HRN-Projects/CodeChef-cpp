#include<iostream>
using namespace std;

int main()
{
    int t, n, k, a[1000000], i;
    
    cin>>t;
    
    while(t)
    {
        t--; 
        
        cin>>n>>k;
        
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
            
            if(a[i] <= k)
            {
                cout<<"1";
                k = k - a[i];
            }
            else
            {
                cout<<"0";
            }
        }
        
        cout<<"\n";
    }
    
    return 0;
}