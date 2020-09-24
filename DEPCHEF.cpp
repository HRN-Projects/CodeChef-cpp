#include<iostream>
using namespace std;

int main()
{
    int t, n, a[1000], d[1000], left, right;
    
    cin>>t;
    
    while(t > 0)
    {
        t--;
        
        cin>>n;
        int def = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
    
        for(int i = 0; i < n; i++)
        {
            cin>>d[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                left = a[n - 1];
                right = a[i + 1];
            }
            else if(i == (n - 1))
            {
                left = a[i - 1];
                right = a[0];
            }
            else
            {
                left = a[i - 1];
                right = a[i + 1];
            }
            
            if(((left + right) < d[i]) && (d[i] > def))
            {
                def = d[i];
            }
        }
        
        if(def == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<def<<endl;
        }
    }
    
    return 0;
}
