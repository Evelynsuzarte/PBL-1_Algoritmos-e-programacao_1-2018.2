	/*****************************************************************************************
	Problema 2 : Enquetes flexíveis
	Software Gerador de pesquisas															 
	Autora: EVELYN SUZARTE FERNANDES 
	Componente curricular: MI-ALGORITMOS
	Tutor: ROBERTO BITTENCOURT
	Declaro que os códigos contidos nesse software são de completa autoria, 
	sem quaisquer conteúdos copiados da internet, de outra pessoa do grupo ou da classe,
	qualquer semelhança é mera conhecidência.
	*****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>								//Biblioteca para colocar acentuação
#include <string.h>
#define MENSAGEM_SAIDA "DIGITE 9 PARA VOLTAR AO MENU PRINCIPAL \n>> "
#define MENSAGEM_RESPOSTA "Digite o número correspondente a sua resposta, contando a partir do número 1: \n \n"
#define aloc 64


typedef struct dados{
	char curso[50];
	char sexo[15];
	int idade;
	int questao;
} dados;




// Procedimentos
void comandos_de_finalizacao(void);				// finalização após cada bloco
void lista_de_cursos(void);						// cursos
void sair();
void menu();


int main(){
	setlocale(LC_ALL, "Portuguese");			//Indicação de linguagem escolhida
	
		int sair1;
		int op= 0;								// seleção do menu

	
	
	FILE *ponteiro_respostas;					// ponteiro do arq de respostas
	FILE *ponteiro_escalas;						// ponteiro do arq de escalas
	FILE *ponteiro_perguntas;					// ponteiro do arq de perguntas
		
	int a = 0, b = 0, i = 0, j = 0, o = 0, q = 0, x = 0, w = 0, m = 0;	// variáveis de apoio

	char nome_do_arquivo_perguntas[100];		// nome do arquivo de perguntas
	char nome_arquivo_escalas[100];				// nome do arquivo de escalas
	char nome_curso[100];						// vetor para escrever o nome do curso
	int escolher_sexo;							//  escolher o sexo
	int responder_questao;						// entrada para responder as questoes
	int matriz_frequenciabsoluta[100][10]={0};	// matriz de frequencias de resposta

	char matriz_perguntas[100][300];		// matriz para armazenar perguntas
	int matriz_codigo[100];					// vetor para armazenar os codigos de escala das perguntas
	char matriz_nomedeescalas[10][10][300]; // matriz para armazenar os itens das escalas
	char matriz_escalas[300];				// vetor para armazenar as escalas
	int quant_perguntas=0;					// contador de perguntas
	int quant_escalas=0;					// contador de escalas
	int num_escalas[10];					// vetor para armazenar o numero da escala
	int tamanho_escala[10];					// quantidade de itens da escala
	char sexo[1000];						// matriz para armazenar o sexo
	int idades[1000];						// vetor para entrada de idade
	int matriz_de_respostas[1000][100];		// matriz armazenadora de respostas
	int indicadorquestao=1;					// indicador da questao
	
	int *ponteiro_de_codescalas;			// apontar a localização da escala 
	ponteiro_de_codescalas=matriz_codigo;
	int posicao_ponteiro_escalas;
	
	
	
	int matriz_frequencia[100][10];		//questoes x nivel de concordancia
	int resp;
	int t;


do{
	//menu do programa
	menu();
	scanf("%d",&op);
	getchar();
	system("cls");
	switch (op){
		case 1:
			printf("__________ ANEXAR QUESTIONÁRIO __________ \n");
				// anexar perguntas
				printf("DIGITE O NOME DO SEU ARQUIVO DE TEXTO DAS PERGUNTAS COLOCANDO ' .txt ' NO FINAL DO NOME. EXEMPLO: teste.txt \n!! LEMBRE-SE !! DEVE SER UM NOME COM NO MAXIMO 100 CARACTERES !! \n >> ");
			do{
				gets(nome_do_arquivo_perguntas);
			
				ponteiro_perguntas = fopen ("questoes.txt","r"); 

				//ponteiro_perguntas = fopen (nome_do_arquivo_perguntas,"r"); 
				if(ponteiro_perguntas==NULL){
					printf("!!! Erro ao abrir o arquivo !!! \n");
					printf("Digite novamente \n >>");
				}
				else{
					while(feof(ponteiro_perguntas)==0){
						fgets(matriz_perguntas[i], 100, ponteiro_perguntas);
						fscanf(ponteiro_perguntas,"%d", &matriz_codigo[j]);	
						fgetc(ponteiro_perguntas);
						i++;
						j++;
						quant_perguntas++;
					}
				}			
			}while(ponteiro_perguntas==NULL);
			
				fclose(ponteiro_perguntas);
				printf("\nQuestionário gravado!!! \nVISUALIZE SEU ARQUIVO: \n\n");
				for(j = 0; j < quant_perguntas ; j++ ){	
					printf("%s",matriz_perguntas[j]);	
				}	
				printf("\n");
				comandos_de_finalizacao();
				
				//anexar escalas
				printf("DIGITE O NOME DO SEU ARQUIVO DE TEXTO PARA OS TIPOS DE RESPOSTA COLOCANDO ' .txt ' NO FINAL DO NOME. EXEMPLO: teste.txt \n !! LEMBRE-SE !! DEVE SER UM NOME COM NO MAXIMO 100 CARACTERES !! \n >> ");
			do{
				gets(nome_arquivo_escalas);
				
				ponteiro_escalas = fopen ("tiposrespostas.txt","r"); 	

				
			//	ponteiro_escalas = fopen (nome_arquivo_escalas,"r"); 	
				if(ponteiro_escalas==NULL){
					printf("!!! Erro ao abrir o arquivo !!! \n");
					printf("Digite novamente \n >>");
				}
				else{
					i=0,j=0;
					while(feof(ponteiro_escalas)==0){
						fscanf(ponteiro_escalas,"%d", &num_escalas[o]);
						fscanf(ponteiro_escalas,"%d", &tamanho_escala[j]);
						fgetc(ponteiro_escalas);
						fgets(matriz_escalas, 300, ponteiro_escalas);
					while(matriz_escalas[i]!='\n'){
						if(matriz_escalas[i]!=','){
							matriz_nomedeescalas[q][w][x] = matriz_escalas[i];
							x++;
						}
						else if(matriz_escalas[i]==','){
							matriz_nomedeescalas[q][w][x] = '\0';
							w++;
							x=0;
						}
						i++;	
					}
						i=0;
						o++;
						q++;
						w=0;
						j++;
						x=0;
						quant_escalas++;
					}
				}					
			}while(ponteiro_escalas==NULL);
				
				fclose(ponteiro_escalas);
				printf(" \nEscalas gravadas!!! \nVISUALIZE SEU ARQUIVO: \n\n");
				for(q = 0; q < quant_escalas; q++){
					for(w = 0; w < 10 ; w++ ){	
							printf("%s",matriz_nomedeescalas[q][w]);	
							printf("\n");	
					}
				}
				
			comandos_de_finalizacao();
			
			
			
			dados *respostas;
			respostas = (dados*) malloc (aloc* sizeof (dados));
			
	
	for(i=0; i<aloc ; i++){
		// inicio da pesquisa
			printf("_______________ PESQUISA _______________ \nAntes de iniciar o questionário, vamos coletar seus dados. \n\n");
			ponteiro_respostas = fopen ("respostasdapesquisa.txt","a");// abrindo arquivo de respostas
			
			printf("DIGITE SEU CURSO: \n\n");		//seleção do curso
			lista_de_cursos();
			gets(respostas[i].curso);
			fprintf(ponteiro_respostas,"%s \n", respostas[i].curso);
			system("cls");
			
			printf("SELECIONE SEU SEXO:\n <1> Feminino \n <2> Masculino \n >>");		// seleção do sexo
		do{
			scanf("%i", &escolher_sexo);		
			switch(escolher_sexo){
				case 1:
					strcpy(respostas[i].sexo, "Feminino"); 
					fprintf(ponteiro_respostas,"%s \n",respostas[i].sexo);					
					break;
				case 2:
					strcpy(respostas[i].sexo, "Masculino"); 
					fprintf(ponteiro_respostas,"%s \n",respostas[i].sexo);		
					break;
				default:
					printf("!! SELECIONE NOVAMENTE !!");
				}
		}while(escolher_sexo!=1 && escolher_sexo!=2);
			system("cls");
			
			printf("DIGITE SUA IDADE: \n >> ");
			scanf("%d",&respostas[i].idade);
			fprintf(ponteiro_respostas,"%d\n",respostas[i].idade);
		
			printf("Dados gravados! \n");
			comandos_de_finalizacao();

					
			printf("AGORA VAMOS INICIAR O QUESTIONÁRIO \n");
			i=0,a=0,w=0;
				for(i=0;i<quant_perguntas;i++){ 
					posicao_ponteiro_escalas=*ponteiro_de_codescalas-1;	
					printf(MENSAGEM_RESPOSTA);
					printf("\n%d: %s",i+1,matriz_perguntas[i]);						
					for(w=0;w<tamanho_escala[posicao_ponteiro_escalas];w++){
						printf("%s \n",matriz_nomedeescalas[posicao_ponteiro_escalas][w]);
					}
					scanf("%d",&resp);
					matriz_frequencia[i][resp--]++;
					
					system("cls");
					fprintf(ponteiro_respostas,"%d ", resp);	
					
					ponteiro_de_codescalas++;
				}	
		}
			fprintf(ponteiro_respostas,"\n");
			fclose(ponteiro_respostas);
			printf("Questionário concluído ! \n\n");
			comandos_de_finalizacao();
			printf(MENSAGEM_SAIDA);
			scanf("%i",&sair1);			
			free(respostas);

				break; 
			case 2:
				printf("____________ RESULTADOS ____________ \n\n");
				printf("!!!! NÃO É POSSÍVEL VISUALIZAR OS RESULTADOS !!!! \n\n");
				printf(MENSAGEM_SAIDA);
				scanf("%i",&sair1);	
				system("cls");
				break;
			
			case 3:
				printf("____________ RESTAURAR PESQUISA ____________ \n\n");
				printf("!!!! NÃO É POSSÍVEL RESTAURAR AS PESQUISAS !!!! \n\n");
				printf(MENSAGEM_SAIDA);
				scanf("%i",&sair1);	
				system("cls");
				break;
				
			case 4: 
				sair();
			
					
			}			// CHAVE DO SWITCH CASE 
			comandos_de_finalizacao();
		

}while(sair1==9);	
	m++;
	return 0;
	
}


		
void comandos_de_finalizacao(void){				// funcoes de finalizacao
	system("pause");		
	system("cls");
}
void lista_de_cursos(void){						// funcao de lista de cursos
	printf("LISTA DE CURSOS: \n" );
	printf(" Engenharia Civil \n Engenharia da Computação \n Engenharia de Alimentos \n Matemática \n Física \n Química \n Administração \n Contábeis \n Economia \n Filosofia \n História \n Geografia \n Pedagogia \n Direito \n Psicologia \n Letras Vernáculas \n Letras Inglês \n Letras Francês \n Letras Espanhol \n Música \n Biologia \n Educação Física \n Enfermagem \n Odontologia \n Farmácia \n Medicina \n Agronomia \n >> ");
}

void sair(void){
	int opcao_sair;
	
	printf("____________ SAIR ____________ \n\n ");
	printf("Deseja sair do programa? \n<1> SIM \n<2> NÃO \n >>");
	scanf("%d", &opcao_sair);
	if(opcao_sair==1){
		exit(0);
	}
	else(opcao_sair==2);{
		main();
	}	
}

void menu(){
	printf("********************************************* \n");
	printf("***********  GERADOR DE PESQUISAS  ********** \n");
	printf("********************************************* \n");
	printf("Digite o número referente a cada opção \n\n");
	printf("MENU \n ");
	printf("<1> ANEXAR QUESTIONÁRIO \n <2> RESULTADOS \n <3> RESTAURAR PESQUISA \n <4> SAIR \n >> ");
}
