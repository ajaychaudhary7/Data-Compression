#include <bits/stdc++.h>
#include <algorithm>
#include <fstream>
#include <string.h>
#include <iostream>
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

int main()
{
  string str;
  vector <int> v;

  ifstream file("mtf_dec.txt");
    file >> str;
  int st_len = str.length();

  list <char> list1 { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  for (int i=0;i<st_len;i++)
  {
      char x = str[i];
      std::list<char>::iterator z = std::find(list1.begin(), list1.end(), x);
      int pos = std::distance(list1.begin(),z) ;
      v.push_back(pos);
      list1.erase(z);
      list1.push_front(x);
  }

  cout<<"List after Moving to Front Completion\n";
  list<char>::const_iterator pos;
    for (pos = list1.begin(); pos != list1.end(); ++pos)
    {
        cout << *pos << ' ';
    }

    ofstream file1("mtf_com.txt");
    vector<int>::iterator ptr;
    cout << "\n Output array is : \n";
    for (ptr = v.begin(); ptr < v.end(); ptr++)
       {
           cout << *ptr << " ";
           file1<<*ptr<<" ";
       }

    double de1 = siz("mtf_dec.txt");
    double co1 = siz("mtf_com.txt");
cout<<"Compression ratio for file is = "<<co1/de1<<endl;
}
