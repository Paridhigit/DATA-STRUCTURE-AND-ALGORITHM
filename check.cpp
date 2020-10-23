#include <stdio.h>
int sum(int a[],int size)
{
    int add=0;
    int i;
    for (i = 0; i <size; i++)
    add= add +a[i];
    return add;
}
int main()
{
    int size,i,a[5];
    int add;
    printf("size is");
    scanf("%d",&size);
    printf("enter elements");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
     add=sum(a,size);
     printf("sum of elements=%d \n",add);
     return 0;
     }

