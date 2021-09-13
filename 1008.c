#include <stdio.h>

int main(){
    int id,horas;
    float perhora, salario;
    scanf("%d%d%f",&id,&horas,&perhora);
    salario = horas * perhora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",id,salario);
}
