/*creado por jorge alberto parra.
fecha: 22 de marzo 2018*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct  competidor{
	
	char nombre[40];
	int edad;
	char sexo[15];
	char club[20];
}jugador, * pjugador=&jugador;

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

struct estudiante{
	
	char nombre[40];
	int edad;
	char grado [20];
	float promedio;
	
} alumno[10], * palumno=alumno;

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

struct promedio{
	float nota1;
	float nota2;
	float nota3;
}prom;

struct alumno{
	char nombre[40];
	char sexo[40];
	int edad;
	struct promedio  prom;
	
}estudi[100], * pestudi=estudi;

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

struct trabajador{
	char nombre[40];
	int edad;
	unsigned long salario;
}empleado[100], * pempleado=empleado;

void ArreglosDecimales();
void ArreglosCerosyUnos();
void ArregloPotencia();
int potencia(int , int);
void sumaMatriz();
void matrizAutmatico();
void matrizDePrimos();
void compruevaPar();
void compruevaPrimo();
void vectorPares();
void numeroMenor();
void MuestraCompetidor();
void mejorPromedio();
void mejorSalario();
void strucPromAlumn();
void strucPromAlumn2();
	
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

int main() {
	
	//ArreglosDecimales();
	//ArreglosCerosyUnos();
	//ArregloPotencia();
	//potencia(int , int);
	//sumaMatriz();
	//matrizAutmatico();
	//matrizDePrimos();
	//compruevaPar();
	//compruevaPrimo();
	//vectorPares();
	//numeroMenor();
	//MuestraCompetidor();
	//mejorPromedio();
	//mejorSalario();
	//strucPromAlumn();
	//strucPromAlumn2();
	
	return 0;
}


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void ArreglosCerosyUnos(){
	
	int num1;
	int num2;
	int i;
	int j;
	int matriz[20][20];
	int *Pmatriz=&matriz[0][0];
	
	printf("\ningrese el numero de filas de la matriz: \n");
	scanf("%d",&num1 );
	
	printf("ingrese el numero de columnas de la matriz: \n");
	scanf("%d",&num2 );
	
	for (i=0; i<num1; i++){
		
		for (j=0; j<num2; j++){
			
			*(Pmatriz+i+j * num2)=0 + rand() % ((1+1)-0);
			
		}
	}
	
	for (i=0; i<num1; i++){
		
		for (j=0; j<num2; j++){
			
			printf ("%d",*(Pmatriz+i+j* num2));
			
		}
		printf ("\n");
	}	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


void ArregloPotencia(){
	
	int matriz [50][50];
	int *pmatriz=&matriz[4][4];
	
	int i;
	int j;
	
	printf("\ningrese cuatro numeros: \n");
	
	for (i=0; i<4; i++){
		
		for (j=0; j<4; j++){
			
			if (j==0){
				
				
				
				scanf("%d", &* (pmatriz+i+j * 4));
				
			}
			if (j==1){
				
				
			   *(pmatriz+i+j * 4)=potencia(*(pmatriz+i+0 * 0), 2);
			}
			if (j==2){
				
				*(pmatriz+i+j * 4)=potencia(*(pmatriz+i+0 * 0), 3);
				
			}
			if (j==3){
				
				
				*(pmatriz+i+j * 4)=potencia(*(pmatriz+i+0 * 0), 4);
			}
		}
	}
	
	printf ("\n");
	
	for (i=0; i<4; i++){
		
		for (j=0; j<4; j++){
			
			printf ("%d",*(pmatriz+i+j * 4));
			printf ("\t");
		}
		printf ("\n");
	}
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

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

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void sumaMatriz(){
	
	int matriz[50][50];
	int * pmatriz=&matriz[3][3];
	int i; 
	int j;
	int acum=0;
	
	printf("ingrese los 9 valores de la matriz: \n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			scanf("%d", &* (pmatriz+i+j * 3));
			
		}
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			acum=acum + *(pmatriz+i+j * 3);
			
		}
	}
	
	printf("\nMATRIZ:\n\n");
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d", * (pmatriz+i+j * 3));
			
		}
		
		printf("\n");
		
	}
	
	printf("\nSUMA DE LOS ELEMENTOS DE LA MATRIZ: %d ",acum);
	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void matrizAutmatico(){
	
	srand(time(NULL));
	
	int matriz[50][50];
	int * pmatriz=&matriz[3][3];
	
	
	int num;
	int i, j;
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			num=1 + rand() % ((9+1)-1);
			* (pmatriz+i+j * 3)= num;
		}
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",* (pmatriz+i+j * 3));
		}
		printf("\n");
	}	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void matrizDePrimos(){
	
	int matriz[50][50];
	int * pmatriz=&matriz[3][3];
	int i; 
	int j;
	int k;
	int l;
	int contador=0;
	int vector[9];
	int posicion=0;
	
	
	for (k=2; k<=23; k++){
		
		contador=0;
		
		for (l=1; l<k+1; l++){
			
			if (k%l==0){
				
				contador++;
			}
		}
		
		if (contador==2){
			
			vector[posicion]=k;
			vector[posicion++];
		}
	}	
	
    posicion=0;
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			* (pmatriz+i+j * 3)	= vector[posicion];
			vector[posicion++];
		}
	}
	
	for (i=0; i<3; i++){
		
		for (j=0; j<3; j++){
			
			printf("%d",* (pmatriz+i+j * 3));
			
			printf("\t");
		}
		
		printf("\n");
	}
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
void compruevaPar(){
	
	int numero;
	int * pnumero=&numero;
	
	printf("ingrese un numero: ");
	scanf("%d", &* pnumero);
	
	if (* pnumero%2==0){
		
		printf("\nel numero ES par");
	}else{
		
		printf("\nel numero NO es par");
	}
	
	
	printf("\nel numero se encuentra en la direccion de memoria N°: %d", pnumero);	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void compruevaPrimo(){
	
	int numero;
	int * pnumero=&numero;
	int i;
	int contador=0;
	
	printf("ingrese un numero: ");
	scanf("%d", &* pnumero);
	
	for (i=1; i <= * pnumero; i++){
		
		if (* pnumero%i==0){
			
			contador++;
		}
		
	}
	if (contador==2){
		
		printf("\nel numero ES primo");
	}else{
		
		printf("\nel numero NO es primo");
	}
	
	printf("\nel numero se encuentra en la direccion de memoria N°: %d", pnumero);	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void vectorPares(){
	
	int vector[]={1,2,3,4,5,6,7,8,9,10};
	int * pvector=vector;
	int i;
	
	for (i=0; i<10; i++){
		
		if (* (pvector+i)%2==0){
			
			printf("\nel numero %d es par y esta en la posicion en memoria --> %d",* (pvector+i), pvector+i);
		}
	}
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


void numeroMenor (){
	int vector[100];
	int * pvector=vector;
	int i; 
	int j; 
	int aux;
	int num;
	
	printf("ingrese el tamaño del vector: ");
	scanf("%d", &num);
	
	printf("\ningrese los %d numeros del vector\n", num);
	
	for (i=0; i<num; i++){
		
		scanf("%d", &* (pvector+i));
		
	}
	
	for(i = 0; i < num; i++){
		j = i;
		aux =* (pvector+i);
		while ((j > 0) && (aux < * (pvector+j-1))) {    
			* (pvector+j) = * (pvector+j-1);
			j--;
		}
		* (pvector+j) = aux;
	}
	
	printf("el numero menor del vector es: %d ",* (pvector+0));	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void MuestraCompetidor(){
	
	char categoria[20];
	
	printf("\ningrese los datos del competidor: \n\n");
	
	printf("NOMBRE: ");
	fflush(stdin);
	fgets(pjugador->nombre,40,stdin);
	
	printf("EDAD:   ");
	scanf("%d",&pjugador->edad);
	
	printf("SEXO:   ");
	fflush(stdin);
	fgets(pjugador->sexo,15,stdin);
	
	printf("CLUB:   ");
	fflush(stdin);
	fgets(pjugador->club,20,stdin);
	
	if (pjugador->edad<=15){
		
		strcpy(categoria,"INFANTIL");
		
	}else if(pjugador->edad<=30){
		
		strcpy(categoria,"JOVEN");
		
	}else if (pjugador->edad>30){
		
		strcpy(categoria,"MAYOR");
	}
	
	system("cls");
	
	printf("\n");
	
	printf("    DATOS DEL COMPETIDOR    \n\n");
	
	printf("NOMBRE: %s \rEDAD:   %d \nSEXO:   %s \rCLUB:   %s \rCATEGORIA: %s ",pjugador->nombre, pjugador->edad, pjugador->sexo, pjugador->club, categoria);
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void mejorPromedio(){
	
	int i;
	
	printf("ingrese los datos de los 3 estudiantes:\n");
	
	for (i=0; i<3; i++){
		
		printf("\nestudiante numero %d\n", i+1);
		
		printf("\nNOMBRE: ");
		fflush(stdin);
		fgets((palumno+i)->nombre,40,stdin);
		printf("\nEDAD: ");
		scanf("%d", &(palumno+i)->edad);
		printf("\nGRADO: ");
		fflush(stdin);
		fgets((palumno+i)->grado,20,stdin);
		printf("\nPROMEDIO: ");
		scanf("%f", &(palumno+i)->promedio);
		
	}
	
	printf("\nEl alumno con mejor promedio es: \n");
	
	if ((palumno+0)->promedio > (palumno+1)->promedio && (palumno+0)->promedio > (palumno+2)->promedio){
		
		printf("\nNOMBRE: %s \nEDAD: %d \n\nGRADO: %s \nPROMEDIO: %.2f", (palumno+0)->nombre, (palumno+0)->edad, (palumno+0)->grado, (palumno+0)->promedio);
		
	}else if((palumno+1)->promedio > (palumno+0)->promedio && (palumno+1)->promedio > (palumno+2)->promedio){
		
		printf("\nNOMBRE: %s \nEDAD: %d \n\nGRADO: %s \nPROMEDIO: %.2f", (palumno+1)->nombre, (palumno+1)->edad, (palumno+1)->grado, (palumno+1)->promedio);
		
	}else{
		
		printf("\nNOMBRE: %s \nEDAD: %d \n\nGRADO: %s \nPROMEDIO: %.2f", (palumno+2)->nombre, (palumno+2)->edad, (palumno+2)->grado, (palumno+2)->promedio);
		
	}
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

void mejorSalario(){
	
	int i;
	
	unsigned long aux;
	int num;
	
	char aux1[40];
	unsigned long aux2;
	int posicion;

	printf("ingrese la cantidad de trabajadores: ");
	scanf("%d", &num);
	
	printf("\ningrese los datos de los trabajadores: \n");
	
	for (i=0; i<num; i++){
		
		printf("\n-->trabajador N° %d \n", i+1);
		
		printf("\nNOMBRE: ");
		fflush(stdin);
		fgets((pempleado+i)->nombre,40,stdin);
		
		printf("\nEDAD: ");
		scanf("%d", &(pempleado+i)->edad);
		
		printf("\nSALARIO: ");
		scanf("%lu", &(pempleado+i)->salario);
		
		printf("\n==================== o ====================\n");
	}
	
	
	for (i=0; i<num; i++){
		
		posicion = i;
		aux = (pempleado+i)->salario;
		strcpy(aux1, (pempleado+i)->nombre);
		aux2=(pempleado+i)->edad;
		
		
		while ((posicion>0)&&(aux<(pempleado+(posicion-1))->salario)){			
			(pempleado+posicion)->salario =(pempleado+(posicion-1))->salario;
			strcpy((pempleado+posicion)->nombre,(pempleado+(posicion-1))->nombre);
			(pempleado+posicion)->edad=(pempleado+(posicion-1))->edad;
			posicion --;
		}
		
		(pempleado+(posicion))->salario = aux;
		strcpy((pempleado+posicion)->nombre , aux1);
		(pempleado+posicion)->edad = aux2;
		
	}
	
	printf("\nel empleado con el MAYOR salario es: \n");
	printf("\nNOMBRE: %s \nEDAD: %d \n\nSALARIO %lu",(pempleado+num-1)->nombre, (pempleado+num-1)->edad,(pempleado+num-1)->salario);
	
	printf("\n\nel empleado con el MENOR salario es: \n");
	printf("\nNOMBRE: %s \nEDAD: %d \n\nSALARIO %lu",(pempleado+0)->nombre, (pempleado+0)->edad,(pempleado+0)->salario);
}


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

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
		fgets((pestudi+i)->nombre,20,stdin);
		
		printf ("sexo:   ");
		fflush(stdin);
		fgets((pestudi+i)->sexo,20,stdin);
		
		printf ("edad:   ");
		scanf("%d",&(pestudi+i)->edad);
		
		printf ("\ningrese las notas del estudiante numero %d: \n\n", i+1);
		
		printf ("nota1: ");
		scanf("%f",&(pestudi+i)->prom.nota1);
		printf ("nota2: ");
		scanf("%f",&(pestudi+i)->prom.nota2);
		printf ("nota3: ");
		scanf("%f",&(pestudi+i)->prom.nota3);
		
		promedioEstudiante[i]=((pestudi+i)->prom.nota1+(pestudi+i)->prom.nota2+(pestudi+i)->prom.nota3)/3;
	}
	
	for (i=0; i<num; i++){
		
		printf ("\n\nlos datos del estudiante numero %d son: \n\nnombre:    %ssexo:      %sedad:      %d \npromedio:  %.2f ",i+1,(pestudi+i)->nombre, (pestudi+i)->sexo, (pestudi+i)->edad, promedioEstudiante[i]);
	}	
}

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

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
		fgets((pestudi+i)->nombre,20,stdin);
		
		printf ("sexo:   ");
		fflush(stdin);
		fgets((pestudi+i)->sexo,20,stdin);
		
		printf ("edad:   ");
		scanf("%d",&(pestudi+i)->edad);
		
		printf ("\ningrese las notas del estudiante numero %d: \n\n", i+1);
		
		printf ("nota1: ");
		scanf("%f",&(pestudi+i)->prom.nota1);
		printf ("nota2: ");
		scanf("%f",&(pestudi+i)->prom.nota2);
		printf ("nota3: ");
		scanf("%f",&(pestudi+i)->prom.nota3);
		
		promedioEstudiante[i]=((pestudi+i)->prom.nota1+(pestudi+i)->prom.nota2+(pestudi+i)->prom.nota3)/3;
		
	}
	
	for (i=0; i<num; i++){
		
		posicion = i;
		auxiliar = promedioEstudiante[i];
		strcpy(auxiliar2, (pestudi+i)->nombre);
		strcpy(auxiliar3, (pestudi+i)->sexo);
		aux=(pestudi+i)->edad;
		
		while ((posicion>0)&&(auxiliar< promedioEstudiante[posicion-1])){			
			promedioEstudiante[posicion] = promedioEstudiante[posicion-1];
			strcpy((pestudi+posicion)->nombre,(pestudi+posicion-1)->nombre);
			strcpy((pestudi+posicion)->sexo,(pestudi+(posicion-1))->sexo);
			(pestudi+posicion)->edad=(pestudi+(posicion-1))->edad;
			posicion --;
		}
		
		promedioEstudiante[posicion] = auxiliar;
		strcpy((pestudi+posicion)->nombre , auxiliar2);
		strcpy((pestudi+posicion)->sexo , auxiliar3);
		(pestudi+posicion)->edad=aux;
	}
	
	printf("\n");
	printf("\nel alumno con MENOR promedio es: \n\nnombre: %ssexo: %sedad: %d \npromedio: %.2f\n",(pestudi+0)->nombre, (pestudi+0)->sexo, (pestudi+0)->edad, promedioEstudiante[0]);
	printf("\nel alumno con MAYOR promedio es: \n\nnombre: %ssexo: %sedad: %d \npromedio: %.2f\n",(pestudi+num-1)->nombre,(pestudi+num-1)->sexo, (pestudi+num-1)->edad, promedioEstudiante[num-1]);
}




