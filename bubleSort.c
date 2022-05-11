#include<stdio.h>
/*Se busca emplear el algoritmo BubleSort de forma tal que el arreglo original no se vea modificado.


Esta funcion recibe dos arreglos de enteros, el primer arreglo es el arreglo original a ordenar, el segundo es el arreglo donde se va guardar esa modificacion/ordenamiento/sort .
el tercer parametro es el tamaño de los arreglos
retorna un puntero al segundo arreglo donde se guardo la modificacion
 */
int *bubleSort(int arrToSort[],int arrSave[],int size){
    int comparar;
    //Se puede precindir de arrSave[] si usamos una variable statica int static var[], y retornamos eso mismo, pero tendriamos problemas para asignarle el valor de size, podriamos probar con malloc pero ya se complica mucho el enucnciado
    for(int h=0;h<size;h++){
        arrSave[h]=arrToSort[h];
    }  
    for(int j=1;j<size;j++){
        for(int i=1;i<size;i++){
        if(arrSave[i-1]>arrSave[i]){
            comparar=arrSave[i-1];
            arrSave[i-1]=arrSave[i];
            arrSave[i]=comparar;      
        }}     
    }
 return arrSave;   
}
int main(){    
    int arrOriginal[9]={78,34,73,7,123,98,703,92,761};//arreglo a ordenar buble sort
    int arr2[9];//arreglo auxiliar para guardar el buble sort sin modificar el primero   
    int *arre;// definimos arre, es un puntero a datos de tipo INT
   arre=bubleSort(arrOriginal,arr2,9);//arre ahora apunta al arreglo que retorna la funcion
    for(int i=0;i<9;i++){
   printf("\"arr ordenado %i\"\t \"arr original %i\"\n",arre[i],arrOriginal[i]);//imprumimos por pantalla el resultado y el arreglo originam
    }
}
