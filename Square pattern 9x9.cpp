#include <iostream>
using namespace std;

int main()                        // Main starts
{
   int a,i,j;                     // declaring int varibles.
   
    a=5;                            // initialized variable a with '5'
   
   for(i=0;i<9;i++)                 // for loop of 0->8 for laying 9 rows
   {
       for(j=0;j<9;j++)             // for loop 0f 0>8 for laying 9 columns
       {
            //cout<<'('<<i<<j<<")=> ";         // Matrix coordinates for reference
           
            if(((i==1 || i==7) && (j>0 && j<8)) || ((i>0 && i<8) && (j==1 || j==7)))        // Check for coordinates (11,12,13,14,15,16,17,21,27,31,37,41,47,51,57,61,67,71,72,73,74,75,76,77)
            {
                cout<<a-1<<' ';
            }
            else if(((i==2 || i==6) && (j>1 && j<7)) || ((i>1 && i<7) && (j==2 || j==6)))   // Check for coordinates (22,23,24,25,26,32,36,42,46,52,56,62,63,64,65,66)
            {
                cout<<a-2<<' ';
            }
            else if(((i==3 || i==5) && (j>2 && j<6)) || ((i>2 && i<6) && (j==3 || j==5)))  // Check for coordinates (33,34,35,43,45,53,54,55)
            {
                cout<<a-3<<' ';
            }
            else if((i==4) && (j==4))   //Check for coordinates (44)
            {
                cout<<a-4<<' ';
            }
            else    // print '5' at all remaining (coordinates not checked in above conditions) coordinates
            {
                cout<<a<<' ';
            }
       }
       
        cout<<endl;     // Break line after every j='9' for plotting rows.
  }
   return 0;
}
