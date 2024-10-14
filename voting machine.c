#include <stdio.h>

int main()
{
    int n,age,i,v,a,b,c;
    
    printf("enter number of voters:");
    scanf("%d",&n);
    
    i=1;
    
    while (i<=n)
    {
        i++;
        printf("enter your age:");
        scanf("%d",&age);
        
        
        if (age>18) 
        {
            printf("enter whom you want to vote:\n1.aby\n2.mani\n3.sibi\n");
            scanf("%d",&v);
            
            switch(v)
            {
                case 1:
                    a++;
                    break;
                    
                    
                case 2:
                    b++;
                    break;
                    
                case 3:
                    c++;
                    break;
                
                default;
                    break;
                
            }
            
        }
        else
        {
            printf("youre not eligible\n");
        }
    }
     printf("vote for aby-%d \nvote for mani-%d \nvote for sibi-%d",a,b,c);

    return 0;
}
