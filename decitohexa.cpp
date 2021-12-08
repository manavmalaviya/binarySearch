#include<iostream>
#include<cstring>
using namespace std;

string decitohexa(int integer)
{
    int remen;
    string remenstr,hexa;
    hexa="";
    while (integer>0)
    {
        remen=integer%16;
        switch (remen)
        {
            case 10:
            {
                remenstr="A";
                hexa=remenstr+hexa;
                break;                      
            }
            case 11:
            {
                remenstr="B";
                hexa=remenstr+hexa;
            }
                      break;
            case 12:
            {
                remenstr="C";
                hexa=remenstr+hexa;
            }
                      break;
            case 13:
            {
                remenstr="D";
                hexa=remenstr+hexa;
            }
                      break;
            case 14:
            {
                remenstr="E";
                hexa=remenstr+hexa;
            }
                      break;
            case 15:
             {
                remenstr="F";
                hexa=remenstr+hexa;
            }
                      break;

            default:
            {
                hexa=to_string(remen)+hexa;
            }
                break;
        }
        integer/=16;
        // if(remen==10)
        // {
        //     remenstr="A";
        // }
        // if(remen==11)
        // {
        //     remenstr="B";
        // }
        // if(remen==12)
        // {
        //     remenstr="C";
        // }
        // if(remen==13)
        // {
        //     remenstr="D";
        // }
        // if(remen==14)
        // {
        //     remenstr="E";
        // }
        // if(remen==15)
        // {
        //     remenstr="F";
        // }

    }
    return hexa;
    
}


int main()
{
    int input;
    cin>> input;
    cout<<decitohexa(input)<<endl;
    return 0;
}