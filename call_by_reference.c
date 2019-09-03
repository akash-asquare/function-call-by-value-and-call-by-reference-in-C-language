#include <stdio.h>
void incr(int *x,int *y)
{
    *x+=1;
    *y+=1;
    printf("\nIncreamented value in function x=%d & y=%d",*x,*y);
}

int main()
{
    int x = 15, y = 10;
    printf("\nValue before function call x=%d & y=%d",x,y);
    incr(&x,&y);
    printf("\nValue after function call x=%d & y=%d",x,y);
    return 0;
}
