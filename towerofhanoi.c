/* the classical question of data structures and algorithms*/
#include<stdio.h>
void toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("Move disc 1 from %c to %c\n",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("Move disc %d from %c to %c\n",n,from,to);
    toh(n-1,aux,to,from);
}
int main()
{
    int num;
    printf("Enter the number of discs\n");
    scanf("%d",&num);
    toh(num,'A','C','B');
    /* A is the initial rod where discs are placed
       B is the extra rod to help in putting discs from A to C
       C is the final rod where discs are to be arranged */
    return 0;
}