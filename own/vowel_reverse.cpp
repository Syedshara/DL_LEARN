#include <iostream>
#include <cctype>

using namespace std;
int is_vowel(char v)
{
    v = tolower(v);
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
    {
        return 1;
    }
    return 0;
}
int swap(int i, int j, string &str)
{
    char temp;
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    return 0;
}
int main()
{
    string str = "appleillou";
    cout << str << endl;
    int i = str.length() - 1, j = 0;
    for (; i >= 0; i--)
    {
        if (is_vowel(str[i]))
            if (i > j)
            {
                for (; j < str.length(); j++)
                {

                    if (i != j && is_vowel(str[j]))
                    {
                        swap(i, j, str);
                        j++;
                        break;
                    }
                }
            }
    }
    cout << str << endl;
}