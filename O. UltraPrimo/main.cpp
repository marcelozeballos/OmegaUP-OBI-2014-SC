#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int converter(string number)
{
    int sum =0;
    for(int i = 0; i < number.size(); i++){
        char aux = number[i];
        sum += aux-'0';
    }
    return sum;
}

int main()
{
    int cases; cin >> cases;

    while(cases--)
    {
        string str; cin >> str;
        int sum;
        sum = converter(str);

        int cnt = 0;
        for(int i = 2; i < (sum/2)+1; i++)
            if(sum%i == 0)
                cnt++;

        if(cnt > 0)
            printf("No UltraPrimo\n");
        else
            printf("UltraPrimo\n");
    }
}
