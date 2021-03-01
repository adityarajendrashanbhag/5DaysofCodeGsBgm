/*Left Rotation*/

#include<stdio.h>
#include<unistd.h>
#include<math.h>

int main()
{
    int n,d,a[10],i;

    printf("");
    scanf("%d%d", &n, &d);

    printf("");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);


    for(i=0;i<n;i++)
    {
        printf("%d ",(a[(n-(n-d)%n+i)%n]));

    }
return 0;
}


