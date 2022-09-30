// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void DiamondShape(int &n, vector<string> &diamond, string &shape) 
{
    diamond.resize(n);
    diamond.clear();
    int nspaces = (n/2)-1;
    int nchar = 1;
    cout<<"Printing Diamond\n";
    for (int i=0;i<n;i++)
    {
     
        int spacecount=0;
        int charcount=0;
        while(spacecount<=nspaces)
        {
            diamond[i] += " ";
            spacecount++;
        }
        while(charcount<nchar)
        {
          diamond[i] += shape;
          charcount++;
        }
        if(i<n/2)
        {  
            nchar += 2;
            nspaces -= 1;
        }
        else
        {
            nchar -= 2;
            nspaces += 1;
        }
      cout<<diamond[i]<<endl;
    }
}
int main() {

    vector<string> diamond;
    int num;
    cout<<"Enter dimension for diamond: ";
    cin>>num;
    cout<<"Enter Shape Character for diamond: ";
    string shape;
    cin>>shape;
    if(num%2==0)
    {
        num-=1;
    }
    DiamondShape(num,diamond,shape);
    cout<<endl<<endl;

    return 0;
}
