#include <cstdio>
using namespace std;

int main()
{
    int year; scanf("%d", &year);

    if(year%4 == 0 && year%100 != 0)
        printf("S\n");
    else if(year%100 == 0 && year%400 == 0)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
