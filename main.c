#include <stdio.h>
#include <stdlib.h>

void mostrarArreglo (int arreglo[], int elementosValidos); ///1
void inicializarArreglo(int arreglo[], int dimension); ///1a
int ingresarElementos(int arreglo[], int validos); ///1b
int sumaElementos(int arreglo[], int validos); /// 1c
int cantidadElementos(int arreglo[], int validos); /// 1d
float promedioElementos(int arreglo[], int validos); /// 1e
char ingresarChar(char arregloC[], int validosC); /// 2a
void arregloInvertido (char arregloC[], int validosC); /// 2b
void mostrarArregloC (char arregloC[], int validosC); /// 2c
int numeroDecimal(int arregloDecimal[], int validos); /// 3
int elementoMayor(int arreglo[],int validos); /// 4
int cargaMatrizRandom(int matriz[12][31]); /// 5a
void mostrarMatriz(int matriz[12][31]); ///5a
int maximaPre(int matriz [][31], int mes); ///5b
void cargaArregloMaximas(int matriz[][31], int maximas[12]); ///5c
void muestraMaxMeses(int maximas[12]); ///5c
int cargaArregloChar(char arreglo[],int dim); ///6
int comprobacionPalindromo(char pali[30]); ///6
void intercambioValores(int* uno, int* dos); ///7
int cargaRandom(int arregloR[], int dim); ///8
int posicionMenorInt(int arregloR[], int validos, int inicial); ///8
void intercambiarValores(int arregloR[],int menor, int actual); ///8
void ordenarArregloSeleccion(int arregloR[], int validos); ///8
int intercalarArreglos (int arregloR1[], int arrelgoR2[], int arregloDe[], int valUno, int valDos); ///8
int cargaArregloParalelos(char apellidos[][30], int edad[], int validos); ///9
void mostrarArregloDatos(char apellidos[][30], int edad[], int validos); ///9
int buscaMayorEdadP(int edad[], char apellido[][30], int validos); ///9
int obtenerValorMaximo(int arreglo[], int validos);
int obtenerValorMinimo(int arreglo[], int validos);
int sumarValores(int arreglo[], int validos);
float obtenerPromedio(int arreglo[], int validos);
void obtenerValores(int arreglo[], int validos, int* valorMaximo, int* valorMinimo, float* promedio);
void mostrarResultados(int arreglo[], int validos, int valorMaximo, int valorMinimo, float promedio);


int main(){
    printf("\n --------------------------------\n");
    printf("  EJERCICIO 1");
    printf("\n --------------------------------\n");
    int dim = 5;
    int arregloPositivos[dim];
    inicializarArreglo(arregloPositivos, dim);
    mostrarArreglo(arregloPositivos, dim);
    ingresarElementos(arregloPositivos, dim);
    mostrarArreglo(arregloPositivos, dim);
    printf(" LA SUMA DE LOS ELEMENTOS DEL ARREGLO DA %i\n\n", sumaElementos(arregloPositivos, dim));
    printf(" LA CANTIDAD DE LOS ELEMENTOS DEL ARREGLO DA %i\n\n", cantidadElementos(arregloPositivos, dim));
    printf(" EL PROMEDIO DE LOS ELEMENTOS DA %.2f\n\n", promedioElementos(arregloPositivos, dim));

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 2");
    printf("\n --------------------------------\n");
    int dimC = 5;
    char arregloChar[dimC];
    ingresarChar(arregloChar, dimC);
    mostrarArregloC(arregloChar, dimC);
    arregloInvertido(arregloChar, dimC);
    mostrarArregloC(arregloChar, dimC);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 3");
    printf("\n --------------------------------\n");
    int arreglo3[4] = {30,11,8,9};
    mostrarArreglo(arreglo3, 4);
    numeroDecimal(arreglo3,4);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 4");
    printf("\n --------------------------------\n");
    elementoMayor(arreglo3,4);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 5");
    printf("\n --------------------------------\n");
    int f=12;
    int c=31;
    int arregloMaximas[12];
    int matrizPre[f][c];
    cargaMatrizRandom(matrizPre);
    mostrarMatriz(matrizPre);
    int mes=0;
    printf(" INGRESE EL MES: ");
    fflush(stdin);
    scanf("%i", &mes);
    int resultado = maximaPre(matrizPre,mes-1);
    printf("\n EN EL MES %i, EL DIA QUE MAS LLOVIO FUE EL %i\n",mes,resultado);
    cargaArregloMaximas(matrizPre, arregloMaximas);
    muestraMaxMeses(arregloMaximas);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 6");
    printf("\n --------------------------------\n");
    //int dim=30;
//    char arregloChar[dim];
    int validosChar = cargaArregloChar(arregloChar,dim);
    mostrarArregloC(arregloChar,validosChar);
//    int resultado;
    resultado = comprobacionPalindromo(arregloChar);
    if(resultado==1){
        printf(" LA PALABRA %s ES PALINDROMA\n", arregloChar);
    }else{
        printf(" LA PALABRA %s NO ES PALINDROMA\n", arregloChar);
    }

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 7");
    printf("\n --------------------------------\n");
    int variableUno;
    int variableDos;
    int varUno=&variableUno;
    int varDos=&variableDos;
    printf(" INGRESE EL VALOR DE LA PRIMERA VARIABLE: ");
    fflush(stdin);
    scanf("%i", &variableUno);
    printf(" INGRESE EL VALOR DE LA SEGUNDA VARIABLE: ");
    fflush(stdin);
    scanf("%i", &variableDos);
    printf("\n EL VALOR DE LA VARIABLE UNO ES %i\n EL VALOR DE LA VARIABLE DOS ES %i\n", variableUno, variableDos);
    intercambioValores(varUno, varDos);
    printf("\n EL VALOR DE LA VARIABLE UNO ES %i\n EL VALOR DE LA VARIABLE DOS ES %i\n", variableUno, variableDos);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 8");
    printf("\n --------------------------------\n");
//    int dim=50;
    int arregloUno[dim];
    int arregloDos[dim];
    int arregloOrdenado[dim];
    int validosUno = cargaRandom(arregloUno,dim);
    int validosDos = cargaRandom(arregloDos,dim);
    printf("\n ARREGLO UNO\n");
    mostrarArreglo(arregloUno,validosUno);
    printf("\n ARREGLO DOS\n");
    mostrarArreglo(arregloDos,validosDos);
    ordenarArregloSeleccion(arregloUno, validosUno);    ordenarArregloSeleccion(arregloDos, validosDos);
    printf(" --------------------------------------- ");
    printf("\n ARREGLO UNO ORDENADO\n");
    mostrarArreglo(arregloUno,validosUno);
    printf("\n ARREGLO DOS ORDENADO\n");
    mostrarArreglo(arregloDos,validosDos);
    printf(" --------------------------------------- ");
    int validosOrdenados = validosUno+validosDos;
    intercalarArreglos(arregloUno,arregloDos,arregloOrdenado,validosUno,validosDos);
    printf("\n ARREGLO FINAL ORDENADO\n");
    mostrarArreglo(arregloOrdenado,validosOrdenados);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 9");
    printf("\n --------------------------------\n");
//    int dim=30;
    char apellidos[30][30];
    int edades[30];
    int validosDatos = cargaArregloParalelos(apellidos, edades, dim);
    printf(" APELLIDOS Y EDADES \n\n");
    mostrarArregloDatos(apellidos,edades,validosDatos);
    int resultadoDatos=buscaMayorEdadP(edades,apellidos,validosDatos);
    printf(" LA PERSONA DE MAYOR EDAD ES %s CON %i AÑOS", apellidos[resultadoDatos], edades[resultadoDatos]);

    printf("\n --------------------------------\n");
    printf("  EJERCICIO 10");
    printf("\n --------------------------------\n");
//    int dim=30;
    int arreglo10[dim];
    int validos = cargaRandom(arreglo10,dim);
    int valorMaximo;
    int valorMinimo;
    float promedio;
    obtenerValores(arreglo10, validos, &valorMaximo, &valorMinimo, &promedio);
    mostrarResultados(arreglo10, validos, valorMaximo, valorMinimo, promedio);
}

void mostrarArreglo (int arreglo[], int elementosValidos){
    for (int i = 0 ; i < elementosValidos ; i++)
    {
        printf(" | %i |", arreglo[i]);
    }
    printf("\n\n");
}

/// 1a. Hacer una función que inicialice las celdas del arreglo en –1.
void inicializarArreglo(int arreglo[], int dimension){
    for(int i=0; i<dimension; i++){
        arreglo[i]=-1;
    }
}

/// 1b. Hacer una función que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.
int ingresarElementos(int arreglo[], int validos){
    char opt;
    int elemento=0;
    do
    {
        printf(" INGRESE UN ELEMENTO: ");
        scanf("%d",&arreglo[elemento]);
        elemento++;

        printf("\n DESEA CARGAR UN NUEVO ELEMENTO? Y/N: ");
        fflush(stdin);
        scanf("%c", &opt);
        printf("\n");
    }
    while(elemento<validos && (opt=='Y'||opt=='y'));
    return elemento;
}

/// 1c. Hacer una función que sume el contenido del arreglo y lo retorne.
int sumaElementos(int arreglo[], int validos){
    int suma=0;
    for(int i=0; i<validos; i++){
        suma=suma+arreglo[i];
    }
    return suma;
}

/// 1d. Hacer una función que cuente la cantidad de valores ingresados.
int cantidadElementos(int arreglo[], int validos){
    int cant=0;
    for(int i=0; i<validos; i++)
        cant++;
    return cant;
}

/// 1e. Hacer una función que reciba como parámetro el arreglo ya cargado, calcule y retorne el valor promedio
/// usando las funciones anteriores (c y d).
float promedioElementos(int arreglo[], int validos){
    float promedio=0;
    mostrarArreglo(arreglo,validos);
    int suma = sumaElementos(arreglo,validos);
    int cant = cantidadElementos(arreglo,validos);
    promedio = suma/cant;
    return promedio;
}

/// 2a Hacer una función para la carga del arreglo.
char ingresarChar(char arregloC[], int validosC){
    char opt;
    int elemento=0;
    do
    {
        printf(" INGRESE UN ELEMENTO: ");
        fflush(stdin);
        scanf("%c",&arregloC[elemento]);
        elemento++;

        printf("\n DESEA CARGAR UN NUEVO ELEMENTO? Y/N: ");
        fflush(stdin);
        scanf("%c", &opt);
        printf("\n");
    }
    while(elemento<validosC && (opt=='Y'||opt=='y'));
    return elemento;
}

/// 2b Hacer una función para invertir el arreglo.
void arregloInvertido (char arregloC[], int validosC){
    int j=validosC-1;
    int aux=0;
    for(int i=0;i<j;i++){
        aux=arregloC[i];
        arregloC[i]=arregloC[j];
        arregloC[j]=aux;
        j--;
    }
}

/// 2c Hacer una función para mostrar el contenido del arreglo.
void mostrarArregloC (char arregloC[], int validosC){
    printf(" ELEMENTOS DEL ARREGLO: ");
    for (int i = 0 ; i < validosC ; i++)
    {
        printf("| %c |", arregloC[i]);
    }
    printf("\n\n");
}

/// 3 Hacer una función que reciba como parámetro un arreglo de números enteros de un dígito y retorne el valor decimal
/// de dicho número. Por ejemplo, un arreglo que tiene cargados los valores 3, 2, 8 y 9, la fn retorna el valor 3289.
int numeroDecimal(int arregloDecimal[], int validos){
    int acc=0;
    int base;
    int digito=1;
    int number;
    for(int i=validos-1;i>=0;i--){
        base=arregloDecimal[i];
        number=base*digito;
        acc+=number;
        digito*=10;
    }
    printf("\n EL NUMERO FORMADO POR LOS ELEMENTOS DEL ARREGLO ES: %i\n\n", acc);
    return acc;
}

/// 4 Hacer una función que retorne la posición del valor máximo de un arreglo de números enteros.
int elementoMayor(int arreglo[],int validos){
    int mayorElemento = arreglo[0];
    for(int i=1; i<validos;i++){
        if(arreglo[i]>mayorElemento){
            mayorElemento=arreglo[i];
        }
    }
    printf("\n EL MAYOR ELEMENTO ES: %i\n\n", mayorElemento);
    return mayorElemento;
}

/// 5 a.Hacer una función para cargar la matriz de forma automática.
int cargaMatrizRandom(int matriz[][31]){
    srand(time(NULL));
    for(int i=0;i<12;i++){
        for(int j=0;j<31;j++){
            matriz[i][j]=rand()%51;
        }
    }
}

void mostrarMatriz(int matriz[][31]){
    int month=1;
    int day=0;
    printf(" ----------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("   |DIAS |-->");
    for(day;day<31;day++){
        printf(" %.2i ", day+1);
    }
    printf("\n ----------------------------------------------------------------------------------------------------------------------------------------");
    for(int i=0;i<12;i++){
        printf("\n |MES %.2i |-->",month);
        month++;
        for(int j=0;j<31;j++){
            printf(" %.2i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

/// 5 b.Hacer una función que retorne el día de máxima precipitación para un mes determinado.
int maximaPre(int matriz [][31], int mes){
    int dia =0;
    int j =0;
    int maxima=0;
    int i = mes;
    maxima=matriz[i][j];

    for(int j=1; j<31; j++){
        if(matriz[i][j]>maxima){
            maxima=matriz[i][j];
            dia=j;
        }
    }
    return dia+1;
}

/// 5 c.Hacer una función que cargue en un arreglo de 12 posiciones el resultado de aplicar la fn anterior a cada
/// mes de año.

void cargaArregloMaximas(int matriz[][31], int maximas[12]){
    for(int i=0;i<12;i++){
        maximas[i]=maximaPre(matriz,i);
    }
}

void muestraMaxMeses(int maximas[12]){
    printf("\n--------------------------------\n");
    printf(" MESES CON DIAS DE MAXIMA LLUVIA");
    printf("\n--------------------------------\n");
    for(int i=0; i<12; i++){
        printf(" MES %.2i, PRECIPITACION MAXIMA EN EL DIA %.2i\n", i+1, maximas[i]);
    }

}

/// 6 Dada una cadena de caracteres, hacer una función que determine si dicha cadena es palíndromo (se lee de igual forma
/// de adelante para atrás como viceversa) o no. La función recibe como parámetro la cadena y retorna 1 o 0 según sea la
/// respuesta.

int cargaArregloChar(char arreglo[],int dim){
    int validos=0;
    printf(" INGRESE LA PALABRA: ");
    fflush(stdin);
    gets(arreglo);
    printf("\n");
    validos = strlen(arreglo);
    return validos;
}

int comprobacionPalindromo(char pali[30]){
    int flag=-1;
    int i=0;
    int j=0;
    j=(strlen(pali))-1;
    while(flag==0){
        if(i==j || i>j){
            flag=1;
        }else if(pali[i]==pali[j]){
            j--;
            i++;
        }else{
            flag=0;
        }
    }
    return flag;
}


/// 7. Hacer una función que intercambie el contenido de dos variables. (pasaje de parámetros por referencia)
void intercambioValores(int* uno, int* dos){
    int aux=0;
    aux=*uno;
    *uno=*dos;
    *dos=aux;
}

/// 8. Dados dos arreglos de números enteros ordenados de menor a mayor, hacer una función que los reciba como
/// parámetros y retorne un tercer arreglo que contenga los datos de los arreglos anteriores, también ordenados. Se los
/// debe intercalar.

int cargaRandom(int arregloR[], int dim){
    int numeros=0;
    srand(time(NULL));
    printf(" INGRESE LA CANTIDAD NUMEROS QUE DESEA AGREGAR: ");
    fflush(stdin);
    scanf("%i", &numeros);
    for(int i=0; i<numeros; i++){
        arregloR[i]=rand()%51;
    }
    return numeros;
}

int posicionMenorInt(int arregloR[], int validos, int inicial){
    int aux=arregloR[inicial];
    int menor=inicial;
    for(int i=inicial;i<validos;i++){
        if(arregloR[i]<aux){
            aux=arregloR[i];
            menor=i;
        }
    }
    return menor;
}

void intercambiarValores(int arregloR[],int menor, int actual){
    int aux;
    aux=arregloR[menor];
    arregloR[menor]=arregloR[actual];
    arregloR[actual]=aux;
}

void ordenarArregloSeleccion(int arregloR[], int validos){
    int posicionMenor=0;
    for(int i=0;i<validos-1;i++){
        posicionMenor=posicionMenorInt(arregloR,validos,i);
        intercambiarValores(arregloR,posicionMenor,i);
    }
}

int intercalarArreglos (int arregloR1[], int arrelgoR2[], int arregloDe[], int valUno, int valDos){
    int i=0;
    int j=0;
    int z=0;
    int validosDe=valUno+valDos;

    while(z<validosDe){
        if((i<valUno)&&(j<valUno)){
            if(arregloR1[i]<arrelgoR2[j]){
                arregloDe[z]=arregloR1[i];
                i++;
            }else{
                arregloDe[z]=arrelgoR2[j];
                j++;
            }
        }else if(i<valUno){
            arregloDe[z]=arregloR1[i];
            i++;
        }else{
            arregloDe[z]=arrelgoR2[j];
            j++;
        }
        z++;
    }
    arregloDe[z+1]='\0';
}

/// 9 Dados dos arreglos paralelos, uno con apellidos y otro con edades. Se debe hacer un programa para encontrar el
/// apellido de la persona de mayor edad. Se debe modularizar.

int cargaArregloParalelos(char apellidos[][30], int edad[], int validos){
    int i=0;
    char opt=0;
    do{
        printf("\n INGRESE EL APELLIDO: ");
        fflush(stdin);
        scanf("%s", &apellidos[i]);
        printf("\n INGRESE LA EDAD: ");
        fflush(stdin);
        scanf("%i", &edad[i]);
        i++;

        printf("\n DESEA SEGUIR CARGANDO DATOS?");
        fflush(stdin);
        scanf("%c", &opt);
    }
    while(opt=='s' || opt=='S' && i<validos);
    return i;
}

void mostrarArregloDatos(char apellidos[][30], int edad[], int validos){
    for(int i=0;i<validos;i++){
        printf(" REGISTRO %i: APELLIDO: %s. EDAD: %i\n",i+1,apellidos[i],edad[i]);
    }
}

int buscaMayorEdadP(int edad[], char apellido[][30], int validos){
    int mayor=0;
    int posicion=0;
    mayor=edad[0];
    for(int i=0;i<validos;i++){
        if(edad[i]>mayor){
            mayor=edad[i];
            posicion=i;
        }
    }
    return posicion;
}

/// 10. Hacer una función que reciba como parámetros de entrada un arreglo de enteros y su dimensión, y tres parámetros
/// de salida, tres números enteros que representen: valor máximo, valor mínimo y promedio. Se debe usar pasaje de
/// parámetros por referencia.

int obtenerValorMaximo(int arreglo[], int validos){
    int valorMayor = arreglo[0];
    for (int i = 1; i < validos; i++){
        if (arreglo[i] > valorMayor){
            valorMayor = arreglo[i];
        }
    }
    return valorMayor;
}

int obtenerValorMinimo(int arreglo[], int validos){
    int valorMinimo = arreglo[0];
    for (int i = 1; i < validos; i++){
        if (arreglo[i] < valorMinimo){
            valorMinimo = arreglo[i];
        }
    }
    return valorMinimo;
}

int sumarValores(int arreglo[], int validos){
    int suma = 0;
    for (int i = 0; i < validos; i++){
        suma+=arreglo[i];
    }
    return suma;
}

float obtenerPromedio(int arreglo[], int validos){
    return (sumarValores(arreglo, validos) / (float)validos);
}

void obtenerValores(int arreglo[], int validos, int* valorMaximo, int* valorMinimo, float* promedio){
    *valorMaximo = obtenerValorMaximo(arreglo, validos);
    *valorMinimo = obtenerValorMinimo(arreglo, validos);
    *promedio = obtenerPromedio(arreglo, validos);
}

void mostrarResultados(int arreglo[], int validos, int valorMaximo, int valorMinimo, float promedio){
    printf("Informacion del arreglo: \n");
    for (int i = 0; i < validos; i++){
        printf("%i - ", arreglo[i]);
    }
    printf("\n\nEl valor maximo es %i \n", valorMaximo);
    printf("El valor minimo es %i \n", valorMinimo);
    printf("El promedio es %.2f \n", promedio);
}

