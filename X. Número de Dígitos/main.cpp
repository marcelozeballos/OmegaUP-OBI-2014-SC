#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    string str; cin >> str;

    int len = str.size();
    int multiplier = len;
    stringstream sso(str);
    long long num, cnt = 0, modder = 1;
    sso >> num;

    for(int i = 1; i < len; i++)
        modder *= 10;

    do{
        int aux;
        if(num > 9)
            aux = (num%modder)+1;
        else
            aux = (num%modder);

        cnt += (aux*multiplier);
        multiplier--;
        num = num - aux;
    }while(num  >0);
    cout << cnt << endl;
}
