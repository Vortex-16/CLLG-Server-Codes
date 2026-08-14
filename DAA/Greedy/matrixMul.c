#include <stdio.h>
#include <stdlib.h>

# define MAX 10
int matrixChainMul(int p[], int n)
{
    int m[n+1][n+1];
    for (int i=1;i<=n;i++){
        m[i][i]=0;
    }
    for (int d=1;d<=n-1;d++)
    {
        for (int i=1;i<=n-d;i++)
        {
            int j=i+d;
            m[i][j]=MAX;
            for(int k=i;k<j;k++)
            {
                int cost = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (cost < m[i][j]){
                    m[i][j] = cost;
		}
            }
        }
    }

    return m[1][n];
}
	
int main()
{
    int n;
    printf("Enter number of matric: ");
    scanf("%d", &n);
    int p[n + 1];
    printf("Enter %d dimension: ", n + 1);
    for (int i = 0; i <= n; i++){
        scanf("%d", &p[i]);
    }
    printf("Minimum multiplication cost = %d\n",
           matrixChainMul(p, n));
    return 0;
}
