/*programa realizado por Jorge Alberto Parra y Luisa Fernanda Andrade.
fecha: 22 de febrero 2018.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct promedio{
	float nota1;
	float nota2;
	float nota3;
}prom;

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
	
}estudi[100];

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
void sumaImpares();
void tablasDeMultiplicar();
void muestraFactorial();
void fibonacci();
void ArreglosDecimales();
void  ArreglosCerosyUnos();
void ArregloPotencia();
int potencia(int , int );
void asciiDeVocal();
void consultaMesYcodigoAscii();
void muestraAscciNumero();
void mesSsistema();
void matrizManual();
void matrizAutmatico();
void matrizDePrimos();
void muestraNotas(estudiante[], int);
void MuestraCompetidor();
void strucPromAlumn();
void strucPromAlumn2();
void switchFunciones();

int main() {
	
	menu ();
	
	return 0;
}

void menu (){
	
	int opcion;
	int longitud=0;

	while (opcion!=17){
		
		printf ("\n\n********** MENU **********\n\n");
		
		printf ("1. Sumar los números del 1 a 100.\n");
		printf ("2. Sumar los números pares del 1 al 50.\n");
		printf ("3. Sumar los números impares del 1 al 50.\n");
		printf ("4. Imprimir las tablas de multiplicar de un número, del 1 al 20.\n");
		printf ("5. Solucionar el factorial de un número.\n");
		printf ("6. Solucionar el número de fibonacci.\n");
		printf ("7. Declarar un array de numéricos decimales e introducir en él....\n");
		printf ("8. crear arreglo de ceros y unos(tamaño definido por el usuario)\n");
		printf ("9. crear arreglo 4X4 y mostrar numeros ingresados y elevarlos a 2,3,4\n");
		printf ("10. switch( muetra: mes, ascii de vocal y ascii de numero del 0 al 9)\n");
		printf ("11 Crear una matriz de 3x3, completa sus valores desde el teclado y...\n");
		printf ("12. Crear una matriz de 3x3 y llenarla de manera automática por el sistema.\n");
		printf ("13. Crear una matriz de 3x3 y llenarla con numeros primos.\n");
		printf ("14. ingresar el nombre y 3 notas de N alumnos, almacenarlos en un array...,\n");
		printf ("15. hacer un estructura llamada competidor, que tendra los siguentes.....\n");
		printf ("16. hacer estructura anidada de alumno y promedio de notas\n");
		printf ("17. hacer estructura anidada de alumno,nota mayor y menor\n");
		printf ("0. salir\n");
		
		printf ("\ningrese el numero segun su opcion: ");
		scanf ("%d",&opcion);
		
		switch (opcion){
			
		case 1: sumaNumeros();
		break;
		case 2: sumaPares();
		break;
		case 3: sumaImpares();
		break;
		case 4: tablasDeMultiplicar();
		break;
		case 5: muestraFactorial();
		break;
		case 6: fibonacci();
		break;
		case 7: ArreglosDecimales();
		break;
		case 8: ArreglosCerosyUnos();
	    break;
		case 9: ArregloPotencia();
	    break;
		case 10: switchFunciones();
	    break;
		case 11: matrizManual();
		break;
		case 12: matrizAutmatico();
		break;
		case 13: matrizDePrimos();
		break;
		case 14: muestraNotas(alumno,longitud);
		break;
		case 15: MuestraCompetidor();
		break;
		case 16: strucPromAlumn();
		break;
		case 17: strucPromAlumn2();
		break;
		default: printf ("opcion no valida.");
		break;
		case 0: exit(0);
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

void sumaImpares(){
	
	int acumulador=0;	
	int num=1;
	
	while(num<=50){
		
		if (num%2!= 0){
			
			acumulador=acumulador+num;
		}
		num++;
	}
	printf("%d", acumulador);
}

void tablasDeMultiplicar(){
	
	int num;
	int i;
	int resultado;
	
	resultado=0;
	
   printf("\ningrese el numero a hallar tabla de multiplicar: ");
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
	
	printf("\ningrese el numero para hallar su factorial: ");
	scanf("%d",&num);
	
	factorial=1;
	
	for (i = 2; i < num+1; i++){
		
		factorial=factorial*i;
		
	}
	
	printf ("%d", factorial);
}

void fibonacci(){
	
	int i;
	int fibonacci=0;
	int anterior=0;
	int siguiente=1;
	
	printf("%d\n",anterior);
	printf("%d\n",siguiente);
	
	for (i=1; i<=20-1; i++){
		
		fibonacci=anterior+siguiente;
		anterior=siguiente;
		siguiente=fibonacci;
		
		printf ("%d",fibonacci );
		
		printf ("\n");
	}
}

void ArreglosDecimales(){
	
	int i;
	
	float arreglo[4]={32.583, 11.239, 45.781, 22.237};
	
	for (i=0; i<4; i++){
		
		printf("%.3f  ",arreglo[i]);
	}	
}

void ArreglosCerosyUnos(){
	
	int num1;
	int num2;
	int i;
	int j;
	int matriz[20][20];

	printf("\ningrese el numero de filas de la matriz: \n");
	scanf("%d",&num1 );
	
	printf("ingrese el numero de columnas de la matriz: \n");
	scanf("%d",&num2 );
	
	for (i=0; i<num1; i++){
		
		for (j=0; j<num2; j++){
			
			matriz[i][j]=0 + rand() % ((1+1)-0);
		}
	}
	
	for (i=0; i<num1; i++){
		
		for (j=0; j<num2; j++){
			
		 printf ("%d",matriz[i][j]);
			
		}
		printf ("\n");
	}	
}

void ArregloPotencia(){
	
	int matriz [4][4];
	
	int i;
	int j;
	
	printf("\ningrese cuatro numeros: \n");
	
	for (i=0; i<4; i++){
		
		for (j=0; j<4; j++){
			
			if (j==0){
				
				scanf("%d",&matriz[i][j]);
				
			}
			if (j==1){
				
				matriz[i][j]=potencia(matriz[i][0], 2);
				
			}
			if (j==2){
				
				matriz[i][j]=potencia(matriz[i][0], 3);
				
			}
			if (j==3){
				
				matriz[i][j]=potencia(matriz[i][0], 4);
				
			}
		}
	}
	
	printf ("\n");
	
	for (i=0; i<4; i++){
		
		for (j=0; j<4; j++){
			
			printf ("%d",matriz[i][j]);
			printf ("\t");
		}
		printf ("\n");
	}
}

int potencia(int num1, int num2){
	
	int i;
	int aux=num1;
	int potencia=0;
	
	for (i=0; i<num2-1; i++){
		
		potencia=aux*num1;
		aux=potencia;
	}
	
	return potencia;
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

void asciiDeVocal(){
	
	char vocal;
	
	printf ("\ningrese una vocal: ");
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
	
	
	printf("\ningrese los 9 numeros: \n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nla matriz es: \n\n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",matriz[i][j]);
			
			printf("\t");
		}
		printf("\n");
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			suma=suma+matriz[i][j];
		}
	}
	
	printf("\nla suma de los elementos de la matriz es: %d ",suma);
}

void muestraAscciNumero(){
	
	int numero;

	printf ("\ningrese una numero del 0 al 9: ");
	scanf("%d", &numero);
	
	if (numero!=0 && numero!=1 && numero!=2 && numero!=3 && numero!=4 && numero!=5 && numero!=6 && numero!=7 && numero!=8 && numero!=9){
		
		printf("el caracter ingresado no esta en el rango o no es un numero. ");	
		
	}else{
		
		char caracter = '0' + numero;
		
		printf("el numero %c en el codigo ascii equivale a %d ",caracter, caracter);
	}
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

void matrizDePrimos(){
	
	int matriz[3][3];
	int i; 
	int j;
	int k;
	int numero;
	int primo;
	int contador=0;
	
	srand (time(NULL));
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			literal1:
			
			contador=0;
			
			numero = 1 + rand() % ((100+1)-1);
			
			for (k=1; k<=numero; k++){
				
				if (numero%k==0){
					
					contador++;
				}
			}
			
			if (contador==2){
				
				primo=numero;
			}else{
				
				goto literal1;
			}
			
			matriz[i][j]=primo;	
			
			primo=0;
		}
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",matriz[i][j]);
			
			printf("\t");
		}
		
		printf("\n");
	}
}

void muestraNotas(estudiante alumno[], int longitud){
	
	int i;
	float auxiliar;
	char auxiliar2[40];
	int posicion;
	
	printf ("\ningrese la cantidad de alumnos: ");
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
	
	printf("\ningrese los datos del competidor: \n\n");
	
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

void strucPromAlumn(){
	
	float promedioEstudiante[100];
	int num;
	int i;
	
	printf ("\ningrese la cantidad de estudiantes: ");
	scanf("%d", &num);
	
	for (i=0; i<num; i++){
		
		printf ("\ningrese los datos del estudiante numero %d: \n\n",i+1);
		
		printf ("nombre: ");
		fflush(stdin);
		fgets(estudi[i].nombre,20,stdin);
		
		printf ("sexo:   ");
		fflush(stdin);
		fgets(estudi[i].sexo,20,stdin);
		
		printf ("edad:   ");
		scanf("%d",&estudi[i].edad);
		
		printf ("\ningrese las notas del estudiante numero %d: \n\n", i+1);
		
		printf ("nota1: ");
		scanf("%f",&estudi[i].prom.nota1);
		printf ("nota2: ");
		scanf("%f",&estudi[i].prom.nota2);
		printf ("nota3: ");
		scanf("%f",&estudi[i].prom.nota3);
		
		promedioEstudiante[i]=(estudi[i].prom.nota1+estudi[i].prom.nota2+estudi[i].prom.nota3)/3;
	}
	
	for (i=0; i<num; i++){
		
		printf ("\n\nlos datos del estudiante numero %d son: \n\nnombre:    %ssexo:      %sedad:      %d \npromedio:  %.2f ",i+1,estudi[i].nombre, estudi[i].sexo, estudi[i].edad, promedioEstudiante[i]);
	}	
}

void strucPromAlumn2(){
	
	float promedioEstudiante[100];
	int num;
	int i;
	float auxiliar;
	char auxiliar2[40];
	char auxiliar3[20];
	int posicion;
	int aux;
	
	printf ("\ningrese la cantidad de estudiantes: ");
	scanf("%d", &num);
	
	for (i=0; i<num; i++){
		
		printf ("\ningrese los datos del estudiante numero %d: \n\n",i+1);
		
		
		printf ("nombre: ");
		fflush(stdin);
		fgets(estudi[i].nombre,20,stdin);
		
		printf ("sexo:   ");
		fflush(stdin);
		fgets(estudi[i].sexo,20,stdin);
		
		printf ("edad:   ");
		scanf("%d",&estudi[i].edad);
		
		printf ("\ningrese las notas del estudiante numero %d: \n\n", i+1);
		
		printf ("nota1: ");
		scanf("%f",&estudi[i].prom.nota1);
		printf ("nota2: ");
		scanf("%f",&estudi[i].prom.nota2);
		printf ("nota3: ");
		scanf("%f",&estudi[i].prom.nota3);
		
		promedioEstudiante[i]=(estudi[i].prom.nota1+estudi[i].prom.nota2+estudi[i].prom.nota3)/3;
		
	}
	
	for (i=0; i<num; i++){
		
		posicion = i;
		auxiliar = promedioEstudiante[i];
		strcpy(auxiliar2, estudi[i].nombre);
		strcpy(auxiliar3, estudi[i].sexo);
		aux=estudi[i].edad;
		
		while ((posicion>0)&&(auxiliar< promedioEstudiante[posicion-1])){			
			promedioEstudiante[posicion] = promedioEstudiante[posicion-1];
			strcpy(estudi[posicion].nombre,estudi[posicion-1].nombre);
			strcpy(estudi[posicion].sexo,estudi[posicion-1].sexo);
			estudi[posicion].edad=estudi[posicion-1].edad;
			posicion --;
		}
		
		promedioEstudiante[posicion] = auxiliar;
		strcpy(estudi[posicion].nombre , auxiliar2);
		strcpy(estudi[posicion].sexo , auxiliar3);
		estudi[posicion].edad=aux;
	}
	
	printf("\n");
	printf("\nel alumno con MENOR promedio es: \n\nnombre: %ssexo: %sedad: %d \npromedio: %.2f\n",estudi[0].nombre, estudi[0].sexo, estudi[0].edad, promedioEstudiante[0]);
	printf("\nel alumno con MAYOR promedio es: \n\nnombre: %ssexo: %sedad: %d \npromedio: %.2f\n",estudi[num-1].nombre,estudi[num-1].sexo,estudi[num-1].edad, promedioEstudiante[num-1]);
	
}

void switchFunciones(){
	
	int opcion;
	
	printf ("\n1. Consultar el mes del sistema e imprimir el mes en español.\n");
	printf ("2. Crear un programa que devuelva el código ascii de una vocal ingresada.\n");
	printf ("3. Crear un programa que devuelva el código ascii de un numero ingresado.\n");
	printf ("0. salir al menu anterior\n");
	
	printf("\ningrese un numero segun su eleccion: ");
	scanf("%d", &opcion);

	switch (opcion){
		
		case 1: mesSsistema();
		break;
		case 2: asciiDeVocal();
		break;
		case 3: muestraAscciNumero();
		break;
		case 0: break;
		break;
		default: printf("opcion no valida ");
	}
}
