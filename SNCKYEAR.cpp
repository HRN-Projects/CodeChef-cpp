#include<iostream>
using namespace std;

int main()
{
    int t, n, a[] = {2010, 2015, 2016, 2017, 2019};

    cin>>t;
    
    while(t > 0)
    {
        t--;
        
        cin>>n;
        int flag = 0;
        
        for(int i=0; i < 5; i++)
        {
            if(n == a[i])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 1)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
    }
    
    return 0;
}
