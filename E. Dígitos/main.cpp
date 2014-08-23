#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

int main()
{
    int num; scanf("%d", &num);
    ostringstream convert;
    convert << num;
    string aux = convert.str();
    string str;
    for(int i = 1; i <= num; i++)
    {
        ostringstream conv;
        conv << i;
        str += conv.str();
    }

    bool control = true;
    unsigned long long i = 0;
    int len = aux.size();

    while(control)
    {
        string help;
        for(int j = i; j < i+len; j++)
            help += str[j];
        if(help == aux)
            control = false;
        i++;
    }
    printf("%lld", i);

    return 0;
}
