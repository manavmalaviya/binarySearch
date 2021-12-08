#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string decitobin(int input) 
{
    int bin;
    string newstr="";
    string binstr="";
    while(input!=0)
    {
        bin=input%2;
        
        binstr = to_string(bin) + binstr;
        
        input/=2;
    }
    int len =binstr.length();
    
    //  for ( int i=len-1;i<=0;i--)
    //  {
    //      newstr += binstr[i];
    //  }
    
    return binstr;
}
int main()
{
    int x;
    
     cin>>x;

    cout<<decitobin(x)<<endl;
  return 0;  
}