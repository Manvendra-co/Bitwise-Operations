#include<stdio.h>

int main()
{
    int n;
    int count = 0;
 
    printf("Enter an integer:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if ((n & 1) == 1)
            count++;
        n = n >> 1;
    }
    printf("The number of one's are :\n%d\n", count);
    return 0;
}
