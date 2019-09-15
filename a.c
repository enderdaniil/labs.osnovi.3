#include <stdio.h>
int main()
{
    printf("Input size\n");
    int a,b,s;
    float arr[a][b];
    scanf("%d%d",&a,&b);
    printf("Input skaliar\n");
    scanf("%d",&s);
    printf("Input matricu\n");
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            scanf("%lf",arr[i][j]);
            arr[i][j]*=s;
        }
    }
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            printf("%lf",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
