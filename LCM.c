#include <stdio.h>
int main()
{
    int num1, num2,temp=0;

    printf("Enter 1st Number : ");
    scanf("%d", &num1);
    printf("Enter 2nd Number : ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        temp = num1;
        for (int j = 2;; j++)
        {
            if (temp % num2 == 0)
            {
                printf("LCM of %d and %d is : %d", num1, num2, temp);
                break;
            }
            temp = num1 * j;
        }
    }
    else
    {
        temp = num2;
        for (int j = 2;; j++)
        {
            if (temp % num1 == 0)
            {
                printf("LCM of %d and %d is : %d", num1, num2, temp);
                break;
            }
            temp = num2 * j;
        }
    }
    return 0;
}
