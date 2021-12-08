#include<iostream>
using namespace std;

int addbin(int a , int b)
{
    int ans,carry;
    carry=0;
    ans=0;
    while(a>0&&b>0)
    {
        if(a%10==0 && b%10==0)
        {
            ans = ans*10+carry;
            carry=0;
        }
        else if(a%10==0 && b%10==1 || a%10==1 && b%10==0)
        {
            if(carry==1)
            {
                ans = ans*10 + 0;
                carry=1;
            }
            else
            {
                ans = ans*10 + 1; 
                carry=0;   
            }
        }
        else
        {
            
            ans = ans*10 + carry;
            carry=1;
        
        }

        
        ans = reverse(ans);
    
        a/=10;
        b/=10;

        return ans;
    }
}
int reverse(int n)
        {
            int ans= 0;
            int remen;
            while(n>0)
            {
                remen = n%10; 
                ans=ans*10+remen;
                n/=10;
            }
            return ans;
        }
int main()
{
    int a,b;
    cin >>a>>b;
    cout<< addbin(a,b) << endl;
}
