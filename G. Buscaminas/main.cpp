#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;
void sub()
{

}

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

    return 0;
}
