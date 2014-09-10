#include <cstdio>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    int greatest;
    if(a > b)
        swap(a,b);
    while(b != 0)
    {
        greatest = b;
        b = a%b;
        a = greatest;
    }
    return greatest;
}
int main()
{
    int len; scanf("%d", &len);
    if(len == 1)
        printf("-1\n");
    else{
        int vec[len+1];
        for(int i = 0; i < len; i++)
            scanf("%d", &vec[i]);

        vec[len] = vec[0];
        int cnt = 0;
        while(true){
            for(int i = 0; i < len; i++){
                int aux1 = vec[i], aux2 = vec[i+1];
                vec[i] = gcd(aux1,aux2);
            }
            cnt++;
            int sum = 0;
            for(int i = 0; i < len; i++)
                sum += vec[i];
            if(sum == len)
                break;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
