#include <iostream>
using namespace std;

int t, fneg = 0, bneg = 0;;
long int n, l[100000], g[100000], i, j, diff = 0;


void check_front()
{
    for(i = 0; i < n; i++)
    {
        diff = g[i] - l[i];
        
        if(diff < 0)
        {
            fneg = 1;
        }
    }
}

void check_back()
{
    for(i = 0; i < n; i++)
    {
        diff = g[(n - 1) - i] - l[i];
        
        if(diff < 0)
        {
            bneg = 1;
        }
    }    
}

int main() {
	
	cin>>t;
	
	while(t)
	{
	    t--;
	    
	    cin>>n;
	    
	    for(i = 0; i < n; i++)
	    {
	        cin>>l[i];
	    }
	    
	    for(i = 0; i < n; i++)
	    {
	        cin>>g[i];
	    }
	    
	    check_front();
	    check_back();
	    
	    if((fneg == 1) && (bneg == 1))
	    {
	        cout<<"none"<<endl;
	    }
	    else if((fneg == 1) && (bneg != 1))
	    {
	        cout<<"back"<<endl;
	    }
	    else if((fneg != 1) && (bneg == 1))
	    {
	        cout<<"front"<<endl;
	    }
	    else
	    {
	        cout<<"both"<<endl;
	    }
	    
	    fneg = 0;
	    bneg = 0;
	}
	
	return 0;
}
