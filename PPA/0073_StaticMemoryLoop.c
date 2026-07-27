#include<stdio.h>

int main()
{
    // Static memory allocation
    float Marks[5];        // 20 bytes

    int i = 0;          // Loop Counter

    printf("Enter your marks : \n");

    // Iteration
    //    1      2     3    
    for(i = 0; i < 5; i++)
    {
        scanf("%f",&Marks[i]);      // 4
    }

    printf("Entered marks are : \n");
    
    //    1      2     3    
    for(i = 0; i < 5; i++)
    {
        printf("%f\n",Marks[i]);      // 4
    }
    
    return 0;
}