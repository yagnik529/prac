#include <stdio.h>

main()
{

    int n;
    int max = 0;
    printf("entre ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("value [%d]", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}

#include <stdio.h>

main()
{

    int n = 11;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}

#include <stdio.h>

main()
{

    int row, colum;
    int sum = 0, avg = 0;

    printf("enter row");
    scanf("%d", &row);
    printf("enter colum");
    scanf("%d", &colum);

    int arr[row][colum];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("value [%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            sum = sum + arr[i][j];
            avg = sum / (row * colum);
        }
    }
    printf("%d", sum);
    printf("\n%d", avg);
}

#include <stdio.h>

main()
{

    int n;
    printf("enter ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("value [%d]", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\n", arr[i]);
        }
    }
}

#include <stdio.h>

main()
{

    for (int i = 10; i >= 6; i--)
    {
        for (int k = i; k >= 7; k--)
        {
            printf("_");
        }

        for (int j = i; j <= 10; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

#include <stdio.h>

main()
{

    int n;

    printf("enter ");
    scanf("%d", &n);

    int a[n];
    int *p = a;

    for (int i = 1; i <= n; i++)
    {
        printf("value [%d]", i);
        scanf("%d", p + i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            printf("%d\n", *(p + i));
        }
    }
}

#include <stdio.h>
main()
{

    int n;
    printf("enter ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("value [%d]", i);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i) * *(ptr + i));
    }
}
