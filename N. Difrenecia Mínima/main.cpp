// MINIMUM DIFFERENCE IN AN ARRAY. TRICKY AS WELL

#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int len; scanf("%d", &len);

    int vec[len+1];
    vec[len] = 999999999;
    for(int i = 0; i < len; i++)
        scanf("%d", &vec[i]);
    sort(vec,vec+(len+1));

    int diff = abs(vec[1]-vec[0]);

    for(int i = 0; i < len; i++)
        diff = min(abs(vec[i-1]-vec[i]),diff);

    printf("%d\n", diff);
}
