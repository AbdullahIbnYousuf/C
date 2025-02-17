// total of two num = 12; find out the nums.

#include<stdio.h>
int main()
{
    int n = 8;
    int ar[] = {1, 2, 5, 4, 3, 8, 9, 10};
    int target = 8, i = 0, j = n- 1;
    while(i < j)
    {
        if (ar[i] + ar[j] == target)
        {
            printf("%d %d\n", ar[i], ar[j]);
            break;
        }
        else if(ar[i] + ar[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
