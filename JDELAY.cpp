#include<iostream>
using namespace std;

int main()
{
    int t, n, a, b, counter = 0;    
    
    cin>>t;
    
    while(t)
    {
        t--;
        
        cin>>n;
        
        while(n)
        {
            n--;
            
            cin>>a>>b;
            
            if((b - a) > 5)
            {
                counter++;
            }
        }
        
        cout<<counter<<endl;
        counter=0;
    }
    
    return 0;
}