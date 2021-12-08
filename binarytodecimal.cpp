#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;



  int bintodeci(int input)
  {
      string str= to_string(input);
      int deci =0;   
      int len=str.length() ;
      for (int i =1; i <=len-1; i++)
      {
         char nchar[]={""};  
         nchar[0] = str[i];
        //  string nchar= (string)str[i];
         deci+=pow(2,(len-1-i))*atoi(nchar);
      }
      return deci;
 }
 int binaryToDecimal(int input)
 {
     int org =input;
     int remen=0,num=0, power=1;
     
     
     while(input<0)
     {
         remen=input%10;
        
          num+=remen*power;
         power *= 2;
         input/=10;
     }
     return num;
 }
int main()
{
    
    int y;
    cin>> y;
    cout<<bintodeci(y)<<endl;
    // cout<<bintodeci(y)<<endl;
   return 0;
}