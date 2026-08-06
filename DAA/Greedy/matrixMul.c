#include <stdio.h>

int matrixChain(int p[], int n)
{
    int m[n][n];
    for (int i=0;i<n;i++){
        m[i][i] = 0;
    }
    for (int len=2;len<=n;len++)
    {
        for (int i=0;i<=n-len;i++)
        {
		int j = i+len-1;
		int k = i;
		m[i][j] = m[i][k] + m[k+1][j] + p[i] * p[k+1] * p[j+1];
		for (k=i+1;k<j;k++)
		{
    			int cost = m[i][k] + m[k + 1][j] + p[i] * p[k+1] * p[j+1];
		    	if (cost < m[i][j])
        		m[i][j] = cost;
		}
        }
    }
    return m[0][n - 1];
}
 
int main()
{
    int n;
    printf("Enter No of Matrices: ");
    scanf("%d", &n);
    int p[n + 1];
    printf("Enter The  Row Size of the First Matrix Then Coulumn of the Next and So on:");
    for (int i = 0; i <= n; i++){
        scanf("%d", &p[i]);
    }
    printf("The result of minimum vector multipcation is: %d\n", matrixChain(p, n));
    return 0;
}
