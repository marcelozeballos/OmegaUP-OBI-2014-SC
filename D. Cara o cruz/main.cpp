#include <cstdio>
using namespace std;

int main()
{
    int n, cntm = 0, cntj =0;
    scanf("%d", &n);
    while(n--)
    {
        int aux; scanf("%d", &aux);
        if(aux == 0)
            cntm++;
        else
            cntj++;
    }
    printf("Mary won %d times and John won %d times", cntm, cntj);

    return 0;
}
