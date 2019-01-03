#include<stdio.h>
int decimal(int);
int binary(int);
int main()
{
int num;

printf("\n enter the number in decimal \t");
scanf("%d",&num);

decimal(num);
binary(num)

}
int decimal(int num)
{
int rem,base=1,newnum=0;
while(num>0)
      {
        rem=num%2;

        newnum=newnum+rem*base;
        num=num/2;
        base=base*10;

      }
      printf("\n the num after converting is %d",newnum);


}
int binary(int num)
{


}
