#include<stdio.h>
int main()
{
    int start, end, sum = 0;

    printf("Enter start and end value: [Press Enter After Every Value]\n");
    scanf("%d%d", &start, &end);

    printf("\nSum of even no's from %d to %d is ", start, end);
    while(start <= end)
    {
        if(start % 2 == 0)
        {
            sum = sum + start;
        }
        start++;
    }
    printf("%d\n", sum);

    return 0;
}
