#include<stdio.h>
#include<math.h>

int main()
{
    int k,l;
    int n;
    int m[5][5];
    for(int i=0; i<=4; i++)
    {
        for(int j = 0; j<=4; j++)
        {
            scanf("%d", &m[i][j]);
        }

    }
    for(int i=0; i<=4; i++)
    {
        for(int j = 0; j<=4; j++)
        {
            if(m[i][j]==1)
            {
                k=i,l=j;
                break;
            }

        }
      //  printf("\n");

    }
   // printf("%d %d ", k,l);
    int value=(abs(2-k)+abs(2-l));
    printf("\n%d",value);

    return 0;
}
