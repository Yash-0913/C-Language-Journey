/* Exercise-2: Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>
int main()
{
    while (1)
    {
        int op;
        float num;
        printf("LET'S DO SOME CONVERSIONS!\n");
        printf("Enter 1 to do conversion of Kms to Miles\n");
        printf("Enter 2 to do conversion of Inches to Foot\n");
        printf("Enter 3 to do conversion of Cms to Inches\n");
        printf("Enter 4 to do conversion of Pound to Kgs\n");
        printf("Enter 5 to do conversion of Inches to Meters\n");
        printf("Enter 0 to exit\n");
        scanf("%d", &op);
        if (op == 0)
            break;
        switch (op)
        {
        case 1:
            printf("value in Kms: ");
            scanf("%f", &num);
            printf("Value in Miles: %.2f\n\n", (num / 1.609344));
            break;

        case 2:
            printf("value in Inches: ");
            scanf("%f", &num);
            printf("Value in Foot: %.2f\n\n", (num / 12));
            break;

        case 3:
            printf("value in Cms: ");
            scanf("%f", &num);
            printf("Value in Inches: %.2f\n\n", (num / 2.54));
            break;

        case 4:
            printf("value in Pound: ");
            scanf("%f", &num);
            printf("Value in Kgs: %.2f\n\n", (num / 2.205));
            break;

        case 5:
            printf("value in Inches: ");
            scanf("%f", &num);
            printf("Value in Meters: %.2f\n\n", (num / 39.37));
            break;

        default:
            printf("Invalid conversion!!\n\n");
            break;
        }
    }
    return 0;
}


// By Functions
// #include <stdio.h>
// void conversions(int* b)
// {
//         printf("LET'S DO SOME CONVERSIONS!\n");
//         printf("Enter 1 to do conversion of Kms to Miles\n");
//         printf("Enter 2 to do conversion of Inches to Foot\n");
//         printf("Enter 3 to do conversion of Cms to Inches\n");
//         printf("Enter 4 to do conversion of Pound to Kgs\n");
//         printf("Enter 5 to do conversion of Inches to Meters\n");
//         printf("Enter 6 to do conversion of Celsius to fahrenheit\n");
//         printf("Enter 0 to exit\n");
//         scanf("%d", &*b);
// }
// int calc(int a)
// {
//         float num;
//         switch (a)
//         {
//         case 1:
//             printf("value in Kms: ");
//             scanf("%f", &num);
//             printf("Value in Miles: %.2f\n\n", (num / 1.609344));
//             break;

//         case 2:
//             printf("value in Inches: ");
//             scanf("%f", &num);
//             printf("Value in Foot: %.2f\n\n", (num / 12));
//             break;

//         case 3:
//             printf("value in Cms: ");
//             scanf("%f", &num);
//             printf("Value in Inches: %.2f\n\n", (num / 2.54));
//             break;

//         case 4:
//             printf("value in Pound: ");
//             scanf("%f", &num);
//             printf("Value in Kgs: %.2f\n\n", (num / 2.205));
//             break;

//         case 5:
//             printf("value in Inches: ");
//             scanf("%f", &num);
//             printf("Value in Meters: %.2f\n\n", (num / 39.37));
//             break;
        
//         case 6:
//             printf("value in Celsius: ");
//             scanf("%f", &num);
//             printf("Value in Fahrenheit: %.2f\n\n", ((num*((float)9/5))+32));
//             break;

//         default:
//             printf("Invalid conversion!!\n\n");
//             break;
//         }
// }
// int main()
// {
//     while (1)
//     {
//         int op;
//         conversions(&op);
//         // scanf("%d", &op);
//         if (op == 0)
//             break;
//         calc(op);
//     }
//     return 0;
// }