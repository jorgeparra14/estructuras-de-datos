#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct estudiante{
	
	char nombre[40];
	float nota1;
	float nota2;
	float nota3;
	float promedio;
	
}alumno[200];

struct  competidor{
	
	char nombre[40];
	int edad;
	char sexo[15];
	char club[20];
}jugador;


void menu ();
void sumaNumeros();
void sumaPares();
void tablasDeMultiplicar();
void muestraFactorial();
void ArreglosDecimales();
void ArreglosMultiplicacion();
void consultaMesYcodigoAscii();
void asciiDeVocal(char);
void mesSsistema();
void matrizManual();
void matrizAutmatico();
void muestraNotas(estudiante[], int);
void MuestraCompetidor();

int main() {
	
	menu ();
	
	return 0;
}

void menu (){
	
	int opcion;
	int longitud=0;
	char vocal=0;
	
	while (opcion!=12){
		
		printf ("\n\n********** MENU **********\n\n");
		
		
		printf ("1. Sumar los números del 1 a 100.\n");
		printf ("2. Sumar los números pares del 1 al 50.\n");
		printf ("3. Imprimir las tablas de multiplicar de un número, del 1 al 20.\n");
		printf ("4. Solucionar el factorial de un número.\n");
		printf ("5. Declarar un array de numéricos decimales e introducir en él....\n");
		printf ("6. ingresar dos valores, y de acuerdo a los valores ingresado,mostrar en....\n");
		printf ("7. Consultar el mes del sistema e imprimir el mes en español.\n");
		printf ("8. Crear un programa que devuelva el código ascii de una vocal ingresada.\n");
		printf ("9. Crear una matriz de 3x3, completa sus valores desde el teclado y...\n");
		printf ("10. Crear una matriz de 3x3 y llenarla de manera automática por el sistema.\n");
		printf ("11. ingresar el nombre y 3 notas de N alumnos, almacenarlos en un array...,\n");
		printf ("12. hacer un estructura llamada competidor, que tendra los siguentes.....\n\n");
		
		printf ("ingrese el numero segun su opcion: ");
		scanf ("%d",&opcion);
		
		switch (opcion){
			
		case 1: sumaNumeros();
		break;
		case 2: sumaPares();
		break;
		case 3: tablasDeMultiplicar();
		break;
		case 4: muestraFactorial();
		break;
		case 5: ArreglosDecimales();
		break;
		case 6: ArreglosMultiplicacion();
		break;
		case 7: mesSsistema();
		break;
		case 8: asciiDeVocal(vocal);
		break;
		case 9: matrizManual();
		break;
		case 10: matrizAutmatico();
		break;
		case 11: muestraNotas(alumno,longitud);
		break;
		case 12: MuestraCompetidor();
		break;
		default: printf ("opcion no valida.");
		break;
		}
	}
}

void sumaNumeros(){
	
	int acumulador;
	int j;
	j=1;
	acumulador=0;
	
	while (j<101){
		
		acumulador=acumulador+j;
		j++;
	}
	printf ("%d", acumulador);
}

void sumaPares(){
	
	int acumulador;
	int j;
	j=1;
	acumulador=0;
	
	while (j<51){
		
		if (j%2==0){
			acumulador=acumulador+j;
		}
		j++;
	}
	printf ("%d", acumulador);	
}

void tablasDeMultiplicar(){
	
	int num;
	int i;
	int resultado;
	
	resultado=0;
	
   printf("ingrese el numero a hallar tabla de multiplicar: ");
   scanf("%d",&num);
	
	for (i=1; i<21; i++){
		
		resultado = num * i;
		
		printf ("%d * %d = %d \n", num, i, resultado);
	}	
}

void muestraFactorial(){
	
	int i;
	int num;
	int factorial;
	
	printf("ingrese el numero para hallar su factorial: ");
	scanf("%d",&num);
	
	factorial=1;
	
	for (i = 2; i < num+1; i++){
		
		factorial=factorial*i;
		
	}
	
	printf ("%d", factorial);
}

void ArreglosDecimales(){
	
	int i;
	
	float arreglo[4]={32.583, 11.239, 45.781, 22.237};
	
	for (i=0; i<4; i++){
		
		printf("%.3f  ",arreglo[i]);
	}	
}

void ArreglosMultiplicacion(){
	
	int arreglo[2];
	int i;
	int producto;
	
	printf("ingrese dos valores: \n");
	
	for (i=0; i<2; i++){
		
		scanf("%d", &arreglo[i]);
	}
	
	producto=arreglo[0]*arreglo[1];

	printf("%d * %d = %d",arreglo[0],arreglo[1], producto);
}

void mesSsistema(){
	struct tm *tiempo;
	int mes;
	char a[]="enero",  b[]="febrero",  c[]="marzo", d[]="abril", e[]="mayo",  f[]="junio",  g[]="julio",  h[]="agosto",  i[]="septiembre",  j[]="octubre",  k[]="noviembre",  l[]="diciembre";
	
	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	mes=tiempo->tm_mon + 1;
	
	if (mes==1){
		printf("%s",a);
	}else if(mes==2){
		printf("%s",b);	
	}else if(mes==3){
		printf("%s",c);	
	}else if(mes==4){
		printf("%s",d);	
	}else if(mes==5){
		printf("%s",e);	
	}else if(mes==6){
		printf("%s",f);	
	}else if(mes==7){
		printf("%s",g);	
	}else if(mes==8){
		printf("%s",h);	
	}else if(mes==9){
		printf("%s",i);	
	}else if(mes==10){
		printf("%s",j);	
	}else if(mes==11){
		printf("%s",k);	
	}else if(mes==12){
		printf("%s",l);	
	}	
}

void asciiDeVocal(char vocal){
	
	printf ("ingrese una vocal: ");
	fflush(stdin);
	scanf("%c", &vocal);
	
	if (vocal!='a' && vocal!='e' && vocal!='i' && vocal!='o' && vocal!='u'){
		
		printf("el caracter ingresado no es una vocal. ");
		
	}else{
		
		printf("la vocal %c en el codigo ascii equivale a %d ",vocal, vocal);
		
	}
}

void matrizManual(){
	
	int matriz[3][3];
	int i, j;
	int suma=0;;
	
	
	printf("ingrese los 9 numeros: \n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nla matriz es: \n\n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			suma=suma+matriz[i][j];
		}
	}
	
	printf("\nla suma de los elementos de la matriz es %d= ",suma);
}

void matrizAutmatico(){
	
	srand(time(NULL));
	
	int matriz[3][3];
	int num;
	int i, j;
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			num=1 + rand() % ((9+1)-1);
			matriz[i][j]= num;
		}
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}
void muestraNotas(estudiante alumno[], int longitud){
	
	int i;
	float auxiliar;
	char auxiliar2[40];
	int posicion;
	
	printf ("ingrese la cantidad de alumnos: ");
	scanf("%d",&longitud);
	
	printf("\n");
	
	printf ("ingrese datos de los alumnos: \n");
	
	printf("\n");
	
	for (i=0; i<longitud; i++){
		
		printf("alumno N° %d", i+1);
		printf("\n");
		printf("\n");
		printf("nombre: ");
		fflush(stdin);
		fgets(alumno[i].nombre,40,stdin);
		
		printf("nota 1: ");
		fflush(stdin);
		scanf("%f",&alumno[i].nota1);
		
		printf("nota 2: ");
		fflush(stdin);
		scanf("%f",&alumno[i].nota2);
		
		printf("nota 3: ");
		fflush(stdin);
		scanf("%f",&alumno[i].nota3);
		
		alumno[i].promedio=(alumno[i].nota1+alumno[i].nota2+alumno[i].nota3)/3;
		printf("\n");
	}
	
	for (i=0; i<longitud; i++){
		
		posicion = i;
		auxiliar = alumno[i].promedio;
		strcpy(auxiliar2, alumno[i].nombre);
		
		while ((posicion>0)&&(auxiliar< alumno[posicion-1].promedio)){			
			alumno[posicion].promedio = alumno[posicion-1].promedio;
			strcpy(alumno[posicion].nombre,alumno[posicion-1].nombre);
			posicion --;
		}
		
		alumno[posicion].promedio = auxiliar;
		strcpy(alumno[posicion].nombre , auxiliar2);
	}
	
	printf("   LISTADO DE ALUMNOS POR ORDEN DE MERITO   \n");
	
	for (i=longitud-1; i>=0; i--){
		
		printf ("\nnombre %s \rpromedio %.2f",alumno[i].nombre, alumno[i].promedio );
		
		printf ("\n" );
	}	
}

void MuestraCompetidor(){
	
    char categoria[20];
	
	printf("ingrese los datos del competidor: \n\n");
	
	printf("NOMBRE: ");
	fflush(stdin);
	fgets(jugador.nombre,40,stdin);
	
	printf("EDAD:   ");
	scanf("%d",&jugador.edad);
	
	printf("SEXO:   ");
	fflush(stdin);
	fgets(jugador.sexo,15,stdin);
	
	printf("CLUB:   ");
	fflush(stdin);
	fgets(jugador.club,20,stdin);
	
	if (jugador.edad<=15){
		
		strcpy(categoria,"INFANTIL");
		
	}else if(jugador.edad<=30){
		
		strcpy(categoria,"JOVEN");
		
	}else if (jugador.edad>30){
		
		strcpy(categoria,"MAYOR");
		
	}
	
	printf("\n");
	
	printf("    DATOS DEL COMPETIDOR    \n\n");
	
	printf("NOMBRE: %s \rEDAD:   %d \nSEXO:   %s \rCLUB:   %s \rCATEGORIA: %s ",jugador.nombre, jugador.edad, jugador.sexo, jugador.club, categoria);
}

	

