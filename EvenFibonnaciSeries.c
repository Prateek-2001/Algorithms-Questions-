#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of even number required: ");
    scanf("%d", &n);

    int lastSecond = 2, last = 8;

    printf("%d ", lastSecond); 

    while (n > 1)
    {
        printf("%d ", last);

        //Computing next number
        int temp = last;
        last = (4 * last + lastSecond);
        lastSecond = last;

        n--;        
    }
}