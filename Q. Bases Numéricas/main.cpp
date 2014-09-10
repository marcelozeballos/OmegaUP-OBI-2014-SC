#include <cstdio>
using namespace std;

int main()
{
    int number, base; scanf("%d %d", &number, &base);
    do{
        printf("%d", number%base);
        number = number/base;
    }while(number >0);
}
