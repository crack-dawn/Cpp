#include <stdio.h>
#include <windows.h>
int main()
{
        char ch ;
        int m, n, i, j, count;
        char a[101][101];

        scanf("%d%d", &m, &n);
        while ((ch = getchar()) != '\n' && ch != EOF);

        for (i = 0; i < m + 2; i++)
        {
                for (j = 0; j < n + 2; j++)
                {
                        a[i][j] = '?';
                }
        }
        
        for (i = 1; i < m + 1; i++)
        {
                for (j = 1; j < n + 1; j++)
                {
                        scanf("%c", &a[i][j]);
                }
                while ( (ch = getchar()) != '\n' && ch != EOF  );
        }

        for (i = 1; i < m + 1; i++)
        {
                for (j = 1; j < n + 1; j++)
                {
                        if (a[i][j] != '*')
                        {
                                count = 0;
                                if (a[i - 1][j - 1] == '*')
                                        count++;
                                if (a[i][j - 1] == '*')
                                        count++;
                                if (a[i + 1][j - 1] == '*')
                                        count++;
                                if (a[i - 1][j] == '*')
                                        count++;
                                if (a[i + 1][j] == '*')
                                        count++;
                                if (a[i - 1][j + 1] == '*')
                                        count++;
                                if (a[i][j + 1] == '*')
                                        count++;
                                if (a[i + 1][j + 1] == '*')
                                        count++;
                                a[i][j] = count + '0';
                        }
                }
        }
        for (i = 1; i < m + 1; i++)
        {
                for (j = 1; j < n + 1; j++)
                {
                        printf("%c", a[i][j]);
                }
                printf("\n");
        }
        system("pause");
        return 0;
}