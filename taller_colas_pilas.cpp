/*realizado por Jorge Alberto Parra Quintero.
  fecha: sabado 7 de abril 2018.
  programa de pilas y colas.*/

#include <stdio.h>
#include <stdlib.h>

//==============================================================================
//Estructura de pilas:
struct nodo{
	int dato;
	nodo *siguiente;
};

//==============================================================================
//Estructura de colas:

struct Nodo{
	int Dato;
	Nodo *Siguiente;
};

//==============================================================================
//declaracion global de variables
nodo *pila = NULL; 
int n=0;
int p=0;
Nodo *frente = NULL;
Nodo *fin = NULL;
Nodo *nuevo_nodo=NULL;
Nodo *Siguiente=NULL;
//==============================================================================
//prototipos de pilas:
void insertarElemento(nodo *&, int );
void borrarPila(nodo *&);
void borraElemento(nodo *&);
void mostrarElementos(nodo *&);
void menuPrincipal(nodo *&, int, Nodo *&, Nodo *&, Nodo *&, Nodo *&, int);
void menuPilas(nodo *&, int);

//==============================================================================
//prototipos de colas:
void pushcola(Nodo *&,Nodo *&,int);
void popcola(Nodo *&,Nodo *&,int );
bool colaVacia(Nodo *);
void borrarCola(Nodo *&frente, Nodo *&fin, int p);
void mostrarCola(Nodo *&,Nodo *&, Nodo *&);
void menuColas(Nodo *&, Nodo *&, Nodo *&, Nodo *&, int, int);

//==============================================================================

int main() {
	
	menuPrincipal(*&pila, n, *&frente, *&fin, *&Siguiente, *&nuevo_nodo, p);
	
	return 0;
}

//==============================================================================

void menuPrincipal(nodo *&pila, int n, Nodo *&frente, Nodo *&fin, Nodo *&Siguiente, Nodo *&nuevo_nodo, int p){
	
	system("cls");
	
	int opcion;
	
	while (opcion!=0){
		
		printf("\n********* MENU PRINCIPAL *********\n\n");
		printf("1. PILAS. \n");
		printf("2. COLAS. \n");
		printf("\nIngrese numero segun su eleccion: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: menuPilas(*&pila,n);
		break;
		case 2: menuColas(*&frente, *&fin, *&Siguiente, *&nuevo_nodo, n, p);
		break;
		default: printf ("Opcion no valida.");
		break;
		case 0: exit (0);
		}
	}
}

//==============================================================================

void menuPilas(nodo *&pila, int n){
	
	system("cls");
	
	int opcion;

	while (opcion!=0){
		
		printf("\n************* PILAS ***************\n");
		
		printf("\n1. Agregar dato a la pila. \n");
		printf("2. Eliminar un dato de la pila. \n");
		printf("3. Eliminar toda la pila. \n");
		printf("4. Mostrar los datos de la pila. \n");
		printf("5. Regresar al menu principal. \n");
		printf("0. Salir. \n");
		printf("\nIngrese numero segun operacion a realizar: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: insertarElemento(*&pila, n);
		break;
		case 2: borraElemento(*&pila);
		break;
		case 3: borrarPila(*&pila);
		break;
		case 4: mostrarElementos(*&pila);
		break;
		case 5: menuPrincipal(*&pila, n, *&frente, *&fin, *&Siguiente, *&nuevo_nodo, p);
		break;
		case 0: exit (0);
		break;
		default: printf ("\nOpcion no valida.\n");
		}
	}
}

//==============================================================================

void insertarElemento(nodo *&pila,int n){
	
	system("cls");
	
	printf ("\ningrese el dato: ");
	scanf("%d",&n);
	
	nodo *nuevo_nodo= new nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	printf("\nEl dato %d se agrego correctamente a la pila\n\n",n );
}

//==============================================================================

void borrarPila(nodo *&pila){
	
	system("cls");
	
	while(pila!=NULL){
		nodo *aux=pila;
		// n=aux->dato;
		pila=aux->siguiente;
		printf("Borrando el dato %d",aux->dato);
		printf("\n" );
		delete aux; 
	}
}

//==============================================================================

void borraElemento(nodo *&pila){
	
	system("cls");
	
	nodo *aux=pila;
	pila=aux->siguiente;
	printf("Se borro el dato %d",aux->dato);
	printf("\n");
	delete aux; 
}

//==============================================================================

void mostrarElementos(nodo *&pila){
	
	system("cls");
	
	nodo *Nueva_Pila = pila;
	
	if(pila==NULL){
		printf("\nLa pila esta vacia!\n");
	}else if(Nueva_Pila != NULL){
		printf("\n");
		printf("\nlos elementos de la pila son: ");
		while(Nueva_Pila != NULL){
			printf("%d,",Nueva_Pila->dato);
			Nueva_Pila = Nueva_Pila->siguiente;
		}
	}else{
		printf("\n%d.",Nueva_Pila->dato);
	}
	printf("\n");
}

//==============================================================================

void menuColas(Nodo *&frente, Nodo *&fin, Nodo *&Siguiente, Nodo *&nuevo_nodo, int n, int p){
	
	system("cls");
	
	int opcion;
	
	while (opcion!=0){
		
		printf("\n************* COLAS ***************\n");
		
		printf("\n1. Agregar dato a la cola. \n");
		printf("2. Eliminar todos los datos la cola. \n");
		printf("3. Eliminar un dato de la cola. \n");
		printf("4. Mostrar los datos de la cola. \n");
		printf("5. Regresar al menu principal. \n");
		printf("0. Salir. \n");
		printf("\nIngrese numero segun operacion a realizar: ");
		scanf("%d", &opcion);
		
		switch(opcion){
			
		case 1: pushcola(*&frente, *&fin, p);
		break;
		case 2: borrarCola(*&frente, *&fin, p);
		break;
		case 3: popcola(*&frente, *&fin, p);
		break;
		case 4: mostrarCola(*&frente, *&fin, *&Siguiente);
		break;
		case 5: menuPrincipal(*&pila, n, *&frente, *&fin, *&Siguiente, *&nuevo_nodo, p);
		break;
		case 0: exit (0);
		break;
		default: printf ("\nOpcion no valida.\n");
		}
	}
}

//==============================================================================

void pushcola(Nodo *&frente,Nodo *&fin, int p){
	
	system("cls");
	
	printf("\ningrese el dato: ");
	scanf("%d", &p);
	
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo ->Dato = p;
	nuevo_nodo -> Siguiente=NULL;
	
	if(colaVacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin -> Siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	printf("\nEl dato %d se agrego correctamente a la Cola\n",p );
}

//==============================================================================

void borrarCola(Nodo *&frente, Nodo *&fin, int p){
	
	system("cls");
	
	p=frente->Dato;
	
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		
		while(frente!=NULL){
			
			frente = frente -> Siguiente;	
			
		}
	}
	delete aux;
}

//==============================================================================

bool colaVacia(Nodo *frente){
	return (frente==NULL)?true : false;
}

//==============================================================================

void popcola(Nodo *&frente,Nodo *&fin,int p){
	
	system("cls");
	
	p=frente->Dato;
	
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> Siguiente;
	}
	delete aux;
}

//==============================================================================

void mostrarCola(Nodo *&frente, Nodo *&fin, Nodo *&Siguiente){
	
	system("cls");
	
	Nodo *cola;
	
	if(frente==NULL){
		printf("\nLa cola esta vacia!\n");
	}else{
		
		cola=frente;
		
		printf("\n");
		printf("\nlos elementos de la cola son: ");
		
		while(cola!=NULL){
			
			printf("%d,", cola->Dato);
			
			cola=cola->Siguiente;
		}	
	}
	
	printf("\n");
}
