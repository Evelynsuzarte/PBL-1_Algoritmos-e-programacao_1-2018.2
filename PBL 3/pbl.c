	/*****************************************************************************************
	Problema 3 : SISTEMA PARA O SEMINÁRIO DE EXTENSÃO DA UEFS															 
	Autora: EVELYN SUZARTE FERNANDES 
	Componente curricular: MI-ALGORITMOS
	Tutor: ROBERTO BITTENCOURT
	Declaro que os códigos contidos nesse software são de completa autoria, 
	sem quaisquer conteúdos copiados da internet, de outra pessoa do grupo ou da classe,
	qualquer semelhança é mera conhecidência.
	*****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>								//Biblioteca para gerar os números aleatórios
#include <locale.h>								//Biblioteca para colocar acentuação
#define N 64									// Alocação do cadastro
#define X 64									// Alocação da avaliação


// STRUCT

typedef struct aprovados{				
		int codigo_aprovados ;
		char titulo_do_aprovados[50];
		char area_de_aprovados[50];
		char nome_autor_aprovados[50];
		char nome_orientador_aprovados[50];
		char nome_coautor_aprovados[50];
		char nome_coorientador_aprovados[50];
		char conceito_aprovados[50];
		float nota_aprovados;
} aprovados;	



// PROCEDIMENTOS
void menu();
void areas_de_conhecimento();
void comandos_de_finalizacao();
void remover_projeto();
void ver_programacao();
void saindo();



int main(){
	
	setlocale(LC_ALL,"portuguese");
	int selecao_menu = 0, selecao_menucadastro = 0, selecao_menuavalia = 0, selecao_menuprograma = 0,selecao_menusair = 0;
	int t=0,u=0;
	
	// DECLARACÕES DO CASE 1 **************************************************************
	char lendo[10];
	int contador = 0;
	int sair2;
	int b, i, selecionar_avaliacao;
	FILE *leitura_projetos;
	aprovados *lista_aprovados;
	
	
do{

	menu();
	scanf("%i", &selecao_menu);
	system("cls");
		switch(selecao_menu){
			case 1:											 //avaliacao dos projetos
				leitura_projetos = fopen("projetos_cadastrados.txt","r");
				if(leitura_projetos==NULL){
					printf("!!! Erro na abertura do arquivo !!! \n");
					system("pause");
					system ("clear");
					main();
				}	
				else{   
					fscanf(leitura_projetos,"%d",&contador);			//contagem de quantos projetos tem
					lista_aprovados = (aprovados *) malloc ( contador * sizeof(aprovados));		// alocação
				
					for(i=0; i<contador; i++){
						fgets(lendo, 10, leitura_projetos);
						fscanf(leitura_projetos,"%d",&lista_aprovados[b].codigo_aprovados);
						fgetc(leitura_projetos);
						fgets(lista_aprovados[b].titulo_do_aprovados, 150, leitura_projetos);
						fgets(lista_aprovados[b].area_de_aprovados, 150, leitura_projetos);
						fgets(lista_aprovados[b].nome_autor_aprovados, 150, leitura_projetos);
						fgets(lista_aprovados[b].nome_orientador_aprovados, 150, leitura_projetos);
						fgets(lista_aprovados[b].nome_coautor_aprovados, 150, leitura_projetos);
						fgets(lista_aprovados[b].nome_coorientador_aprovados, 150, leitura_projetos);
						b++;
					}
					fclose(leitura_projetos);
					
					printf("__________ AVALIAÇÃO DOS PROJETOS __________ \n\n");
					for(b=0; b<contador; b++){
					printf("Para fazer a avaliação dos projetos você deverá atribur um conceito (aprovado ou reprovado) e uma nota. \n\n");
						printf("CÓDIGO: %i \n", lista_aprovados[b].codigo_aprovados);
						printf("TÍTULO: %s", lista_aprovados[b].titulo_do_aprovados);
						printf("ÁREA DE CONHECIMENTO: %s", lista_aprovados[b].area_de_aprovados);
						printf("AUTOR PRINCIPAL: %s", lista_aprovados[b].nome_autor_aprovados);
						printf("ORIENTADOR: %s", lista_aprovados[b].nome_orientador_aprovados);
						printf("CO-AUTOR: %s", lista_aprovados[b].nome_coautor_aprovados);
						printf("COORIENTADOR: %s \n", lista_aprovados[b].nome_coorientador_aprovados);
						printf("Atribua um conceito: \n");
						printf("<1> APROVADO \t<2> REPROVADO\n>>");
						scanf("%i",&selecionar_avaliacao);
						switch(selecionar_avaliacao){
							case 1:
								printf("Atribua uma nota\n>>");
								scanf("%f",&lista_aprovados[b].nota_aprovados);
								strcpy(lista_aprovados[b].conceito_aprovados, "Aprovado");
								
								FILE *aprovados_projetos;
								aprovados_projetos = fopen("aprovados.txt","a");
								fprintf(aprovados_projetos,"%i\n",lista_aprovados[b].codigo_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].titulo_do_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].area_de_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].nome_autor_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].nome_orientador_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].nome_coautor_aprovados);
								fprintf(aprovados_projetos,"%s",lista_aprovados[b].nome_coorientador_aprovados);
								fprintf(aprovados_projetos,"Aprovado\n",lista_aprovados[b].conceito_aprovados);
								fprintf(aprovados_projetos,"%.1f\n",lista_aprovados[b].nota_aprovados);
								fprintf(aprovados_projetos,"\n");
								fclose(aprovados_projetos);
						
								system("cls");
								
								break;
							case 2:
								printf("!!! Você reprovou esse projeto !!! \n");
								system("cls");	
								break;
						}		
					} 				//for
				}				//else
					free(lista_aprovados);
				
					printf("Digite 0 para voltar ao menu:\n>>");
					scanf("%i",&sair2);
					system("cls");
				break;
				
			case 2:											// desistencias
				remover_projeto();				
				break;
			case 3:											//programacao
				ver_programacao();
				break;
			case 4:											// sair
				saindo();
				break;		 	
		}													// switch
		getchar();									
		
	}while(sair2==0);			
}															//  main
		



// PROCEDIMENTOS

void menu(void){
	setlocale(LC_ALL,"portuguese");
	printf("************************************************************************************* \n");
	printf("*** SEJA BEM VINDO AO SISTEMA REGISTRADOR DE SEMINÁRIOS DE EXTENSÃO DA UEFS *** \n");
	printf("************************************************************************************* \n\n");
	printf("MENU\n\nDigite a opção desejada:\n");
	printf("<1> AVALIAÇÃO DOS PROJETOS \n<2> REMOVER PROJETO\n<3> PROGRAMAÇÃO \n<4> SAIR \n>>");
}
void areas_de_conhecimento(){
	printf("<1> Ciências da Saúde\n<2> Ciências Exatas\n<3> Ciências Agrárias\n<4> Engenharias\n<5> Ciências Sociais Aplicadas\n<6> Ciências Humanas\n<7> Linguística, Letras e Artes\n>>");
}
void comandos_de_finalizacao(void){				// funcoes de finalizacao
		system("pause");		
		system("cls");
}

void remover_projeto(){					//FAZER

	int buscar = 0, i,j;
	int qnt;
	aprovados aux;
	int sair;

	aprovados *lista_aprovados;
	
	
	FILE *ler_quant;

	printf("___________ REMOVER PROJETO ___________ \n\n");
	printf("Para remover digite o código do projeto: \n>>");
//do{
	scanf("%i", &buscar);
	
	ler_quant = fopen ("aprovados.txt","r"); 	
	fscanf(ler_quant,"%d",&qnt);			//contagem de quantos  aprovados tem
	lista_aprovados = (aprovados *) malloc ( qnt * sizeof(aprovados));

	fclose(ler_quant);
	
	for(i = 0; i < qnt; i++ ){ 
        if(lista_aprovados[i].codigo_aprovados == buscar )   {
            for( j = i; j < qnt - 1; j++ )
                lista_aprovados[j] = lista_aprovados[j+1];
				printf("\nProjeto removido! \n\n");
        	qnt--;
		}
		else
			printf("!! Código não encontrado !! \n");
}

		
	free(lista_aprovados);	
	comandos_de_finalizacao();
	main();
	
}
	
void ver_programacao(){
	int selecionar = 0;
	
	aprovados *lista_aprovados;
	lista_aprovados = (aprovados *) malloc ( X * sizeof(aprovados));		// alocação

	aprovados notas_ordenadas[65];
	aprovados areas_ordenadas[65];
	

	//ordenação por nota 
	int a,c,aux;
	int t = 64;	//tamanho do vetor
	for(a=1; a<t; a++){
		for(c=t-1; c>=a; c--){
			if(lista_aprovados[c-1].nota_aprovados < lista_aprovados[c].nota_aprovados){
				aux = lista_aprovados[c-1].nota_aprovados;
				lista_aprovados[c-1].nota_aprovados = lista_aprovados[c].nota_aprovados;
				lista_aprovados[c].nota_aprovados = aux;
			}
		}
	//notas_ordenadas[a]=lista_aprovados[c];
	}
	
	for(a=0; a<3 ; a++){
		printf("%f \n",lista_aprovados[a].nota_aprovados);
	}


	//ORDERNAR POR AREA
	//for(i=0; i<65; i++){
	//	lista_aprovados[i].area_de_aprovados == "Ci";
	/*
	for(a=1; a<t; a++){
		for(c=t-1; c>=a; c--){
			if(lista_aprovados[c-1].nota_aprovados > lista_aprovados[c].nota_aprovados){
				aux = lista_aprovados[c-1].nota_aprovados;
				lista_aprovados[c-1].nota_aprovados = lista_aprovados[c].nota_aprovados;
				lista_aprovados[c].nota_aprovados = aux;
			}
		}
	notas_ordenadas[a]=lista_aprovados[c];
	}
	*/
	
	//GRAVAÇÃO EM ARQUIVO BINÁRIO
	int i, h, m;
	FILE *binario;	
			
	binario = fopen("programacao.txt","wb");
	fwrite(notas_ordenadas, sizeof(aprovados),64, binario);
	fclose(binario);
	
	free(lista_aprovados);

	//VER PROGRAMAÇÃO
	printf("___________ VER PROGRAMAÇÃO ___________ \n\n");
	
	
	binario = fopen("programacao.txt", "rb");
	fread(notas_ordenadas, sizeof(aprovados),64, binario);

	printf("<1> POR DIA\n<2> POR ÁREA DE CONHECIMENTO\n>>");
	scanf("%i", &selecionar);
	switch(selecionar){
		case 1:
			printf("___________ PROGRAMAÇÃO POR DIA ___________ \n\n");
			printf("--- DIA 1 \n\n");
			printf("\t HORÁRIO - TITULO - ÁREA DE CONHECIMENTO\n\n");
			
			//printf("08:00 = %s - %s \n" , notas_ordenadas[0].titulo_do_aprovados, notas_ordenadas[0].area_de_aprovados );
		
			
			printf("--- DIA 2\n");
			printf("\t HORÁRIO - TITULO - ÁREA DE CONHECIMENTO\n\n");

			
			
			comandos_de_finalizacao();
			main();
			break;
		case 2:
			printf("___________ PROGRAMAÇÃO POR ÁREA DE CONHECIMENTO ___________ \n\n");
			break;	
		default:
			main();
		}	
		
	fclose(binario);
	free(lista_aprovados);	
	}
	
void saindo(){
	printf("SAINDO... \n\n ");
	exit(0);
}


/* OBS: Professor, a função do case 1 está na main porque eu estava como problema executar a função, não sei porque,
sendo que a função sozinha em outro arquivo funciona e também no meu computador não estava funcionando,só em outro
que fiz o teste, então por isso dificultou eu prosseguir.*/

