#include<stdio.h>

long long fibonacci(long long num){//queremos calcular numeros grandes grandes
if (num==0){return 0;}//caso base
else if(num==1){return 1;}//caso base2
else return(fibonacci(num-1)+fibonacci(num-2));//operacion recursiva

}

int main(){
int num;
printf("ingrese el numero de secuencia fibonacci: ");
scanf("%i",&num);
for(int i=0;i<num;i++){
printf("(%i )%lld \n",i,fibonacci(i));
}

}
/*Nota: a partir del numero de secuencia 50, la demora se torna mayor a 30segundos
para compilar:
 gcc fibonacciRecursivo.c -o fibonacciRecursivo
para ejecutar:
./fibonacciRecursivo

*/
