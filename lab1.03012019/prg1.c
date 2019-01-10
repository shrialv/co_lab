//shripad alvi
#include<stdio.h>
#include<math.h>
void decimal_binary(int);
void binary_decimal(int);
void main()
{
    int number, choice;
    do
    {
        printf("\n\nChoose one of the follwing conversions: ");
        printf("\n1. Decimal to Binary");
        printf("\n2. Binary to Decimal");
        printf("\n3. Exit");
        printf("\n\nEnter your choice(1-3): ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("\nEnter a decimal number: ");
                    scanf("%d", &number);
                    decimal_binary(number);
                    break;
            case 2: printf("\nEnter a binary number: ");
                    scanf("%d", &number);
                    binary_decimal(number);
                    break;
            case 3: exit(0);
            default: printf("\nINVALID ENTRY!!!");
        }
    }while(choice);
}
void decimal_binary(int num)
{
    int a[20], i, j;
    for(i=0; num>0; i++, num=num/2)
        a[i]=num%2;
    printf("\n after converting in binary is ");
    for(j=i-1; j>=0; j--)
        printf("%d ", a[j]);
}
void binary_decimal(int num)
{
    int no=0, i=0;
    while(num)
    {
        no+=(num%10)*pow(2, i);
        num=num/10;
        i++;
    }
    printf("\nafter converting in decimal  is %d", no);
}
