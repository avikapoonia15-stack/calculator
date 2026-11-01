#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double a, b;

    printf("====================================\n");
    printf("     CREATIVE SMART CALCULATOR\n");
    printf("====================================\n");

    do
    {
        printf("\n1. Addition (+)");
        printf("\n2. Subtraction (-)");
        printf("\n3. Multiplication (*)");
        printf("\n4. Division (/)");
        printf("\n5. Power (^)");
        printf("\n6. Square Root");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &a, &b);
                printf("✅ Result = %.2lf\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &a, &b);
                printf("✅ Result = %.2lf\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &a, &b);
                printf("✅ Result = %.2lf\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &a, &b);

                if(b != 0)
                    printf("✅ Result = %.2lf\n", a / b);
                else
                    printf("❌ Division by zero not possible!\n");
                break;

            case 5:
                printf("Enter base and power: ");
                scanf("%lf%lf", &a, &b);
                printf("✅ Result = %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);

                if(a >= 0)
                    printf("✅ Result = %.2lf\n", sqrt(a));
                else
                    printf("❌ Square root of negative number not possible!\n");
                break;

            case 7:
                printf("\n🎉 Thank You for using Smart Calculator!\n");
                break;

            default:
                printf("❌ Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}