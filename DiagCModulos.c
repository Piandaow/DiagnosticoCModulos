#include<stdio.h>
//Así quedó al final
int i=0, j=0, ii=0, jj=0, a=0, b=0, aa=0, bb=0, v=0;/*Siempre inicializar las variables*/
int s=0, t=0, c=0, d=0, q=0, r=0;
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
int ArrAnios () {//Usaré esta funcion para pedir la long de AniosArreglo
    printf("¿Cuantos anios proporcionara? \n");/*"i" Para filas=anios*/
    scanf ("%d", &ii);
    i=ii-1;
    return(i);
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
int ArrPeriodos () {//Usaré esta funcion para pedir la long de PeriodosArreglo
    printf("¿Cuantos periodos contiene cada anio? \n");/*"j" Para columnas=periodos*/
    scanf ("%d", &jj);
    j=jj-1;
    return(j);
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
ProcLectura(a, b, AniosArreglo, PeriodosArreglo)//Estoy usando un procesidimiento por que no se como usar para este caso una funcion
                                                //En otras palabras: no tengo que retornar nada.
int a;
int b;
int AniosArreglo[];
int PeriodosArreglo[];
{
    aa=a+1;
    bb=b+1;
    for (a=0; a<aa; a++) {
        for (b=0; b<bb; b++) {
            printf("Ingrese el valor del Anio %d: \n ", i=a+1);
            printf("Ingrese el valor del Periodo %d: \n ", j=b+1);
            scanf("%d",&v);
            s=s+v;
            PeriodosArreglo[b]=PeriodosArreglo[b]+v;//Guardo en cada indice el valor acomulado del periodo
            }//Cierra Periodos
        AniosArreglo[a]=s;//Guardo en cada indice el valor TOTAL del año cada vez
        s=0;
    }//Cierra Anios
}//cierra procedimiento ProcLectura

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void ImprimeResult(a, b, AniosArreglo, PeriodosArreglo)//Función para imprimir los resultados
int a;
int b;
int AniosArreglo[];
int PeriodosArreglo[];
{
    aa=a+1;
    bb=b+1;
    //i=0;
    printf("------------------------------- \n");
    for (a=0; a<aa; a++){//Imprime por cada año
        printf("La suma del Anio: %d \n", i=a+1);
        d=AniosArreglo[a];
        printf("%d \n", d);
    }
    printf("------------------------------- \n");
    printf("------------------------------- \n");
    for (b=0; b<bb; b++){//Imprime por cada periodo
        printf("La suma del Periodo: %d \n", i=b+1);
        d=PeriodosArreglo[b];
        printf("%d \n", d);
    }
    printf("------------------------------- \n");
    return;//Retorna el control al que lo invoco
}
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
void main ()
{
    a=ArrAnios();
    b=ArrPeriodos();
    int AniosArreglo[a];//Aqui se almacenara la suma de cada año
    int PeriodosArreglo[b];//Aqui se almacenara la suma de cada periodo

    printf("------------------------------- \n");
    for (i=0; i<ii; i++){//Inicia el arreglo en 0's para que no halla basura en memoria
        AniosArreglo[i]=0;
    }
    printf("------------------------------- \n");

    for (j=0; j<jj; j++){//Inicia el arreglo en 0's para que no halla basura en memoria
        PeriodosArreglo[j]=0;
    }


    ProcLectura(a, b, AniosArreglo, PeriodosArreglo, PeriodosArreglo);//Mando a llamar al procedimiento ProcLectura para que lea variables
    ImprimeResult(a, b, AniosArreglo, PeriodosArreglo, PeriodosArreglo);//Mando a llamar a la funcion para que imprima las sumas
    printf("YOLO \n");
}//Din Main
