#include <string>
#include <cstdio>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    int num; scanf("%d", &num);
    stringstream temp;

    temp << num;
    string aux = temp.str();

    stringstream buff;
    for(int i = 0; i <= num; i++)
        buff << i;
    string str = buff.str();

    printf("%d", str.find(aux));

    return 0;
}
