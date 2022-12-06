#include <stdio.h>

using namespace std;

	int main ()
{
    int mat[3][4],
        i, j,
        col[1] = {0};

    for(i = 0; i < 1; i++)
    {
        for(j = 0; j < 4; j++)
        {

            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\n=============================================\n\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            col[i] = col[i] + mat[j][i];
        }
    }
    for(j = 0; j < 4
	; j++)
    {
        printf("Coluna [%d]: %d\n", j, col[j]);
    }
    return 0;
}
