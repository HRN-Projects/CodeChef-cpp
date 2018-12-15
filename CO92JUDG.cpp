#include<iostream>
using namespace std;

 int t, n, a[1000], b[1000], sa, sb, i, j, big=0, index;

void largest(int x[])
{
    for(i = 0; i < n; i++)
    {
        if(big < x[i])
        {
            big = x[i];
            index = i;
        }
    }
    
    big = 0;
    x[index] = 0;
}


int main()
{
 
 cin>>t;

 while(t)
 {
     t--;
    
    cin>>n;
    
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    largest(a);
    largest(b);

    for(i = 0; i < n; i++)
    {
        sa = sa + a[i]; 
        sb = sb + b[i];
    }
    
    if(sa == sb)
    {
        cout<<"Draw"<<endl;
    }
    else if(sa > sb)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl;
    }
    
    sa = sb = 0;
 }
}