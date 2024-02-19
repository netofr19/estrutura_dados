#include <stdio.h>

int main()
{
    unsigned int x[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, (10,11,12)};

    printf("%u\n", x);
    printf("%u\n", x+3);
    printf("%u\n", *(x+3));
    printf("%u\n", *(x+2)+3);
    return 0;
}
