	/*****************************************************************************************
	Software de pesquisa sobre o medo da violencia e o apoio ao autoritarismo no brasil.
	Autora: EVELYN SUZARTE FERNANDES 
	Componente curricular: MI-ALGORITMOS
	Tutor: ROBERTO BITTENCOURT
	Concluido em: 
	Declaro que os códigos contidos nesse software são de completa autoria, 
	sem quaisquer conteúdos copiados da internet, de outra pessoa do grupo ou da classe,
	qualquer semelhança é mera conhecidência.
	*****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int idade, curso, sexo, pergunta, dados;
	int jovem = 0, adulto = 0, senhorsenhora = 0;
	int engenhariacivil = 0, medicina = 0, historia = 0, letrasvernaculas = 0;
	int pesquisados = 0;
	int fem=0, masc=0;
	int repet;
	int a1 = 0, b1 = 0 , c1 = 0 , d1 = 0 , e1 = 0 , f1 = 0 ;						// PARA A FREQ ABSOLUTA
	int a2 = 0, b2 = 0 , c2 = 0 , d2 = 0 , e2 = 0 , f2 = 0 ;
	int a3 = 0, b3 = 0 , c3 = 0 , d3 = 0 , e3 = 0 , f3 = 0 ;
	int a4 = 0, b4 = 0 , c4 = 0 , d4 = 0 , e4 = 0 , f4 = 0 ;
	int a5 = 0, b5 = 0 , c5 = 0 , d5 = 0 , e5 = 0 , f5 = 0 ;	
	int a6 = 0, b6 = 0 , c6 = 0 , d6 = 0 , e6 = 0 , f6 = 0 ;
	int a7 = 0, b7 = 0 , c7 = 0 , d7 = 0 , e7 = 0 , f7 = 0 ;
	int a8 = 0, b8 = 0 , c8 = 0 , d8 = 0 , e8 = 0 , f8 = 0 ;
	int a9 = 0, b9 = 0 , c9 = 0 , d9 = 0 , e9 = 0 , f9 = 0 ;
	int a10 = 0, b10 = 0 , c10 = 0 , d10 = 0 , e10 = 0 , f10 = 0 ;
	int a11 = 0, b11 = 0 , c11 = 0 , d11 = 0 , e11 = 0 , f11 = 0 ;
	int a12 = 0, b12 = 0 , c12 = 0 , d12 = 0 , e12 = 0 , f12 = 0 ;
	int a13 = 0, b13 = 0 , c13 = 0 , d13 = 0 , e13 = 0 , f13 = 0 ;
	int a14 = 0, b14 = 0 , c14 = 0 , d14 = 0 , e14 = 0 , f14 = 0 ;
	int a15 = 0, b15 = 0 , c15 = 0 , d15 = 0 , e15 = 0 , f15 = 0 ;
	int a16 = 0, b16 = 0 , c16 = 0 , d16 = 0 , e16 = 0 , f16 = 0 ;
	int a17 = 0, b17 = 0 , c17 = 0 , d17 = 0 , e17 = 0 , f17 = 0 ;



	int sub=0;
	float escore1=sub/5;				//CONTAGEM DOS ESCORES



	int escore2=0;
	int escore3=0;

	
	
	int a,b,c,d,e,f;

	int p1;


		float frq1ct=(a1*100)/pesquisados;

	


	//float fr = a1*100/total;     			    // CONTAGEM DE FREQUENCIA RELATIVA
	
	
	
	for(;;)	{ 
	
			printf ("******** QUESTIONARIO SOBRE MEDO DA VIOLENCIA E O APOIO AO AUTORITARISMO NO BRASIL ******** \n \n DIGITE SUA IDADE: \n");      // SELEÇÃO DE IDADE
		do{
		
			scanf("%i", &idade);
		
			
				if (idade <18 ){
						printf("VOCE NAO PODE REALIZAR ESTE QUESTIONARIO, DIGITE UMA IDADE VALIDA \n ");
				}	
				else if  (idade>=18 && idade<=20 ){
						jovem ++;
						printf("Bem vindo ao questionario! \n\n");
				}
				else if (idade>=21 && idade<=23 ) {
						adulto ++;
						printf("Bem vindo ao questionario! \n\n");
				}	
				else if (idade> 23 ) {
						senhorsenhora ++;
						printf("Bem vindo ao questionario! \n\n");
				}
		}while(idade<18);
					system("pause");
					system("cls");
		
		do{
			
			printf("Selecione o numero referente a seu curso: \n <1> Engenharia Civil \n <2> Medicina \n <3> Historia \n <4> Letras Vernaculas \n\n" );      //SELEÇÃO DO CURSO
			scanf("%i", &curso);
	
			switch(curso)
			{ 
				case 1 :
					engenhariacivil++;
					break;
			
				case 2 :
					medicina++;
					break;
			
				case 3:
					historia++;
					break;
			
				case 4 :
					letrasvernaculas++;
					break;
					
					default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(curso>4 || curso==0);
					system("cls");
			
					if(curso==1){
						
					}
			
			
			
		do{
		
			printf("Selecione o seu sexo: \n <1> Feminino \n <2> Masculino \n" );
			scanf("%i", &sexo);
				
			switch(sexo)
			{ 
				case 1 :
					fem++;
					break;
				
				case 2 :
					masc++;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(sexo>2 || sexo==0);
					system("cls");
	
			printf("AGORA VOCE VAI REALIZAR O QUESTIONARIO, TECLE OS DETERMINADOS NUMEROS PARA CADA QUESTAO \n ");       // INICIO DO QUESTIONARIO
		
		do{
			printf("*** Perguntas sobre SUBMISSAO A AUTORIDADE *** \n 1. O que este pais necessita principalmente, antes de leis ou planos politicos, eh de alguns lideres valentes, incansaveis e dedicados em quem o povo possa depositar a sua fe. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
	
			scanf("%i", &pergunta);
		
			switch (pergunta)
				{
			
				case 1:				
					a1++;
					a++;
					p1++;
					sub=sub+6;
					break;
					
				case 2 :	
					b1++;
					b++;
					p1++;
					sub=sub+5;
					break;
					
				case 3:			
					c1++;
					c++;
					p1++;
					sub=sub+4;
					break;
					
				case 4 :			
					d1++;
					d++;
					sub=sub+3;
					break;
					
				case 5:			
					e1++;
					e++;
					p1++;
					sub=sub+2;
					break;
					
				case 6 :			
					f1++;
					f++;
					p1++;
					sub=sub+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
		
		do{		
			printf("2.A obediencia e o respeito a autoridade sao as principais virtudes que devemos ensinar as nossas criancas. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:			
					a2++;
					a++;
					sub=sub+6;
					break;
					
				case 2 :
					b2++;
					b++;
					sub=sub+5;
					break;
					
				case 3:			
					c++;
					c2++;
					sub=sub+4;
					break;
					
				case 4 :			
					d2++;	
					d++;
					sub=sub+3;
					break;
					
				case 5:		
					e2++;
					e++;	
					sub=sub+2;
					break;
						
				case 6 :			
					f2++;	
					f++;
					sub=sub+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
				
		do{	
			printf("3. Nao ha nada pior do que uma pessoa que nao sente profundo amor, gratidao e respeito por seus pais. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			
				switch (pergunta)
				{
			
				case 1:			 
					a3++;
					a++;
					sub=sub+6;
					break;
					
				case 2 :			
					b++;
					b3++;
					sub=sub+5;
					break;
					
				case 3:			
					c++;
					c3++;
					sub=sub+4;
					break;
					
				case 4 :			
					d++;
					d3++;
					sub=sub+3;
					break;
					
				case 5:			
					e++;
					e3++;
					sub=sub+2;
					break;
					
				case 6 :			
					f++;
					f3++;
					sub=sub+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
		do{		
			printf("4. Nenhuma pessoa decente, normal e em seu sao juizo pensaria em ofender um amigo ou parente proximo. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
		
				switch (pergunta)
				{
			
				case 1:			
					a++;
					a4++;
					sub=sub+6;
					break;
					
				case 2 :		
					b++;
					b4++;
					sub=sub+5;
					break;
					
				case 3:		
					c++;
					c4++;
					sub=sub+4;
					break;
					
				case 4 :		
					d++;
					d4++;
					sub=sub+3;
					break;
					
				case 5:		
					e++;
					e4++;
					sub=sub+2;
					break;
					
				case 6 :		
					f++;
					f4++;
					sub=sub+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
				
		do{			
			printf("5. O policial eh um guerreiro de Deus para impor a ordem e proteger as pessoas de bem.\n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a5++;
					sub=sub+6;
					break;
					
				case 2 :	
					b++;
					b5++;
					sub=sub+5;
					break;
					
				case 3:		
					c++;
					c5++;
					sub=sub+4;
					break;
					
				case 4 :		
					d++;
					d5++;
					sub=sub+3;
					break;
					
				case 5:			
					e++;
					e5++;
					sub=sub+2;
					break;
					
				case 6 :		
					f++;
					f5++;
					sub=sub+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
		do{			
			printf("*** Perguntas sobre AGRESSIVIDADE AUTORITARIA *** \n 6.A maioria de nossos problemas sociais estaria resolvida se pudessemos nos livrar das pessoas imorais, dos marginais e dos pervertidos. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
			
				case 1:			
					a++;
					a6++;
					escore2=escore2+6;
					break;
					
				case 2 :		
					b++;
					b6++;
					escore2=escore2+5;
					break;
					
				case 3 :		
					c++;
					c6++;
					escore2=escore2+4;
					break;
					
				case 4 :			
					d++;
					d6++;
					escore2=escore2+3;
					break;
					
				case 5:			
					e++;
					e6++;
					escore2=escore2+2;
					break;
					
				case 6 :		
					f++;
					f6++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
			
			do{			
			printf("7.Se falassemos menos e trabalhassemos mais, todos estariamos melhor. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
			
				case 1:		
					a++;
					a7++;
					escore2=escore2+6;
					break;
					
				case 2 :		
					b++;
					b7++;
					escore2=escore2+5;
					break;
					
				case 3:
					c++;
					c7++;
					escore2=escore2+4;
					break;
					
				case 4 :		
					d++;
					d7++;
					escore2=escore2+3;
					break;
					
				case 5:		
					e++;
					e7++;
					escore2=escore2+2;
					break;
					
				case 6 :			
					f++;
					f7++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
			
		do{			
			printf("8.Deve-se castigar sempre todo insulto a nossa honra. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:			
					a++;
					a8++;
					escore2=escore2+6;
					break;
					
				case 2 :			
					b++;
					b8++;
					escore2=escore2+5;
					break;
					
				case 3:		
					c++;
					c8++;
					escore2=escore2+4;
					break;
					
				case 4 :		
					d++;
					d8++;
					escore2=escore2+3;
					break;
					
				case 5:		
					e++;
					e8++;
					escore2=escore2+2;
					break;
					
				case 6 :			
					f++;
					f8++;
					escore2=escore2+1;
					break;
			
				default:
					printf("NUMERO INVALIDO!! DIGITE NOVAMENTE \n"); 
			}	
			}while(pergunta>6 && pergunta==0);
				system("cls");
				
		do{		
			printf("9.Os crimes sexuais tais como o estupro ou ataques a criancas merecem mais que prisao; quem comete esses crimes deveria receber punição fisica publicamente ou receber um castigo pior. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1 :
					a++;
					a9++;
					escore2=escore2+6;
					break;
					
				case 2 :
					b++;
					b9++;
					escore2=escore2+5;
					break;
					
				case 3:
					c++;
					c9++;
					escore2=escore2+4;
					break;
					
				case 4 :
					d++;
					d9++;
					escore2=escore2+3;
					break;
					
				case 5:
					e++;
					e9++;
					escore2=escore2+2;
					break;
					
				case 6 :
					f++;		
					f9++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
		do{			
			printf("10.Os homossexuais sao quase criminosos e deveriam receber um castigo severo. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n " );
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a10++;
					escore2=escore2+6;
					break;
					
				case 2 :
					b++;
					b10++;
					escore2=escore2+5;
					break;
					
				case 3:
					c++;
					c10++;
					escore2=escore2+4;
					break;
					
				case 4 :
					d++;
					d10++;
					escore2=escore2+3;
					break;
					
				case 5:
					e++;
					e10++;
					escore2=escore2+2;
					break;
					
				case 6 :
					f++;
					f10++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
				
		do{				
			printf("11. As vezes, os jovens tem ideias rebeldes que, com os anos, deverao superar para acalmar os seus pensamentos. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a11++;
					escore2=escore2+6;
					break;
					
				case 2 :
					b++;
					b11++;
					escore2=escore2+5;
					break;
					
				case 3:
					c++;
					c11++;
					escore2=escore2+4;
					break;
					
				case 4 :
					d++;
					d11++;
					escore2=escore2+3;
					break;
					
				case 5:
					e++;
					e11++;
					escore2=escore2+2;
					break;
					
				case 6 :
					f++;
					f11++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
		do{	
			printf("12. Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a12++;
					escore2=escore2+6;
					break;
					
				case 2 :
					b++;
					b12++;
					escore2=escore2+5;
					break;
					
				case 3:
					c++;
					c12++;
					escore2=escore2+4;
					break;
					
				case 4 :
					d++;
					d12++;
					escore2=escore2+3;
					break;
					
				case 5:
					e++;
					e12++;
					escore2=escore2+2;
					break;
					
				case 6 :
					f++;
					f12++;
					escore2=escore2+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
		do{				
			printf("*** Perguntas sobre CONVENCIONALISMO *** \n 13. A ciencia tem o seu lugar, mas ha muitas coisas importantes que a mente humana jamais podera compreender. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a13++;
					escore3=escore3+6;
					break;
					
				case 2 :
					b++;
					b13++;
					escore3=escore3+5;
					break;
					
				case 3:
					c++;
					c13++;
					escore3=escore3+4;
					break;
					
				case 4 :
					d++;
					d13++;
					escore3=escore3+3;
					break;
					
				case 5:
					e++;
					e13++;
					escore3=escore3+2;
					break;
					
				case 6 :
					f++;
					f13++;
					escore3=escore3+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
				
		do{	
			printf("14. Os homens podem ser divididos em duas classes definidas: os fracos e os fortes. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a14++;
					escore3=escore3+6;
					break;
					
				case 2 :
					b++;
					b14++;
					escore3=escore3+5;
					break;
					
				case 3:
					c++;
					c14++;
					escore3=escore3+4;
					break;
					
				case 4 :
					d++;
					d14++;
					escore3=escore3+3;
					break;
					
				case 5:
					e++;
					e14++;
					escore3=escore3+2;
					break;
					
				case 6 :
					f++;
					f14++;
					escore3=escore3+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
		do{				
			printf("15.Um individuo de mas maneiras, maus costumes e ma educacao dificilmente pode fazer amizade com pessoas decentes. \n  <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a15++;
					escore3=escore3+6;
					break;
					
				case 2 :
					b++;
					b15++;
					escore3=escore3+5;
					break;
					
				case 3:
					c++;
					c15++;
					escore3=escore3+4;
					break;
					
				case 4 :
					d++;
					d15++;
					escore3=escore3+3;
					break;
					
				case 5:
					e++;
					e15++;
					escore3=escore3+2;
					break;
					
				case 6 :
					f++;
					f15++;
					escore3=escore3+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
			
		do{				
			printf("16. Todos devemos ter fe absoluta em um poder sobrenatural, cujas decisoes devemos acatar. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a1++;
					escore3=escore3+6;
					break;
					
				case 2 :
					b++;
					b16++;
					escore3=escore3+5;
					break;
					
				case 3:
					c++;
					c16++;
					escore3=escore3+4;
					break;
					
				case 4 :
					d++;
					d16++;
					escore3=escore3+3;
					break;
					
				case 5:
					e++;
					e16++;
					escore3=escore3+2;
					break;
					
				case 6 :
					f++;
					f16++;
					escore3=escore3+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
		do{			
			printf("17. Pobreza eh consequencia da falta de vontade de querer trabalhar \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
			
				case 1:
					a++;
					a17++;
					escore3=escore3+6;
					break;
					
				case 2 :
					b++;
					b17++;
					escore3=escore3+5;
					break;
					
				case 3:
					c++;
					c17++;
					escore3=escore3+4;
					break;
					
				case 4 :
					d++;
					d17++;
					escore3=escore3+3;
					break;
					
				case 5:
					e++;
					e17++;
					escore3=escore3+2;
					break;
					
				case 6 :
	
					f++;
					f17++;
					escore3=escore3+1;
					break;
			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
		
					
			
			printf("DIGITE:\n <1> PARA MOSTRAR OS RESULTADOS DA PESQUISA \n <2> PARA REALIZAR NOVA PESQUISA \n");				//APRESENTAÇÃO DOS DADOS DA PESQUISA
			scanf("%i", &dados);
			system("cls");
			
			if (dados==1){
				printf("***** RESULTADOS DA PESQUISA ***** \n");
				
				printf("____ FREQUENCIA ABSOLUTA ____ \n > SUBMISSAO A AUTORIDADE \n \n");       							// FREQ ABSOLUTA
			
				printf("1. O que este pais necessita principalmente, antes de leis ou planos politicos, eh de alguns lideres valentes, incansaveis e dedicados em quem o povo possa depositar a sua fe. \n");
				printf("Concordo completamente: %i ", a1);
				printf("\t Corcordo: %i" , b1);
				printf("\t Concordo parcialmente: %i \n ", c1);
				printf("Discordo parcialmente: %i ", d1);
				printf("\t Discordo: %i ", e1);
				printf("\t Discordo totalmente: %i \n\n", f1);
				
				printf("2.A obediencia e o respeito a autoridade sao as principais virtudes que devemos ensinar as nossas criancas.\n");
				printf("Concordo completamente: %i ", a2);
				printf("\t Corcordo: %i" , b2);
				printf("\t Concordo parcialmente: %i \n ", c2);
				printf("Discordo parcialmente: %i ", d2);
				printf("\t Discordo: %i ", e2);
				printf("\t Discordo totalmente: %i \n\n", f2);
			
				printf("3. Nao ha nada pior do que  uma pessoa que nao sente profundo amor, gratidao e respeito por seus pais.\n");
				printf("Concordo completamente: %i ", a3);
				printf("\t Corcordo: %i" , b3);
				printf("\t Concordo parcialmente: %i \n ", c3);
				printf("Discordo parcialmente: %i ", d3);
				printf("\t Discordo: %i ", e3);
				printf("\t Discordo totalmente: %i \n\n", f3);
				
				printf("4. Nenhuma pessoa decente, normal e em seu sao juizo pensaria em ofender um amigo ou parente proximo. \n");
				printf("Concordo completamente: %i ", a4);
				printf("\t Corcordo: %i" , b4);
				printf("\t Concordo parcialmente: %i \n ", c4);
				printf("Discordo parcialmente: %i ", d4);
				printf("\t Discordo: %i ", e4);
				printf("\t Discordo totalmente: %i \n\n", f4);
				
				printf("5. O policial eh um guerreiro de Deus para impor a ordem e proteger as pessoas de bem.\n");
				printf("Concordo completamente: %i ", a5);
				printf("\t Corcordo: %i" , b5);
				printf("\t Concordo parcialmente: %i \n ", c5);
				printf("Discordo parcialmente: %i ", d5);
				printf("\t Discordo: %i ", e5);
				printf("\t Discordo totalmente: %i \n\n", f5);
				
				printf("> AGRESSIVIDADE AUTORITARIA \n\n");
				
				printf("6.A maioria de nossos problemas sociais estaria resolvida se pudessemos nos livrar das pessoas imorais, dos marginais e dos pervertidos.\n");
				printf("Concordo completamente: %i ", a6);
				printf("\t Corcordo: %i" , b6);
				printf("\t Concordo parcialmente: %i \n ", c6);
				printf("Discordo parcialmente: %i ", d6);
				printf("\t Discordo: %i ", e6);
				printf("\t Discordo totalmente: %i \n\n", f6);
				
				printf("7.Se falassemos menos e trabalhassemos mais, todos estariamos melhor.\n");
				printf("Concordo completamente: %i ", a7);
				printf("\t Corcordo: %i" , b7);
				printf("\t Concordo parcialmente: %i \n ", c7);
				printf("Discordo parcialmente: %i ", d7);
				printf("\t Discordo: %i ", e7);
				printf("\t Discordo totalmente: %i \n\n", f7);
				
				printf("8.Deve-se castigar sempre todo insulto a nossa honra.\n");
				printf("Concordo completamente: %i ", a8);
				printf("\t Corcordo: %i" , b8);
				printf("\t Concordo parcialmente: %i \n ", c8);
				printf("Discordo parcialmente: %i ", d8);
				printf("\t Discordo: %i ", e8);
				printf("\t Discordo totalmente: %i \n\n", f8);
				
				printf("9.Os crimes sexuais tais como o estupro ou ataques a criancas merecem mais que prisao; quem comete esses crimes deveria receber punição fisica publicamente ou receber um castigo pior.\n");
				printf("Concordo completamente: %i ", a9);
				printf("\t Corcordo: %i" , b9);
				printf("\t Concordo parcialmente: %i \n ", c9);
				printf("Discordo parcialmente: %i ", d9);
				printf("\t Discordo: %i ", e9);
				printf("\t Discordo totalmente: %i \n\n", f9);
				
				
				printf("10.Os homossexuais sao quase criminosos e deveriam receber um castigo severo.\n");
				printf("Concordo completamente: %i ", a10);
				printf("\t Corcordo: %i" , b10);
				printf("\t Concordo parcialmente: %i \n ", c10);
				printf("Discordo parcialmente: %i ", d10);
				printf("\t Discordo: %i ", e10);
				printf("\t Discordo totalmente: %i \n\n", f10);
			
				printf("11. As vezes, os jovens tem ideias rebeldes que, com os anos, deverao superar para acalmar os seus pensamentos.");
				printf("Concordo completamente: %i ", a11);
				printf("\t Corcordo: %i" , b11);
				printf("\t Concordo parcialmente: %i \n ", c11);
				printf("Discordo parcialmente: %i ", d11);
				printf("\t Discordo: %i ", e11);
				printf("\t Discordo totalmente: %i \n\n", f11);
				
				printf("12. Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados.\n", a12);
				printf("Concordo completamente: %i ", a12);
				printf("\t Corcordo: %i" , b12);
				printf("\t Concordo parcialmente: %i \n ", c12);
				printf("Discordo parcialmente: %i ", d12);
				printf("\t Discordo: %i ", e12);
				printf("\t Discordo totalmente: %i \n\n", f12);
				
				printf("> CONVENCIONALISMO \n\n");
				
				printf("13. A ciencia tem o seu lugar, mas ha muitas coisas importantes que a mente humana jamais podera compreender.\n");
				printf("Concordo completamente: %i ", a13);
				printf("\t Corcordo: %i" , b13);
				printf("\t Concordo parcialmente: %i \n ", c13);
				printf("Discordo parcialmente: %i ", d13);
				printf("\t Discordo: %i ", e13);
				printf("\t Discordo totalmente: %i \n\n", f13);
				
				
				printf("14. Os homens podem ser divididos em duas classes definidas: os fracos e os fortes. \n");
				printf("Concordo completamente: %i ", a14);
				printf("\t Corcordo: %i" , b14);
				printf("\t Concordo parcialmente: %i \n ", c14);
				printf("Discordo parcialmente: %i ", d14);
				printf("\t Discordo: %i ", e14);
				printf("\t Discordo totalmente: %i \n\n", f14);
				
				
				printf("15.Um individuo de mas maneiras, maus costumes e ma educacao dificilmente pode fazer amizade com pessoas decentes.\n");
				printf("Concordo completamente: %i ", a15);
				printf("\t Corcordo: %i" , b15);
				printf("\t Concordo parcialmente: %i \n ", c15);
				printf("Discordo parcialmente: %i ", d15);
				printf("\t Discordo: %i ", e15);
				printf("\t Discordo totalmente: %i \n\n", f15);
				
				printf("16.Todos devemos ter fe absoluta em um poder sobrenatural, cujas decisoes devemos acatar. \n");
				printf("Concordo completamente: %i ", a16);
				printf("\t Corcordo: %i" , b16);
				printf("\t Concordo parcialmente: %i \n ", c16);
				printf("Discordo parcialmente: %i ", d16);
				printf("\t Discordo: %i ", e16);
				printf("\t Discordo totalmente: %i \n\n", f16);
								
				printf("17. Pobreza eh consequencia da falta de vontade de querer trabalhar. \n");
				printf("Concordo completamente: %i ", a17);
				printf("\t Corcordo: %i" , b17);
				printf("\t Concordo parcialmente: %i \n ", c17);
				printf("Discordo parcialmente: %i ", d17);
				printf("\t Discordo: %i ", e17);
				printf("\t Discordo totalmente: %i \n\n", f17);
				
				
				printf("FREQUENCIA RELATIVA: %f %% " , frq1ct);
				
				
			//	printf("ESCORE DE SUBMISSAO A AUTORIDADE: %f" , escore1);
				break;
		
			}
			
			else if(dados==2){
				continue;
			}
		
		pesquisados++;
	}
return 0;
		}

  
					


	
