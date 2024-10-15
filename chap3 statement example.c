
#include <stdio.h>
int main (void)
{
    int b;
    printf("Enter a value:");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("The value is negative\n");
    }
    return 0;
}
