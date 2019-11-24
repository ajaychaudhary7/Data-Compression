#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{  vector<tuple<char, float> > v;
   int n=5;
   cout<<"Enter characters and their corresponding probabilities\n";
   for(int i=0;i<n;i++)
   {
     float a;
     char c;
     cin>>c;
     cin>>a;
     v.push_back(make_tuple(c,a));
   }

   float ent=0;
   for(int i=0;i<5;i++)
   {  float x = get<1>(v[i]);
     ent = ent + (x * (log(x)/log(2)));
   }

   cout<<"Entropy is ="<<-ent<<endl;
}
