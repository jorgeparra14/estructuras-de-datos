/*programa realizado por Jorge Alberto Parra Quintero
fecha 15 de marzo 2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//=====================================================================
//=====================================================================

struct cliente{
	int id;
	unsigned long cedula;
	char nombre[40];
	char direccion[60];
	unsigned long telefono;
}consumidor[100], *Pconsumidor=consumidor, modificaConsu[100],*pmodificaConsu=modificaConsu;



//======================================================================
//======================================================================

struct pelicula{
	
	int id;
	char nombre[50];
	long int valor;
	int sillas;
	char hora[10];
}peliculita[100], *Ppeliculita=peliculita;

pelicula modificaPeli[100], *pmodificaPeli=modificaPeli;

//======================================================================
//======================================================================

struct entradas{
	
	char nombrePelicula[60];
	char nombreCliente[60];
	unsigned long cedulaCliente;
	char horaVendida[10];	
	
}boletos[100], *Pboletos=boletos;

//=======================================================================
//=======================================================================

void menu();
void creaClientes(cliente *,int &, int & );
void listaClientes(cliente *, int &);
void modificaClientes(cliente *, int &);
void creaPeliculas(pelicula *, int &, int &);
void listarPeliculas(pelicula *, int &);
void modificaPeliculas(pelicula *, int &);
void venderEntradas(entradas *, cliente *, int &, int &, int &, int &, int &);
void listarEntradas(entradas *, cliente *,int &acumula, int &acum, int &, int &);


//=======================================================================
//=======================================================================

int acum=0;
int tamanio=0;
int longitud=0;
int acumula=0;
int cantidad=0;
int acumulado=0;
int acu=0;
int compra=0;
int ac=0;
int cantPeliculas=0;
int posi=0;
int clavePelicula=0;
//=======================================================================
//=======================================================================

int main() {
	
	
	menu();
	
	return 0;
}

//========================================================================
//========================================================================

void menu(){
	
	system("cls");
	
	int opcion=0;
	
	while (opcion!=8){
		
		printf("\n\n>>>>>>>>>>>> MENU <<<<<<<<<<<<\n");
		
		printf("\n1. crear clientes.");
		printf("\n2. listar clientes.");
		printf("\n3. modificar clientes.");
		printf("\n4. crear peliculas.");
		printf("\n5. listar peliculas.");
		printf("\n6. modificar peliculas.");
		printf("\n7. vender entradas.");
		printf("\n8. listar entradas.");
		printf("\n0. salir.");
		
		int opcion;
		
		printf("\n\nIngrese numero segun su opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion){
			
		case 1: creaClientes(Pconsumidor, tamanio, acum);
		break;
		case 2: listaClientes(Pconsumidor, acum);
		break;
		case 3: modificaClientes(Pconsumidor, acum);
		break;
		case 4: creaPeliculas(Ppeliculita, longitud, acumula);
		break;
		case 5: listarPeliculas(Ppeliculita, acumula);
		break;
		case 6: modificaPeliculas(Ppeliculita, acumula);
		break;
		case 7: venderEntradas(Pboletos, Pconsumidor, acum, acumula, cantPeliculas, posi, clavePelicula);
		break;
		case 8: listarEntradas(Pboletos, Pconsumidor,acumula, acum, posi, clavePelicula);
		break;
		
		case 0: exit(0);
		break;
		default: printf ("opcion no valida.");
		
		}
	}
	
}

//===========================================================================
//===========================================================================

void creaClientes(cliente *Pconsumidor, int &tamanio, int &acum){
	
	system ("cls");
	
	int i;
	
	printf("\ningrese la cantidad de clientes a crear: ");
	scanf("%d", &tamanio);
	
	for (i=0+acum; i<tamanio+acum; i++){
		
		(Pconsumidor+i)->id=i+1;
		
		printf("\n->ingrese los datos del cliente # %d \n", (i-acum)+1);
		
		printf("\nNOMBRE: ");
		fflush(stdin);
		fgets((Pconsumidor+i)->nombre,40,stdin);
		printf("\nCEDULA: ");
		scanf("%lu",&(Pconsumidor+i)->cedula);
		printf("\nDIRECCION: ");
		fflush(stdin);
		fgets((Pconsumidor+i)->direccion,60,stdin);
		printf("\nTELEFONO: ");
		scanf("%lu",&(Pconsumidor+i)->telefono);
		
		printf("\n---------------- O ---------------\n");
	}
	
	acum=acum+tamanio;
}

//============================================================================
//============================================================================

void listaClientes(cliente *Pconsumidor, int &acum){
	
	system ("cls");
	
	int i;
	
	printf("\n");
	
	printf("************ Listado De Clientes ************");
	
	printf("\n");
	
	for (i=0; i<acum; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s \nCEDULA: %lu  \n\nDIRECCION: %s \nTELEFONO: %lu",(Pconsumidor+i)->id,(Pconsumidor+i)->nombre,(Pconsumidor+i)->cedula, (Pconsumidor+i)->direccion,  (Pconsumidor+i)->telefono);	
		
		printf("\n_____________________ // ___________________ ");
	}
	
}

//=========================================================================
//=========================================================================

void modificaClientes(cliente *Pconsumidor, int &acum){
	
	system ("cls");
	
	int dato;
	int i;
	int acumulador=0;
	
	printf("\n\n************ Listado De Clientes ************");
	
	printf("\n");
	
	for (i=0; i<acum; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s",(Pconsumidor+i)->id,(Pconsumidor+i)->nombre);
		
		printf("\n_____________________ // ___________________ ");
	}	
	
	printf("\n\ningrese el id del cliente a modificar: ");
	scanf("%d", &dato);
	
	for (i=0; i<acum; i++){
		
		if (dato==(Pconsumidor+i)->id){
			
			int opcion;
			
			printf("\n* DATOS: \n");
			printf("\n1. NOMBRE.\n");
			printf("2. CEDULA.\n");
			printf("3. DIRECCION.\n");
			printf("4. TELEFONO.\n");
			
			printf("\nque dato desea modificar, ingrese numero segun su opcion: ");
			scanf("%d", &opcion);
			
			switch (opcion){
				
			case 1: 
				printf("\ningrese el nuevo nombre: ");
				fflush(stdin);
				fgets((pmodificaConsu+i)->nombre,40,stdin);
				strcpy((Pconsumidor+i)->nombre,(pmodificaConsu+i)->nombre);
				break; 
				
			case 2: 
				printf("\ningrese el nueva cedula: ");
				scanf("%lu",&(pmodificaConsu+i)->cedula);
				(Pconsumidor+i)->cedula=(pmodificaConsu+i)->cedula;
				break;
			case 3:
				printf("\ningrese el nueva direccion: ");
				fflush(stdin);
				fgets((pmodificaConsu+i)->direccion,60,stdin);
				strcpy((Pconsumidor+i)->direccion,(pmodificaConsu+i)->direccion);
				break;
			case 4: 
				printf("\ningrese el nuevo telefono: ");
				scanf("%lu",&(pmodificaConsu+i)->telefono);
				(Pconsumidor+i)->telefono=(pmodificaConsu+i)->telefono;
				break;
			default: printf("opcion no valida.");
			
			}
		}
		if (dato!=(Pconsumidor+i)->id){
			
			acumulador++;
		}
		
	}
	if (acumulador>=i){
		
		printf("el cliente no se encuentra en la base de datos.");
	}
}

//============================================================================
//============================================================================

void creaPeliculas(pelicula *Ppeliculita, int &longitud, int &acumula ){
	
	system ("cls");
	
	int i;
	
	printf("\ningrese la cantidad de peliculas a crear: ");
	scanf("%d", &longitud);
	
	for (i=0+acumula; i<longitud+acumula; i++){
		
		(Ppeliculita+i)->id=i+1;
		
		printf("\n->ingrese los datos de la pelicula # %d \n", (i-acumula)+1);
		
		printf("\nNOMBRE: ");
		fflush(stdin);
		fgets((Ppeliculita+i)->nombre,50,stdin);
		printf("\nVALOR: ");
		scanf("%ld",&(Ppeliculita+i)->valor);
		printf("\nSILLAS: ");
		scanf("%d", &(Ppeliculita+i)->sillas);
		printf("\nHORA: ");
		fflush(stdin);
		fgets((Ppeliculita+i)->hora,10,stdin);
	}
	
	acumula=acumula+longitud;	
}

//===========================================================================
//===========================================================================

void listarPeliculas(pelicula *Ppeliculita, int &acumula){
	
	system ("cls");
	
	int i;
	
	printf("\n");
	
	printf("************ Listado De Peliculas ************");
	
	printf("\n");
	
	for (i=0; i<acumula; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s \nVALOR: %ld  \n\nSILLAS: %d \n\nHORA: %s",(Ppeliculita+i)->id,(Ppeliculita+i)->nombre,(Ppeliculita+i)->valor, (Ppeliculita+i)->sillas, (Ppeliculita+i)->hora);	
		
		printf("\n_____________________ // ___________________ ");
	}
}

//============================================================================
//============================================================================

void modificaPeliculas(pelicula *Ppeliculita, int &acumula){
	
	system ("cls");
	
	int num;
	int i;
	int acumulador=0;
	
	printf("\n\n************ Listado De Peliculas ************");
	
	printf("\n");
	
	for (i=0; i<acumula; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s",(Ppeliculita+i)->id,(Ppeliculita+i)->nombre);
		
		printf("\n_____________________ // ___________________ ");
	}	
	
	printf("\n\ningrese el id de la pelicula a modificar: ");
	scanf("%d", &num);
	
	for (i=0; i<acumula; i++){
		
		if (num==(Ppeliculita+i)->id){
			
			int opcion;
			
			printf("\n* DATOS: \n");
			printf("\n1. NOMBRE.\n");
			printf("2. VALOR.\n");
			printf("3. SILLAS.\n");
			printf("4. HORA.\n");
			
			printf("\nque dato desea modificar, ingrese numero segun su opcion: ");
			scanf("%d", &opcion);
			
			switch (opcion){
				
			case 1: 
				printf("\ningrese el nuevo nombre: ");
				fflush(stdin);
				fgets((pmodificaPeli+i)->nombre,50,stdin);
				strcpy((Ppeliculita+i)->nombre,(pmodificaPeli+i)->nombre);
				break; 
				
			case 2: 
				printf("\ningrese el nuevo valor: ");
				scanf("%li",&(pmodificaPeli+i)->valor);
				(Ppeliculita+i)->valor=(pmodificaPeli+i)->valor;
				break;
			case 3:
				printf("\ningrese la nueva cantidad de sillas: ");
				scanf("%d", &(pmodificaPeli+i)->sillas);
				(Ppeliculita+i)->sillas=(pmodificaPeli+i)->sillas;
				break;
			case 4: 
				printf("\ningrese la nueva hora: ");
				fgets((pmodificaPeli+i)->hora,10,stdin);
				strcpy((Ppeliculita+i)->hora,(pmodificaPeli+i)->hora);
				break;
			default: printf("opcion no valida.");
			
			}
		}
		if (num!=(Ppeliculita+i)->id){
			
			acumulador++;
		}
		
	}
	if (acumulador>=i){
		
		printf("la pelicula no se encuentra en la base de datos.");
	}
}

//============================================================================
//============================================================================


void venderEntradas(entradas *Pboletos, cliente *Pconsumidor, int &acum, int &acumula, int &cantPeliculas, int &posi, int &clavePeliculas){
	
	int i;
	int claveCliente;
	int pos=0;
	int clavePelicula;
	
	printf("\n************ Listado De Clientes ************");
	
	printf("\n");
	
	for (i=0; i<acum; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s \nCEDULA: %lu ",(Pconsumidor+i)->id,(Pconsumidor+i)->nombre,(Pconsumidor+i)->cedula);	
		
		printf("\n_____________________ // ___________________ ");
	}
	
	printf("\ningrese el id del cliente: ");
	scanf("%d", &claveCliente);
	
	for (i=0; i<acum; i++){
		
		if (claveCliente==(Pconsumidor+i)->id){
			
			pos=i;
			
			strcpy((Pboletos+pos)->nombreCliente,(Pconsumidor+i)->nombre);
			(Pboletos+pos)->cedulaCliente=(Pconsumidor+i)->cedula;
			
		}
	}
	
	
	
	for (i=0; i<acum; i++){
		
		if (claveCliente==(Pconsumidor+i)->id){
			
			printf("\nNOMBRE CLIENTE: %s\nCEDULA CLIENTE: %lu",(Pboletos+i)->nombreCliente, (Pboletos+i)->cedulaCliente);
			
		}
		
		
	}

	printf("\n");
	
	printf("\n************ Cartelera ************");
	
	printf("\n");
	
	for (i=0; i<acumula; i++){
		
		printf("\nID: %d  \n\nNOMBRE: %s \nVALOR: %ld  \n\nSILLAS: %d \n\nHORA: %s",(Ppeliculita+i)->id,(Ppeliculita+i)->nombre,(Ppeliculita+i)->valor, (Ppeliculita+i)->sillas, (Ppeliculita+i)->hora);	
		
		printf("\n_____________________ // ___________________ ");
	}
	
	printf("\n\ningrese el ID de la pelicula a comprar: \n");
	scanf("%d", &clavePelicula);
	
	for (i=0; i<acumula; i++){
		
		if(clavePelicula==(Ppeliculita+i)->id){
			
			posi=i;
			
			strcpy((Pboletos+posi)->nombrePelicula, (Ppeliculita+i)->nombre);
			strcpy((Pboletos+posi)->horaVendida,(Ppeliculita+i)->hora);		
			
		}
		
	}
	
	for (i=0; i<acumula; i++){
		
		if(clavePelicula==(Ppeliculita+i)->id){
			
			printf("NOMBRE DE LA PELICULA: %s\n\nHORA DE LA PELICULA: %s",(Pboletos+posi)->nombrePelicula, (Pboletos+posi)->horaVendida );
		}
	}
	
}

void listarEntradas(entradas *Pboletos, cliente *Pconsumidor, int &acumula, int &acum, int &posi, int &clavePelicula){
	
	int i;
	
	for (i=0; i<=posi; i++){
		
		printf("\nNOMBRE DE LA PELICULA: %s\nHORA DE LA PELICULA: %s",(Pboletos+posi)->nombrePelicula, (Pboletos+posi)->horaVendida );
		
	}
	
	for (i=0; i<acum; i++){
		
		printf("\nNOMBRE CLIENTE: %s\nCEDULA CLIENTE: %lu",(Pboletos+i)->nombreCliente, (Pboletos+i)->cedulaCliente);
		
	}
	
}
