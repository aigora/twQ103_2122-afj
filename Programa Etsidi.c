#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct valores{
	int numero;
	char palabra[100];
};

struct partida{
	int condin;
	int cont1;
	int cont2;
	int contg;
	int altr;
};
struct usuario{
	char nombre[20];
	char apellido[20];
};

void menu();
int aleatorio();

int main(){
	int n;
	int faltr=0;
	struct partida partida;
	struct usuario usuario;
	int altr2;
	int i = 0;
	char respuesta[100];
	char resp[15];
	partida.condin=1;
	int n_valores;
	printf("Antes de jugar define tus expectativas");
	printf("\nintroduce la cantidad de valores: ");
	scanf("%d", &n_valores);
	printf("\n");
	
	struct valores valores[n_valores];
	
	for( i = 0; i < n_valores; i++){
		printf("introduce las expectativas de %d: ", i+1);
		printf("\nnumero: ");
		scanf("%d", &valores[i].numero);
		fflush(stdin);
		printf("palabra: ");
		gets(valores[i].palabra);
		printf("\n");
	}
	
	for( i = 0; i < n_valores; i++){
		printf("\nvalores de %d: ", i+1);
		printf("\nel numero %d", valores[i].numero);
		printf("\nla palabra es %s", valores[i].palabra);
		printf("\n");
	}
	printf("\n");
	
	FILE*fichero;
		menu(&n);
		if(n==1){
		
			fichero=fopen("fichero.txt","w");
				if(fichero==NULL){
					printf("\nHa habido un error en la lectura, reinicie el programa.");
						return 0;
				}
				fflush(stdin);
			printf("\nEscribe tu nombre: ");
				fgets(usuario.nombre,20,stdin);
					fflush(stdin);
				printf("\nEscribe tu apellido: ");
				fgets(usuario.apellido,20,stdin);
					fflush(stdin);
				fprintf(fichero,"El nombre del jugador es %s %s",usuario.nombre,usuario.apellido);
				fclose(fichero);
				partida.condin=1;
				
									
				}
		else if(n==2){
			printf("\nTrabajo humildemente realizado por:");
			printf("\nAdrian Espinosa");
			printf("\nFederico Laorga");
				return 0;
		}
		else if(n==3){
			return 0;
		}
		if(partida.condin==1){
			aleatorio(altr2);
			partida.altr=altr2;	
			do{
			
				switch(partida.altr){
		case 1:{
		i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
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
				partida.cont2++;
			}
			else if(i==2){
				printf("\nTe has electrocutado debido a empujar al chico sin desconectarle de la corriente.");
				printf("\nHas salido vivo por los pelos.");
				partida.cont2++;
				
			}
			else if(i==3){
				partida.cont2++;
				
			}
			else{
				printf("\nEnhorabuena, para todas las que te han quedado el anterior cuatri no eres tan tonto.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
		case 2:{
			respuesta[100]=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEntras por primera vez a clase de informatica, te emociona aprendeer a programar ");
		printf("\n(Eso es porque todavia no has tenido que hacer el trabajo).");
		printf("\nPero bueno, ahora tienes que hacer el primer ejercicio");
		printf("\nEscribe Hello world: ");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"Hello world"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\nNi para esto sirves, te vas a julio.");
			partida.cont2++;
			}
		
			break;}
		case 3:{
			i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
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
				partida.cont2++;
			}
			else if(i==2){
				printf("\nHas escogido sabiamente, podria haber sido guay, pero lo cierto es que no tiene pinta.");
				partida.cont1++;
			}
			else{
				printf("\nLa muchacha ha tomado tu no como una falta de respeto y te ha golpeado con el cubo de rubik.");
				printf("\nAdemas el cubo se ha roto y te ha incriminado por romperlo, te han puesto una falta disciplinaria.");
				partida.cont2++;
			}
			break;}
		case 4:{
			i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\n En estadística te encuentras ante un ejercicio que va ligado");
		printf("\n a las cartas españolas y te pide saber si es posible ");
		printf("\n obtener el un valor que represente la fiabilidad de que te toquen 3 reyes seguidos, ¿que rama lo estudia?");
			do{
		printf("\n1)Continuidad.");
		printf("\n2)Probabilidad.");
		printf("\n3)Economía.");
		printf("\n4)Métodos numéricos.");
			scanf("%d",&i);}while(i<1||i>4);
			fflush(stdin);
			if(i==1){
				printf("\n Das verguenza ajena.");
				printf("\nOtra vez será.");
				partida.cont2++;
			}
			else if(i==3){
				printf("\nCambiate de carrera.");
				printf("\nEstás más perdido que un pedo en un jacuzzi.");
				partida.cont2;
				
			}
			else if(i==4){
				printf("\nNo sabes ni diferenciar las asignaturas que tienes, espabila.");
				partida.cont2++;
				
			}
			else{
				printf("\nEnhorabuena, eres de los pocos que no da pena.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
		case 5:{
	
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEstas en la cafe y ves a un profesor con mala cara y ganas de vomitar, ¿qué haces?");
	
			do{
				printf("\n1)Pasas de él y te vas con tus amigos.");
				printf("\n2)Le ayudas a llegar al baño.");
			
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>2);
			if(i==1){
				printf("\nNo sabes la que te viene encima, te dará clase el próximo cuatri.");
				partida.cont2++;
			}
		
			else{
				printf("\nTe dará clase el próximo cuatri, tienes una asigantura de free.");
		        partida.cont1++;
			}
			break;}
		case 6:{
			i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\n ¿Que materia estudia la cristalización y filtración?");
		
			do{
		printf("\n1). Teoría de Circuitos");
		printf("\n2). Operaciones básicas.");
	
			scanf("%d",&i);}while(i<1||i>2);
			fflush(stdin);
			if(i==1){
				printf("\n Das asco, fuera de aquí.");
				partida.cont2++;
			}
		
			else{
				printf("\nFelicidades, has abierto un libro.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
	 	case 7:{
	 			i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\n¿Que métodos se emplean en métodos numéricos (entre otros)?");
	
			do{
		printf("\n1) Le chatelier.");
		printf("\n2) Ión electrón.");
		printf("\n3) Runge-Kutta.");
		
			scanf("%d",&i);}while(i<1||i>4);
			fflush(stdin);
			if(i==1){
				printf("\nEres de ingeniería química o tonto.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nNo sabes ni de que hablas.");
				partida.cont2++;
				
			}
		
			else{
				printf("\nBueno, se ve que no eres tan inútil como yo pensaba.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
		case 8:{
				i=0;
			
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEl club deportivo ha promocionado un torneo de free para que observar el nivel");
		printf("\nde la uni y dar espectáculo. Para el mismo, se han apuntado concursantes como Regs,JM...");
		printf("\n¿Con que concursante irías?");
	
			do{
		printf("\n1) Regs.");
		printf("\n2) JM.");
		printf("\n3) Escobar.");
		
			scanf("%d",&i);}while(i<1||i>3);
			fflush(stdin);
			if(i==1){
				printf("\nEres bobo, se metieron con el ayudándose de la fauna gallega y nacional.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nTienes cositas pero perdió en la final.");
				partida.cont2++;
				
			}
		
			else{
				printf("\nSe puso juguetón y se quedó solo.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
		case 9:{
				i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn referencia a la asignatura de medio ambiente");
		printf("\n¿En que lugar se produce los tratamientos de aguas contaminadas?");
	
	
			do{
		printf("\n1) Laboratorios.");
		printf("\n2) Canales.");
		printf("\n3) EDARS.");
		
			scanf("%d",&i);}while(i<1||i>3);
			fflush(stdin);
			if(i==1){
				printf("\nVete a explorar a uno que te hace falta.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nVete al de Isabel II y nos haces un favor.");
				partida.cont2++;
				
			}
		
			else{
				printf("\nEn efecto, usted sabe.");
				printf("\nPasas a la siguiente sala");
				partida.cont1++;
			}
				
			break;}
		case 41:{
			i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a Exp.Ing.QuimI, ¿cual es el uso principal de la fenolftaleina?.");
		
			do{
				printf("\n1)Un indicador.");
				printf("\n2)Una droga empleada en medicina.");
				printf("\n3)Un regulador de pH.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nUsted es una máquina de matar(pero no llegas al nivel de Regs).");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nDeja de fumar que vas a acabar en un centro de desintoxicación.");
				partida.cont2++;
			}
			else{
				printf("\nLo importante es la intención.");
		        partida.cont2++;
			}
			break;}
		case 11:{
				i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nVas a entrar en el laboratorio de traccion de ciencia de materiales");
			printf("\n y el profesor del laboratorio te pide que tomes medidas con el calibre de la pieza");
			printf("\n pero lo unico de lo que te acuerdas de como medir con el calibre");
			do{
				printf("\n1)Te miras a hurtadillas el video de como medir con el calibre.");
				printf("\n2)Te inventas las medidas y que sea lo que sea.");
				printf("\n3)Le pides ayuda al profesor y le dices que no te acuerdas.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEl profesor te ha pillado mirando el movil en el laboratorio y para ver si prestas atencion te ha hecho una pregunta.");
				printf("\nObviamente no la sabes reponder, asique te ha suspendido el laboratorio y te vas a julio.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nPodrias haber intentado inventartelo a ojimetro, has dicho que mide 5 cm de ancho y como mucho mide uno,");
				printf("\nel profesor te ha dicho que por no prepararte la practica vas a tener que repetirla el anho que viene.");
				partida.cont2++;
			}
			else{
				printf("\nTe la has jugado, podras habertela jugado pero lo cierto es que la sinceridad es la mejor virtud.");
				printf("\nEl profe te lo ha explicado, lo has entendido y al final le has caido bien, te ha inflado la nota por enchufe.");
				partida.cont2++;
			}
			
			break;}
		case 12:{
				i=0;
				int j=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
				printf("\nEstas  jugando al mus en la terraza, pero es la primera vez que jugas");
				printf("\nLlebas tres reyes y un as, pero no sabes si el rey vale 12 o 10 y no sabes que hacer.");
				printf("\n ¿Cual es la puntucion que vale el rey y cual el el sumatorio de puntos totales?");
					scanf("%i",&i);
						fflush(stdin);
					scanf("%i",&j);
						fflush(stdin);
						
							if(i==10&&j==31){
								printf("\nHas ganado el ordago, angel te he dicho que tienes suerte y no sabes jugar");
								printf("\nEl tio tiene razon, pero le has ganado, asiq se jode");
								partida.cont1++;
							}
							else{
								printf("\nHas perdido el ordago contra el postre, angel se ha reido de ti y ahora eres el azmerreir de la uni.");
								partida.cont2++;
							}
			break;}
		case 13:{
					i=0;
				printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEres medio buenillo en los deportes en general y Regs te propone unirte al torneo mixto de volley.");
			printf("\nQuieres ganarlo porque te regalan una entrada a la fietsidi y eres pobre por pagar la 6ta matricula de infor ");
			printf("\n asi que decides buscarte un buen equipo, ¿que haces?");
			do{
				printf("\n1)Tiras de contactos y te unes al equipo del capi de volley.");
				printf("\n2)Regs te insiste mucho y acabas en su equipo.");
				printf("\n3)Como sabes que no vas a ganar decides vender tu peluco para pagar la entrada.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nHas tenido que hacerle la pelota al capi pero has entrado y habeis ganado el torneo porque era buenisimo.");
				printf("\nAl final la fiesta no fue para tanto, pero bueno, al menos fue gratis.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nRegs es mas malo que las notas del primer examen de fisica, ademas cada vez que gana un punto se hace el chulo.");
				printf("\nNo solo has perdido todos los partidos, sino que tambien la poca dignidad que te quedaba.");
				partida.cont2++;
			}
			else{
				printf("\nLa fiesta fue bastante cutre, has tenido que vender el peluco que te regalo tu abuela por la comunion.");
				printf("\nAdemas d eno pasartelo bien ibas tan borracho que te robaron la cartera y el tabaco, no sirves ni para salir de fiesta.");
				partida.cont2++;
			}
				
				break;}
		case 14:{
				resp[15]=0;
					printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEstas en el primer examen de quimica, no has dormido, ayer saliste de fiesta ");
		printf("\n y por el unico motivo que sigues vivo es por los 12 monsters que lleavs encima.");
		printf("\nVas tan confuso que no sabes como se escribe la formula del agua");
		printf("\nEscribela, teniendo en cuenta que cuenta con dos consonantes, un numero y que las consonantes van en MAYUSCULAS: ");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"H2O"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, has suspendido el examen, pero al menos sabes cual es la formula del agua.");
			partida.cont1++;
			}
			else{
			printf("\nNo solo has suspendido el examen si no que ademas la profesora se ha reido de ti en cuanto le has entregado el examen.");
			partida.cont2++;
			}
				
				break;
			}
		case 15:{
					i=0;
				printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEs tu primer año en la uni y vas a tener el priner exanen de fisica 1, no vas preocupado porque llevas todos .");
			printf("\nlos tipos de problemas muuy bien preparados y tev hsa hecho todos los ejerccicios de examenes desde el año 95");
			printf("\nY mira tu la sorpresa que por primera vez en 26 años caen cuatro puntos de teoria, ¿que haces?");
			do{
				printf("\n1)Sacas el movil y copias, total hay mucha gente haciendolo.");
				printf("\n2)Ves que los dos problemas los sabes hacer, asi que prescindes de copar, total, solo necesitas un 5.");
				printf("\n3)Entras en panico y pierdes la  concentracion, no te acuerdas de nada y suspendes.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nCOPIAR ESTA MAL, NO DEBES HACERLO.");
				printf("\nPero bueno, has sacado un 10 y un aprobado son 6 creditos, ni tan mal.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nPese a haber hecho lo correcto y no haber seguido el camino del mal has suspendido.");
				printf("\nHas sacado un 4.98 y no te han subido en la revision");
				partida.cont2++;
			}
			else{
				printf("\nEsta no es una universidad para debiles, si estas estresado, una lloradita  rapida y a seguir.");
				printf("\nAdemas de no haber aprobado, eres un lloron.");
				partida.cont2++;
			}
			
				
				break;
			}
		case 16:{
					i=0;
				printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEstas en tu primer examen de calculo de la uni, necesitas ir al baño, pero llegas tarde y te da miedo que no te deje entrar.");
			printf("\n¿Que haces?");
			do{
				printf("\n1)Aguantas todo lo que puedes, llevas muy bien el examen y lo puedes terminar rapido.");
				printf("\n2)Le pides permiso a la profesrora para ir al banho antes de entrar.");
				printf("\n3)Decides ir rapidamente al baño antes de entrar.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nTodo lo que has podido no es suficiente, has acabado orinandote encima.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nLa profesora dice que no te ha visto una sola vez en su clase, y quen no te va a hacer ese favor.");
				printf("\nNo solo has la profesora te odia si no que ademas a tenido que dejar el examen a medias para ir al baño.");
				partida.cont2++;
			}
			else{
				printf("\nLo cierto es que ese minuto que has invertido en ir al baño es lo correcto, has entrado en clase.");
				printf("\ny ni siquiera la profesora habia empezado a repartir examenes, has sacado un 10.");
				partida.cont1++;
			}
			break;
		}
		case 10:{
					i=0;
				printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEstas a mitad del laboratorio de quimica, pero no te has enterado de nada por estar jugando al clash royal.");
			printf("\nTe piden que le eches el  correspondiente reactivo al agua, pero no estas seguro de cual es.");
			printf("\n¿Que haces?");
			do{
				printf("\n1)Echas Na.");
				printf("\n2)Echas acido acetico suena peligroso pero no estas seguro.");
				printf("\n3)Echas una cosa de un bote en el que pone H2SO4 1M.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEse bote en el que pone Na, es sodio puro, ha habido una reaccion super violenta con el agua.");
				printf("\nEl vaso ha explotado y se te ha clavado un cristal en el ojo porque se te ha olvidado la pantalla en casa.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nEl acido acetico es vinagre, comoel primer laboratorio es de pHs");
				printf("\nlo has hecho bien y has podido continuar con el lab preguntadole a un compi.");
				partida.cont1++;
			}
			else{
				printf("\nHas ido muy mal preparado al laboratorio, es acido sulfurico, lo has echado sin proteccion y te has quemado");
				printf("\nla profesora se ha dado cuenta de que no tienes ni idea y te ha suspendido las practicas.");
				partida.cont2++;
			}
			
			break;
		}
		case 17:{
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nTe ha tocado un ente el cual da una asignatura cuyo no me atrevo a pronunciar ");
				i=0;
				for(i=0;i<10;i++){
					printf("Estas en la matricula numero %i de informatica y estas pagando %ieuros",i+1,i*127);
				}
				printf("\nTe la has sacado a la decima, ni tan mal");
				partida.cont2++;
			break;
		}
		case 18:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg);
		printf("\nEstas a mitad del examen de estadisca, necesitas un 8 para aprobar y ya llevas  ");
		printf("\nasegurado un ocho, pero no te acuerdas del nombre del metodo que se usa  para la determinacion de la distribucion normal.");
		printf("\n¿Cual es su  nombre?");
		printf("\nPista, lleva el nombre de un otros teoremas como el utilizado para el calculo de flujo a traves de una superficie  y empieza por G:");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"Gauss"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\nLa verdad, es que que te vayas a la recu de estadistica es muy triste, es una maria.");
			partida.cont2++;
			}
			break;
		}
		case 19:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEstas con uno de los mejores profesores de la etsidi, asensio, dios de ampliacion de matematicas.");
		printf("\nSabes que dando clases es muy bueno, pero tambien muy riguroso...");
		printf("\nAsension te pregunta que tipo de funcion utilizaras parahallar el valor de una funcion elevada al numero de euler, ¿cual es tu respuesta?:");
		printf("\nEscribe Hello world: ");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"ln(x)"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\nHas cometido uno de los mayores errores de tu vida, decepcionar a asensio :-().");
			partida.cont2++;
			}
			break;
		}
		case 20:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEstas en la terccera practica de experi 1, la verdad, es que no te has mirado el pdf.");
		printf("\nLa profesora te pregunta cual es el nombre del acido de tipo debil el cual es el principal componente del vinagre.");
		printf("\nPista, escribelo todo en minusculas, el nombre se parece a aceite:");
		printf("\nEscribe Hello world: ");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"acido acetico"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\nACIDO ACETICO!!!!Lo saben hasta los chavales de la eso que hacen el experimento de la cascara de huevo...");
			partida.cont2++;
			}
			break;
		}
		case 21:{
					i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEs el ultimo dia para realizar la entrega de maquinas electricas y solo te falta una pregunta.");
			printf("\nLa verdad es que no tienes mucha idea, pero siempre hay un tipo de rotor para el generador de .");
			printf("\ncorriente que es de uso habitual, ademas tiene un nombre gracioso, ¿cual es?");
			do{
				printf("\n1)Devanado.");
				printf("\n2)Bobinatron.");
				printf("\n3)Jaula de ardilla.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEl motor de rotor devanado  es verdad que es aampliamante utilizado, pero es mas habitual usar otros por su elevado coste.");
				printf("\nLa respuesta no esta del todo mal, pero lo cierto es que no tiene un nombre gracioso.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nNo te voy a negar que es el nombre mas gracioso, suena bastante a transformer.");
				printf("\nComo se nota que no has tocado los apuntes de maquinas.");
				partida.cont2++;
			}
			else{
				printf("\nEnhorabuena, no eres tan tonto como parecias, lo cierto es que has respondido bien, no te acostumbres");
				printf("\nla politecnica es un agujero negro de sufrimiento y dolor, solo has tenido suerte, recuerdalo.");
				partida.cont1++;
			}
			break;
		}
		case 22:{
					i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nEstas haciendo una practica de resistencia de materiales, es una asignatura facil, pero no te dejan utilizar");
			printf("\nel glosario de ejermplos de distribucion de cargas con diferentes tipos de empotramientos.");
			printf("\nAdemas te preguntan que es la flecha de una estructura y no tienes ni idea, ¿que crees que sera?.");
			
			do{
				printf("\n1)La distancia maxima que se comba una estructura desde sus puntos de apoyo respecto al eje y.");
				printf("\n2)La distancia maxima que se comba una estructura desde sus puntos de apoyo respecto al eje x.");
				printf("\n3)La tolerancia maxima de la estructura y la amplitud maxima que alcanzara cuando se produce la resonancia.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEstas hecho una maquina, sigue asi.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nEs cierto que hemos sido un poco perros, solo varia en una cosa, pero por lo general se trbaja en y");
				printf("\nEsta vez te lo damos por bueno, pero no te acostumbres, recuerda que estas en la UPM.");
				partida.cont1++;
			}
			else{
				printf("\nCon esta te has venido un poco arriba, has visto que sonaba muy tecnico y te has tirado a la piscina");
				printf("\nmejor atiende algo en clase o como minimo ve que parece que no la practicas mucho.");
				partida.cont2++;
			}
			break;
		}
		case 23:{	
					i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nLlevas solo dos semanas del cuatri y vas bastante confiado, estas yendo a la uni");
			printf("\npero no nos engañemos, la verdad es que te dedicas a jugar al mus, y eso que eres un paquete.");
			printf("\nCrees que deberias ir a clase y estudiar un  poco mas, ¿que haras para sacar el cuatri?.");
			
			do{
				printf("\n1)No ir todavia a clase, total todavia no ha empezado lo dificil.");
				printf("\n2)Jugar al mus e ir a clase y a la biblio de vez en cuando.");
				printf("\n3)Juga al mus por la mañana, no ir a clase y sacar los apuntes de wuolah y quedarte todas las noches hasta las 2 estudiando.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEse seria un buen plan de no ser porque eres un vago, llevas un mes y medio de clase y todavia no has ido.");
				printf("\nAl final has suspendido todos los parciales y te estas planteando dejarte 800 pavos en academias.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nTe has acostumbrado tanto a jugar al mus y poder fumar en la terraza que no aguantas mas de 30 minutos sin fumar");
				printf("\nPor ello no eres capaz de dar una clase entera y has suspendido todos lo parciales.");
				partida.cont2++;
			}
			else{
				printf("\nPese a parecer la opcion mas estupida, lo cierto es que te funciona, te has cansado del mus, pero no eres capaz de dormir mas de ");
				printf("\ntres horas al dia, pero bueno, tampoco va a distar mucho de tu vida laboral, asi que en realidad estas entrenado para el futuro.");
				partida.cont1++;
			}
			
			
			break;
		}
		case 24:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEsta vez es una pregunta facil de termodinamica, literalmente lo unico facil de esta asignatura.");
		printf("\n¿Serias capaz de decirme el nombre del proceso el cual es totalmente eficaz (e imaginario)?).");
		printf("\nPista, escribelo todo en minusculas, el proceso transforma todo el trabajo en energia sin perdidas, es el ciclo de ¿?:");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"carnot"};
			if(strcmp(respuesta,resp)==0){
				printf("\nNo te voy a dar ni la enhorabuena, era super facil, conformate con los 6 creditos.");
			partida.cont1++;
			}
			else{
			printf("\nSi no sabaes esto no creo ni que sepas que es un proceso adiabatico, en fin, eres la verguenza de los ingenieros...");
			partida.cont2++;
			}
			break;
		}
		case 25:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEstas en la segunda practica de fisica II, la practica del solenoide, ¿sabrias decirme que se produce sobre el segundo solenoide?.");
		printf("\nPista, escribelo en minusculas, ademas una parte del nombre coincide con una forma de llamar a los coches:");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"autoinduccion"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\n¿Como es que no sabes responder a esto, como has entrado a la ingenieria?, mejor metete en ADE.");
			partida.cont2++;
			}
			
			break;
		}
		case 26:{	
					i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nAhora va una pregunta facil sobre matodos numericos, pese a ser optativa esperemos que la hayas cursado");
			printf("\n¿Como se llama el metodo matemático que deriva del terorema de barrow que sirve para calcular la interseccion de una funcion");
			printf("\nmediante el uso de polinomios?.");
			
			do{
				printf("\n1)Binomio de Newtow.");
				printf("\n2)Interpolacion de Newton.");
				printf("\n3)Metodo de la transformada de lagrange.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nTio, eso es de segundo de bachillerato y sirve para calcular el polinomio que proviene de un binomio elevado a n.");
				printf("\ncuando hayas estudiado regresa, aqui no sirves.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nEfectivamente, seguramente no lo sepas hacer a mano, pero total con MATLAB puedes hacerlo con casi infinitas iteraciones");
				printf("\nasi que bien jugado.");
				partida.cont1++;
			}
			else{
				printf("\nLiteralmete he juntado varias palabras de calculo y ampli para que sonase a algo cientifico ");
				printf("\nmejorutiliza el ordenador para cosas mas utiles que mirar youtube.");
				partida.cont2++;
			}
			break;
		}	
		case 27:{
			resp[15]=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
		    printf("\nEn referencia a Ampliación de matemáticas, ¿que integrales se emplean para calcular volúmenes?.");
	    	printf("\nPista, escribelo en MAYUSCULAS y sin escribir INTEGRALES al comenzar");
			fgets(respuesta,100,stdin);
			fflush(stdin);
			char resp[15]={"TRIPLES"};
			if(strcmp(respuesta,resp)==0){
				printf("\nEnhorabuena, pasas de sala.");
			partida.cont1++;
			}
			else{
			printf("\nTu si que tienes pequeño el volumen cerebral para no sacar esto.");
			partida.cont2++;
			}
			
			break;
		}
	   	case 28:{
	   				i=0;
			printf("\nEstas en la sala %i.",partida.contg+1);
			printf("\nSi llegases tarde a clase y la puerta estuviera cerrada, ¿que harias? ");
			
			
			
			do{
				printf("\n1)Sudar e irte a la terraza.");
				printf("\n2)Meterte con silencio y sin molestar al profesor.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>2);
			if(i==1){
				printf("\nEres mi padre pero te va a quedar hasta el recreo, ya somos 2.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nAprobaras la carrera, pero no la vida");
				partida.cont1++;
			}
			
			
			break;
		}	
		case 29:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a Exp.Grafica, ¿donde emplearemos autocad en 3D?.");
		
			do{
				printf("\n1)Concepcion Espacial.");
				printf("\n2)Normalización.");
				
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>2);
			if(i==1){
				printf("\nUsted no hace dibujitos durante las  clases.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nNo sabes ni lo que estas viendo compañero.");
				partida.cont2++;
			}
			break;}
		case 30:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a la Quimica, ¿cómo conocera el valor del pH en una muestra?.");
		
			do{
				printf("\n1)Tabla periodica.");
				printf("\n2)Acido-Base.");
				printf("\n3)Polarización.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nUna tabla te hacia yo para estudiar.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nMuy bien tienes algo de cerebro.");
				partida.cont1++;
			}
			else{
				printf("\nYa se puede ir yendo.");
		        partida.cont2++;
			}
			break;}
	    case 31:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a Maquinas electricas, ¿cual es la parte en la que se produce movimiento?.");
		
			do{
				printf("\n1)Rotor.");
				printf("\n2)Estator.");
			
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEra para tontos no se emocione usted mucho.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nDeja la uni ya.");
				partida.cont2++;
			}
		
			break;}	
		case 32:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a la Algebra, ¿que parte de las matematicas engloba?.");
		
			do{
				printf("\n1)Algebra.");
				printf("\n2)Vectores.");
				printf("\n3)Probabilidad.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nAl menos sabes hablar jaja.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nCasi pero no.");
				partida.cont2++;
			}
			else{
				printf("\nDespierta amigo.");
		        partida.cont2++;
			}
			break;}
		case 33:{		
					i=0;
	
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a la biblio, ¿cómo tratará el material?.");
		
			do{
				printf("\n1)Lo quemas.");
				printf("\n2)Lo cuidas.");
				printf("\n3)Lo robas.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEres piromano.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nMuy bien tienes algo de cerebro.");
				partida.cont1++;
			}
			else{
				printf("\nEres un jugueton.");
		        partida.cont2++;
			}
			break;}
		case 34:{
						i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a los circuitos, ¿que tipos de corriente son los mas empleados?.");
		
			do{
				printf("\n1)Continua y alterna.");
				printf("\n2)Alterna y Regulable.");
				printf("\n3)Continua y eléctrica.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nUsted ha ido a clase.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nEres una castaña.");
				partida.cont2++;
			}
			else{
				printf("\nTraeme un cafe.");
		        partida.cont2++;
			}
			break;}
		case 35:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a la Economía, ¿cómo conseguirá información válida?.");
		
			do{
				printf("\n1)Improvisando.");
				printf("\n2)Mediante diapositivas y libros recomendados.");
				printf("\n3)Fumando.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nImprovisa en tu casa.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nEres responsable al menos.");
				partida.cont1++;
			}
			else{
				printf("\nTe fumas los creditos me da a mi.");
		        partida.cont2++;
			}
			break;}
		case 36:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a nivelación de ingles, ¿cómo planteara la asignatura?.");
		
			do{
				printf("\n1)Yendo a clase y practicando a diario.");
				printf("\n2)No yendo.");
				printf("\n3)Yendo directo al examen.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nUsted es correcto.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nEres un vago.");
				partida.cont2++;
			}
			else{
				printf("\nVas de travieso.");
		        partida.cont2++;
			}
			break;}
		case 37:{	
					i=0;
	
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a la delegación deportiva , ¿cómo conocera dicha fuente deportiva?.");
		
			do{
				printf("\n1)Pasando de ellos.");
				printf("\n2)Formando parte del equipo de algun deporte para ganar creditos.");
				printf("\n3)Escuchandoles y poco mas.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nEres un travieso.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nUsted sabe.");
				partida.cont1++;
			}
			else{
				printf("\nHay que ser mejor persona.");
		        partida.cont2++;
			}
			break;}
		case 38:{	
					i=0;
	
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn ciencia de materiales, ¿que compuesto es empleado en el diagrama de Fe-C?");
		
			do{
				printf("\n1)Ledeburita.");
				printf("\n2)Granito.");
				printf("\n3)Madera.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nTienes cositas.");
				partida.cont1++;
			}
			else if(i==2){
				printf("\nVete al parque anda.");
				partida.cont2++;
			}
			else{
				printf("\nDe eso estas hecho me da a mi.");
		        partida.cont2++;
			}
			break;}
		case 39:{
					i=0;
	
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a Exp.Grafica, ¿Son relevantes el uso de capas?Donde y por que.");
		
			do{
				printf("\n1)Solo en concepcion pues hay que destacar cosas sobre otras.");
				printf("\n2)En ninguna.");
				printf("\n3)Principalmente en normalizacion, acorde a las normas establecidas.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nSi a destacar circulos.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nAparta de mi camino.");
				partida.cont2++;
			}
			else{
				printf("\nUsted sabe de esto, felicidades.");
		        partida.cont1++;
			}
			break;}
		case 40:{
					i=0;
		printf("\nEstas en la sala %i.",partida.contg+1);
		printf("\nEn refencia a Teoria de circuitos, ¿que utensilio empleamos entre otros?.");
		
			do{
				printf("\n1)Matraces de diferentes tipos.");
				printf("\n2)Amperimetro.");
				printf("\n3)Pipeta.");
				
				scanf("%i",&i);
					fflush(stdin);
			}while(i<1||i>3);
			if(i==1){
				printf("\nSi para meter los cables.");
				partida.cont2++;
			}
			else if(i==2){
				printf("\nMuy bien tienes algo de cerebro.");
				partida.cont1++;
			}
			else{
				printf("\nDate una vuelta a tomar el aire anda .");
		        partida.cont2++;
			}
			break;
			}
		}
		partida.contg++;
	}while(partida.contg>13||partida.cont1>10||partida.cont2>3);
		}
		else{return 0;
		}
			if(partida.cont1==10){
			printf("\nEnhorabuena, has conseguido escapar de la UPM con vida, has tenido %i aciertos y %i fallos.",partida.cont1,partida.cont2);
				
				fichero=fopen("fichero.txt","w");
				if(fichero==NULL){
					printf("\nHa habido un error en la lectura, reinicie el programa.");
						return 0;
				}
				fprintf(fichero,"\nHas pasado por %i salas y has obtenido %i aciertos con %i fallos",partida.contg,partida.cont1,partida.cont2);
				fclose(fichero);
				
			}
			else if(partida.cont2==3){
				printf("\nLo sentimos, eres malisimo, mejor metete en inef, para la UPm no sirves, has tenido %i fallos y %i aciertos",partida.cont2,partida.cont1);
				fichero=fopen("fichero.txt","w");
				if(fichero==NULL){
					printf("\nHa habido un error en la lectura, reinicie el programa.");
						return 0;
				}
				fprintf(fichero,"\nHas pasado por %i salas y has obtenido %i aciertos con %i fallos",partida.contg,partida.cont1,partida.cont2);
				fclose(fichero);
			}
		return 0;
}
void menu(int *n){
	printf("\n*****Bienvenido a SCAPE FROM UPM*****");
	printf("\nEscoge una opcion para continuar");
		do{
	printf("\n1)Registrarse y empezar");
	printf("\n2)Ver creditos y cerrar partida");
	printf("\n3)Salir del juego\n");
		scanf("%i",n);
		}while(*n<1||*n>3);	
}
int aleatorio(int altr2){
	
	srand(time(NULL));
		altr2=(rand()%41)+1;
		
	return altr2;
}
