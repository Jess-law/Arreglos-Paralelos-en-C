#include <stdio.h>
#include <stdlib.h>

#define FILAS 20
#define COL 30
int cargaArreglos(int f, int leg[], char nom[][30], int an[]);
void muestraArreglos(int v, int leg[], char nom[][30], int an[]);
int busquedaPorLegajo (int v, int leg[], int busqueda);
void RecibeTodosLosArreglosEImprime (int v, int leg[], int busqueda, char nombre[][COL], int anio[]);


int main()
{
    int legajos[FILAS];
    char nombres[FILAS][COL];
    int anios[FILAS];
    int validos = 0;
    int busqueda = 0;
    validos = cargaArreglos(FILAS, legajos, nombres, anios);
    muestraArreglos(validos, legajos, nombres, anios);
    busquedaPorLegajo(validos, legajos, busqueda);
    RecibeTodosLosArreglosEImprime(validos, legajos, busqueda, nombres, anios);

    return 0;
}
///Crear una función que los cargue, hasta que el usuario lo decida.
int cargaArreglos(int f, int leg[], char nom[][30], int an[])
{
    char opcion = 0;
    int i = 0;

    while(i<f && opcion != 27)
    {
        printf("Ingrese un legajo: \n");
        scanf("%d", &leg[i]);

        printf("Ingrese un nombre: \n");
        fflush(stdin);
        gets(nom[i]);

        printf("Ingrese la edad: \n");
        scanf("%d", &an[i]);

        i++;
        printf("<ESC> para salir o cualquier tecla para cargar otra persona---\n");
        opcion = getch();


    }

    return i;


}
///muestra Arreglos
void muestraArreglos(int v, int leg[], char nom[][30], int an[])
{

    int i = 0;

    while(i<v)
    {
        puts("\n======================");
        printf("\nLegajo: %d \n", leg[i]);
        printf("\nNombre: %s\n", nom[i]);
        printf("\nAnio: %d\n", an[i]);
        puts("\n======================");
        i++;
    }

}
///Crear una función que busque dentro del
/// arreglo de legajos y retorne la posición de un determinado valor.

int busquedaPorLegajo (int v, int leg[], int busqueda)
{
    int i = 0;

    printf("Ingrese un legajo a buscar: \n");
    scanf("%d", &busqueda);

    while(i<v)
    {
        if(busqueda == leg[i])
        {
            return i;
        }
        i++;
    }
    printf("El dato no fue hallado\n");


    return 0;
}

///Hacer una función que reciba como parámetro todos los arreglos
///y encuentre el nombre correspondiente a un determinado legajo y lo imprima por pantalla.
///Se debe invocar la función 2.

void RecibeTodosLosArreglosEImprime (int v, int leg[], int busqueda, char nombre[][COL], int anio[])
{
    printf("Nombre correspondiente al legajo %s\n", nombre[busquedaPorLegajo(v, leg, busqueda)]);

}

///Mostrar por pantalla los 3 arreglos pero de a un “registro”
///o alumno por vez (es decir: muestra el legajo, nombre y años del 1er alumno,
///luego el legajo, nombre y años del 2do alumno, y así sucesivamente)..
void MuestraTresArreglos(int v, int leg[], int busqueda, char nombre[][COL], int anio[])
{
    while(i<v)
    {
       muestraArreglos;
        i++;
    }
}
