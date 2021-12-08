#include<iostream>
using namespace std;
int octtodeci(int octal)
{
    int remen,deci,power;
    power=1;
    deci=0;
    while(octal>0)
    {
        remen = octal%10;
        deci =remen*power+deci;
        power*=8;
        octal/=10;
    }
    return deci;
}

int main()
{
 int input ;
 cin>> input;
 cout<<octtodeci(input)<<endl;
 return 0;   
}