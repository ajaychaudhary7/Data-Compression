#include<iostream>
#include<stdio.h>
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
{ double bmp = siz("1_bmp.bmp");
  double jpg = siz("1_jpeg.jpg");
  double gif = siz("1_gif.gif");
  double png = siz("1_png.png");
  double txt = siz("1_txt.txt");
  double txt2 = siz("fn_998");

  cout<<"Compression ratio for bitmap and jpg is = "<<jpg/bmp<<endl;
  cout<<"Compression ratio for bitmap and gif is = "<<gif/bmp<<endl;
  cout<<"Compression ratio for bitmap and png is = "<<png/bmp<<endl;
//cout<<"Compression ratio for text and compressed text is = "<<txt/txt2<<endl;


  cout<<" \n \n";

  cout<<"saving percentage for bitmap and jpg is = "<<(1-jpg/bmp)*100<<endl;
  cout<<"saving percentage for bitmap and gif is = "<<(1-gif/bmp)*100<<endl;
  cout<<"saving percentage for bitmap and png is = "<<(1-png/bmp)*100<<endl;
  //cout<<"saving percentage for text and compressed text is = "<<(1-txt/txt2)*100<<endl;
}
