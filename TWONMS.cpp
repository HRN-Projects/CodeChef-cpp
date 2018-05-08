#include <iostream>
using namespace std; 
 
int main() {
	int t,maxn,minn,i,c,d;
	long a,b,n;
	
	
	cin>>t;
	
	while(t > 0)
	{
	    t--;
	    
	    cin>>a>>b>>n;
	    
	    for(i = 0; i < n; i++)
	    {
	        if(i % 2 == 0)
	        {
	            a = a * 2;
	        }
	        else
	        {
	            b = b * 2;
	        }
	    }
	    	    
	    if(a > b)
	    {
	        maxn = a;
	        minn = b;
	    }
	    else
	    {
	        maxn = b;
	        minn = a;
	    }
 
	    cout<<maxn / minn<<endl;
	}
	
	return 0;
} 
