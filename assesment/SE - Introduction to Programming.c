#include <stdio.h>

int main()
{
    int ch, quantity;
    int total = 0;
    char ans = 'y';

    while(ans == 'y')
    {
        printf("\n---- Food Menu ----\n");
        printf("1. Pizza  (180rs)\n");
        printf("2. Burger (100rs)\n");
        printf("3. Dosa   (120rs)\n");
        printf("4. Idli   (50rs)\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if(ch == 1)
        {
            printf("\nPizza selected\n");
            total = total + (180 * quantity);
        }
        else if(ch == 2)
        {
            printf("\nBurger selected\n");
            total = total + (100 * quantity);
        }
        else if(ch == 3)
        {
            printf("\nDosa selected\n");
            total = total + (120 * quantity);
        }
        else if(ch == 4)
        {
            printf("\nIdli selected\n");
            total = total + (50 * quantity);
        }
        else
        {
            printf("\nWrong choice\n");
        }

        printf("\nCurrent total = %d\n", total);

        //  more
        printf("\nDo you want more? (y/n): ");
        scanf(" %c", &ans);
    }

    printf("\nFinal bill = %d\n", total);

    return 0;
}