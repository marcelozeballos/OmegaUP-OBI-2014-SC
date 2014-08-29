#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int row, col; scanf("%d %d", &row, &col);
    int mat[row+2][col+2];
    memset(mat, 0, sizeof(mat));

    char matc[row][col];
    for(int i =0; i < row; i++){
        for(int j =0; j < col; j++){
            scanf("%c", &matc[i][j]);
        }
    }

    int vec[(row*col)];

    for(int i =0; i < row*col; i++)
        vec[i] = matc[i] - '0';

    for(int i = 0; i < row; i++){
        for(int j =0; j < col; j++)
            printf("%d", vec[i][j]);
    printf("\n");
    }

    return 0;
}
