#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }
    space = 0;
    star = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        star = star - 2;
        space++;
    }

    return 0;
}