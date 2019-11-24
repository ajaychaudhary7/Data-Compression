#include <iostream>
using namespace std;

int alpha[26] = {0};

int main()
{
    string text;

    cout << "Enter text:" << endl;
    getline(cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        int a = text[i];

        if (a >= 'A' && a <= 'Z')
        {
            alpha[a - 'A']++;
        }
        else if (a >= 'a' && a <= 'z')
        {
            alpha[a - 'a']++;
        }
    }

    cout << "Frequencies:" << endl;

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i])
        {
            cout << char('a' + i) << " " << alpha[i] << endl;
        }
    }
    return 0;
}
