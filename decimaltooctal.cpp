#include<iostream>
#include<cstring>
using namespace std;
string decitooctal(int num)
{
    
    
    int remen;
    string decistr ="";
    while(num>0)
    {
        remen = num%8;
        decistr = to_string(remen)+decistr;
        num/=8;
    }
    return decistr;
}
int main()
{
    int integer;
    cin>>integer;
    cout<<decitooctal(integer)<<endl;
    return 0;
}

