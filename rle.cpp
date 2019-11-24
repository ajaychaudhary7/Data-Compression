#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
using namespace std;

double siz(char *c)
{
    FILE *f;
    f = fopen(c , "r");
    fseek(f, 0, SEEK_END);
    double len = (unsigned long)ftell(f);
    fclose(f);
    return len;
}


int rle(char a[],int n)
{   ofstream file("com.txt");
    for(int i=0;i<n;i++)
   {   int coun=1;
        while(i<n-1 && a[i] == a[i+1])
            {
              coun++;
              i++;
            }
    if(coun>=4)
    {
     file<<"*"<<coun<<a[i];
    }
    else{
            for(int j=0;j<coun;j++)
            {
                file<<a[i];
            }
    }
   }
}

int main()
{
char a[100];
ifstream file("dec.txt");
for(int i = 0; i!='/0'; ++i)
{
    file >> a[i];
}
int n=strlen(a);
cout<<"Entered string is "<<a<<endl;
rle(a,n);

double de = siz("dec.txt");
double co = siz("com.txt");
cout<<"Compression ratio for compression is = "<<co/de<<endl;
}
