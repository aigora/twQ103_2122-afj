#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void aleatorio(int *altr);
void sala(int *altr);
int main(){
	int altr,cont1,cont2,cont;
	altr=0;
	cont1=0;
	cont2=0;
	cont=0;
	
	do{
	
	aleatorio(&altr,&cont1,&cont2,&cont);
	sala(&altr,&cont1,&cont2,&cont);
}while(cont1<11||cont2<4);
	
	

return 0;
}

void aleatorio(int *altr){
	
	srand(time(NULL));
		*(altr)=(rand()%4)+1;
}
void sala(int *altr, int *cont1, int *cont2,int *cont){
	int i;
	i=0; 
	char respuesta[100];

		do{
		
	
	switch(*altr){
		case 1:{
		
		printf("\nEstas en la sala %i.",*(cont1+1));
		printf("\nEntras en el lab de maquinas electricas para hacer la primera practica ");
		printf("\ny te encuentras a un compañero electrocutado porque las protecciones de ");
		printf("\nlos cables para las conexiones estaba rota¿Que haces?");
			do{
		printf("\n1)Le agarras y le intentas apartar del cable.");
		printf("\n2)Le empujas para apartarle del cable.");
		printf("\n3)Te vas de la carrera, tu no te apuntaste para esto.");
		printf("\n4)Pulsas el apagado de emergencia del generador.");
			scanf("%d",&i);}while(i<1||i>4);
			fflush(stdin);
			if(i==1){
				printf("\nTe has electrocutado debido a agarrar al chico sin desconectarle de la corriente.");
				printf("\nHas salido vivo por los pelos.");
				*cont2++;
			}
			else if(i==2){
				printf("\nTe has electrocutado debido a empujar al chico sin desconectarle de la corriente.");
				printf("\nHas salido vivo por los pelos.");
				*cont2++;
				
			}
			else if(i==3){
				printf("\nNo te echo la culpa, no es una mala decision, pero a la UPM se viene llorado de casa.");
				*cont2++;
				
			}
			else{
				printf("\nEnhorabuena, para todas las que te han quedado el anterior cuatri no eres tan tonto.");
				printf("\nPasas a la siguiente sala");
				*cont1++;
			}
				
			break;}
		case 2:{
			
		printf("\nEstas en la sala %i.",*(cont1+1));
		printf("\nEntras por primera vez a clase de informatica, te emociona aprendeer a programar ");
		printf("\n(Eso es porque todavia no has tenido que hacer el trabajo).");
		printf("\nPero bueno, ahora tienes que hacer el primer ejercicio");
		printf("\nEscribe Hello world: ");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"Hello world"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			*cont1++;
			}
			else{
			printf("\nNi para esto sirves, te vas a julio.");
			*cont2++;
			}
		
			break;}
		case 3:{
	
		printf("\nEstas en la sala %i.",*(cont1+1));
		printf("\nEstas entrando en el hall de la etsidi y te encuentras a una chica sola resoloviendo cubos de rubik.");
		printf("\nTe da un poco de penilla y decides hablar con ella haciendo que te interesa lo del club, total te dan creditos de gratis.");
		printf("\nLa chica te ofrece meterte al clb de cubo de rubik¿Que haces?");
			do{
				printf("\n1)Aceptas la proposicion para llevarte los creditos y hacerla feliz.");
				printf("\n2)Le dices que no te interesa, que no es lo tuyo.");
				printf("\n3)Le dices que no sabes, que ya le responderás otro día");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nNo sabes lo que has hecho, al final te has metido en el club y resulta que es un club de ocultismo.");
				printf("\nHan hecho un ritual satanico contigo y llevas meses desaparecido, no has podido ir a la recu de infor.");
				cont2++;
			}
			else if(i==2){
				printf("\nHas escogido sabiamente, podria haber sido guay, pero lo cierto es que no tiene pinta.");
				cont1++;
			}
			else{
				printf("\nLa muchacha ha tomado tu no como una falta de respeto y te ha golpeado con el cubo de rubik.");
				print("\nAdemas el cubo se ha roto y te ha incriminado por romperlo, te han puesto una falta disciplinaria.");
				cont2++;
			}
			break;}
		case 4:{
			
		
		
			printf("\nEstas en la sala %i.",*(cont1+1));
			break;}
		case 5:{
	
		
			printf("\nEstas en la sala %i.",*(cont1+1));
			break;}
			
			
	}
	
	*cont++;
}while(cont<14);
} 
