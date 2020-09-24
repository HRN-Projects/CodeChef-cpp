#include<iostream>
using namespace std;

int main()
{
    int t, l, r, k, count;
    
    cin>>t;
    
    while(t > 0)
    {
        t--;
        
        cin>>l>>r>>k;
        
        if((k == 1) || (l == r))
        {
            count = 1;
        }
        else
        {
            count = k;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
