#define ull unsigned long long int
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string bin(int N,int b)
{
    std::string binary;
    if(b==2)
    {
         binary = std::bitset<2>(N).to_string();
    }

    if(b==3)
    {
        binary = std::bitset<3>(N).to_string();
    }

    if(b==4)
    {
       binary = std::bitset<4>(N).to_string();
    }

    if(b==5)
    {
        binary = std::bitset<5>(N).to_string();
    }
    return binary;
}

int unary_code(int n)
{  long long int un = 0;
if(n==0)
{return un;}
else
{
    for(int i=n;i>0;i--)
    {
        un = un + (int)(pow(10,i)+0.5);
    }
}
return un;
}

int reminder_coding(int m,int r)
{
    float b = floor(log(m)/log(2));
    float z = pow(2,b+1)-m;
    if(r<z)
    {
       cout<<bin(r,b);
    }

    if(r>=z)
    {
        cout<<bin(r+z,b+1);
    }
}

int main()
{
   int m,l;
   cout<<"How many numbers to be encoded \n";
   cin>>l;
    cout<<"Enter Parameter M \n";
   cin>>m;
   cout<<"Enter numbers to be encoded \n";
   int a[l];
   for(int i=0;i<l;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<l;i++)
   {
       cout<<"Encoding for "<<a[i]<<" is ====>"<<endl ;
       int q = (int)(a[i]/m);
       int r = a[i]%m;
       cout<<"Unary code is = "<<unary_code(q)<<endl;
       cout<<"Reminder code is = ";
       reminder_coding(m,r);
       cout<<"\n Final code is ="<<unary_code(q);reminder_coding(m,r);
       cout<<"\n";
   }
}
