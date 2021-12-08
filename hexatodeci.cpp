#include<iostream>
#include<cstring>
using namespace std ;
int  hexatodeci(string hexa)
{
    string remen;
    int deci,power;
    deci=0;
    power=1;
    int len=hexa.length();
    for (int i = 0; i < len; i++)
    {

        remen= hexa[len-1-i];
        if(remen=="A")
        {
            deci=10*power+deci;
        }
        else if(remen=="B")
        {
            deci=11*power+deci;
        }
        else if(remen=="C")
        {
            deci=12*power+deci;
        }
        else if(remen=="D")
        {
            deci=13*power+deci;
        }
        else if(remen=="E")
        {
            deci=14*power+deci;
        }
        else if(remen=="F")
        {
            deci=15*power+deci;
        }
        else
        {
            deci=stoi(remen)*power+deci;
        }
        power*=16;

    }
    return deci;
    
    
}
int main()
{
    string  input;
    cin>>input;
    cout<<hexatodeci(input)<<endl;
}