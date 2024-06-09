#include <stdio.h>
static int a = 0;

void incrementa(void){
    int b = 0;
    static int c = 0;
    printf("a: %d, b: %d, c: %d\n",a,b,c);
    a++;
    b++;
    c++;
}

int main(void) {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    printf("%c\n", vogais[4]);
    int arr_length = sizeof(arr) / sizeof(arr[0]) - 1;
    printf("%d \n", arr_length);
    for (int (i) = 0; (i) < 5 ; ++(i)) {
        incrementa();
    }

    int arraytst[] = {1,2,3,4,5};
    arraytst[0] = 3;
    printf("%d\n",arraytst[0]);

    int valor = 10;
    int **ptr2;
    int *ptr = &valor;
    ptr2 = &ptr;
    **ptr2 = 30;
    *ptr = 20;
    printf("valor ponteiro: %d, valor da variavel original: %d, copia ponteiro: %d", *ptr, valor,**ptr2);
}
