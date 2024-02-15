#include <stdio.h>

int main()
{
    int A[5]; //Declaration
    int B[5] = {1,2,3,4,5}; // Declaration and Initialization
    int C[10] = {2,4,6};
    int D[5] = {0};
    int E[] = {1,2,3,4,5,6};

    for (int i = 0; i < (int)(sizeof(B)/sizeof(int)); i++)
    {
        printf("Valor da posição %d é: %d e a posicao de memória é: %u\n", i, B[i], &B[i]);
    }
    
    return 0;
}
