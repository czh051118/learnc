#include <stdio.h>
int main(){
    printf("\ti\ti*i\ti*i*i\n");
    printf("---------------------");
    for (int i = 1; i <= 4;i++){
        printf("\t%d\t%d\t%d", i, i * i, i * i * i);
    }
    return 0;
}
