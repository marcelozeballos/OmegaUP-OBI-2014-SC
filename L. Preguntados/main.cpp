#include <cstdio>
using namespace std;

int main()
{
    int games, correct = 0, incorrect = 0; scanf("%d", &games);
    while(games--)
    {
        int caux, iaux; scanf("%d %d", &caux, &iaux);
        correct += caux;
        incorrect += iaux;
    }
    if(correct > incorrect)
        printf("CULTO\n");
    else if(incorrect > correct)
        printf("INCULTO\n");
    else
        printf("INDETERMINADO\n");

    return 0;
}
