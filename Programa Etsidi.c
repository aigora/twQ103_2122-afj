#include <stdio.h>
#include <math.h>

int main() {
	
	printf("********BIENVENIDO********\n");
	printf("***********A*LA***********\n");
	printf("**********ETSIDI**********\n");
	printf("*******SCAPE***ROOM*******\n");
	
	int n,m;

    do{
    printf("\nIntroduce tu seleccion:\n1)Iniciar partida\n2)Creditos\n3)Cerrar sesion");
    scanf("%d",&n);
    }while(n>3||n<1);
    switch(n){
      
	  case 1:
      printf("\nSeleccione una carrera:\n1)Ing. Quimica\n2)Ing. mecanica\n3)Ing. electrica \n4)Ing. elctronica industrial y automatica \n5)Ing. en ingenieria industrial y desarrollo de producto");
      scanf("%d",&m);
        
          if(m==1){
          	printf("Usted se enfrentara a pruebas de Quimica,Termodinamica...entre otras");
          	break;
		  };
		  if(m==2){
		  	printf("Usted se enfrentara a pruebas de Fisica I,Fisica II...entre otras");
          	break;
		  }
      break;
    
	  case 2:
      printf("\nTrabajo realizado por:\nAdrian Espinosa\nFederico Laorga");
      return 0;
      break;
    
	  case 3:
      return 0;
	
    };
	return 0;
	
}
