#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initialization
int arr[10]={25,69,54,8,77,6,29,10,3,98};
    //traversal
int i;
for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    //print specific element
printf("\n%d",arr[0]);
    //find the minimum
int a,min;
min=arr[0];
for(a=0;a<10;a++)
{
    if(arr[a]<=min)
        min=arr[a];
}
printf("\nThe minimum is:%d\n",min);
    //marked painting
int x;
for(x=0;x<10;x++)
{
    if (arr[x]!=min)
        printf("%d ",arr[x]);
    else
        printf("%d[min] ",arr[x]);
}
    return 0;
}
