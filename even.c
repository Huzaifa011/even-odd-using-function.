#include<stdio.h>
#include<conio.h>
void even(int n)
{ 

    if(n%2==0)
    {
        printf("%d is an even no. ",n);
    }
    else
    {
        printf("%d is a odd no.",n);

    }
    
}
int main()
{  int n;
    printf("enter a num");
    scanf("%d",&n);
   even();
    //int ans=even();
    //printf("%d",ans);//
    return 0;
    getch();
    
}
