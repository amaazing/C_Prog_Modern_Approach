#include <stdio.h>
int main(void)
{
    printf("Dimensions: %dx%dx%d\n", 12, 10, 8);
    printf("Volume (cubic inches): %d\n", 12*10*8);
    printf("Dimensional weight (pounds): %d\n", ((12*10*8)+165)/166);

    return 0;
}