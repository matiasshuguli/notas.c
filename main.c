#include <stdio.h>

int main (int argc, char *argv[]) {
    float notas[5] = {6.5,7.1,8,6,5};
    for (int i = 0; i < 5; i++)
    {
        printf("notas[%d] %.1f\n",i, notas[i]);
    }
    
    return 0;
}