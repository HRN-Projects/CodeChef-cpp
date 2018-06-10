#include <iostream>
using namespace std;

int main() 
{
    int t,x1,x2,x3,d1,d2;
    float v1,v2,t1,t2;

    cin>>t;
    while(t > 0)
    {
        t--;
        
        cin>>x1>>x2>>x3>>v1>>v2;
    
        d1 = x3 - x1;
        d2 = x2 - x3;
        
        t1 = d1/v1;
        t2 = d2/v2;

        if(t1 == t2)
        {
            cout<<"Draw\n";
        }
        else if(t1 < t2)
        {
            cout<<"Chef\n";
        }
        else
        {
            cout<<"Kefa\n";
        }

    }
    
	return 0;
}
