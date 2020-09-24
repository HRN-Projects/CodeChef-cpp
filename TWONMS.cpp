#include <iostream>
using namespace std; 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int t,maxn,minn,i;
	long long a,b, n;


	cin>>t;

	while(t > 0)
	{
	    t--;

	    cin>>a>>b>>n;

	if(n%2 != 0)
	{
	    a = a * 2;

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
	}
	else
	{
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
	}

	    if(minn == 0)
	    {
		cout<<0<<endl;
		continue;
	    }

	cout<<maxn / minn<<endl;   
	}
	return 0;
}
