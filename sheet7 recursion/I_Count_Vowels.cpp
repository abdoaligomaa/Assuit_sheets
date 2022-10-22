#include <iostream>
using namespace std;

char voils[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
bool is_voil(char letter)
{
    for (size_t i = 0; i < 10; i++)
    {
        if (letter == voils[i])
        {
            return true;
        }
    }
    return false;
}
int countVouls(string str, int len)
{
    if (len-1 == 0)
    {
        return is_voil(str[len-1]);
    }

    return is_voil(str[len-1])+countVouls(str,len-1);
}

int main()
{
    string str;
    getline(cin,str);

    int result = countVouls(str, str.length());
    cout << result;

        return 0;
}