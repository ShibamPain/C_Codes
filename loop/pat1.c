// ****
// ****
// ****
// ****

#include <stdio.h>
int main()
{
 int n;
    printf("Enter the number of line :");
    scanf("%d", &n);
        
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}