#include <stdio.h>

int main()
{
    int n, m;
    printf("qatorlar soni: ");
    scanf("%d", &n);

    printf("ustunlar soni: ");
    scanf("%d", &m);

    int seats[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &seats[i][k]);
        }
    }

    int i, k;
    scanf("%d %d", &i, &k);

    printf("%d-qator, %d-orindiq: ", i, k);
    if (seats[i - 1][k - 1] == 1) {
        printf("Band\n");
    } else {
        printf("Bosh\n");
    }

    return 0;
}
