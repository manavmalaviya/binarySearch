#include<iostream>
#include<cmath>
using namespace std;
 
  int prime(int a, int b)
  {
      int count=0;
      for (int i = a ;i <= b; i++)
      {
          count=0;
       for (int j = 2; j <=sqrt(i); j++)
        {
            
            if(i%j==0)
            {
                 count =1;
                 break;
             }
             else{continue;}
        }

        if(count==0)
        {
            cout<<i<<endl;
        }
       
       
      }
     
 }
// int isPrime(int num)
// {
//     for (int i = 2; i <=sqrt(num); i++)
//     {
//         if(num%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
    
// }
 int main()
 {
     int a,b;
     cin>> a;
     cin>>b;
    //  for (int i = a; i <=b; i++)
    //  {
    //     if(isPrime(i))
    //     {
    //         cout<<i<<endl;
    //     }
    //          }
     
    prime(a,b);

     return 0;
 }