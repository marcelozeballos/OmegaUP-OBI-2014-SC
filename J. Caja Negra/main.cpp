#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int len; scanf("%d", &len);
    string cad; cin >> cad;
    cad += '~';
    char str[len+1];
    for(int i = 0; i < len; i++)
        str[i] = cad[i];
    sort(str, str+len);

    int cnt = 1, aux = 0;
    char help;
    for(int i = 0; i < len; i++)
    {
        if(str[i] == str[i+1])
            cnt++;
        if(str[i] != str[i+1])
        {
            if(cnt >= aux){
                aux = cnt;
                help = str[i];
            }
            cnt = 1;
        }

    }
    printf("%c", help);
}
