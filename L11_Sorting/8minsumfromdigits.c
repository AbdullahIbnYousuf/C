#include <stdio.h>
#include <stdbool.h>
int number(int n, int arr[]);
int main()
{
    int arr[5] = {8, 8, 2, 7, 8};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag)
            break;
    }

    int num1 = number(n, arr);

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            break;
        }
    }

    int num2 = number(n, arr);

    printf("%d\n", num1 + num2);

    return 0;
}

int number(int n, int arr[])
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num * 10 + arr[i];
    }
    return num;
}