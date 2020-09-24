#include <iostream>
using namespace std;

int main() {
	int t, r, c, mat[10][10], i, j, adj_cells, unstable;
	
	cin>>t;
	
	while(t)
	{
	    t--;
	    unstable=0;
	    
	    cin>>r>>c;
	    
	    for(i=0; i<r; i++)
	    {
	        for(j=0; j<c; j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    
	    for(i=0; i<r; i++)
	    {
	        if(unstable == 1)
	        {
	            break;
	        }
	        
	        for(j=0; j<c; j++)
	        {
	            if((i==0 && j==0) || (i==0 && j==(c-1)) || (i==(r-1) && j==0) || (i==(r-1) && j==(c-1)))
	            {
	                adj_cells = 2;
	            }
	            else if((i==0) || (i==(r-1)) || (j==0) || (j==(c-1)))
	            {
                    	adj_cells = 3;
	            }
	            else
	            {
	                adj_cells = 4;
	            }
	            
	            if(adj_cells <= mat[i][j])
	            {
	                unstable = 1;
	            }
	        }
	    }
	    
	    if(unstable == 1)
	    {
	        cout<<"Unstable"<<endl;
	    }
	    else
	    {
	        cout<<"Stable"<<endl;
	    }
	}
	
	return 0;
}
