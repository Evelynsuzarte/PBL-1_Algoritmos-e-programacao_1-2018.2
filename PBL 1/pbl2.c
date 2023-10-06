	/*****************************************************************************************
	Software de pesquisa sobre o medo da violencia e o apoio ao autoritarismo no brasil.
	Autora: EVELYN SUZARTE FERNANDES 
	Componente curricular: MI-ALGORITMOS
	Tutor: ROBERTO BITTENCOURT
	Declaro que os códigos contidos nesse software são de completa autoria, 
	sem quaisquer conteúdos copiados da internet, de outra pessoa do grupo ou da classe,
	qualquer semelhança é mera conhecidência.
	*****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
// VARIAVEIS DE ENTRADA
	int idade, curso, sexo, pergunta, dados;										
	int jovem = 0, adulto = 0, senhor = 0;
	int engcivil = 0, med = 0, hist = 0, letras = 0; 			
	int fem = 0, masc = 0;					
			
//SUBMISSAO A AUTORIDADE
	float ESCjovem = 0, ESCadulto = 0, ESCsenhor = 0;      						 	// ESCORE FAIXA ETARIA
	float ESCengcivil = 0, ESCmed = 0, ESChist = 0, ESCletras = 0;					//ESCORE DE CURSO
	float ESCfem = 0, ESCmasc = 0;													//ESCORE SEXO

	int ACjovem = 0, ACadulto = 0, ACsenhor = 0;								 	// ACUMULADORES PARA OS ESCORES FAIXA ETARIA
	int ACengcivil = 0, ACmed = 0, AChist = 0, ACletras = 0;						// ACUMULADORES PARA OS ESCORES CURSO
	int ACfem = 0, ACmasc = 0;														// ACUMULADORES PARA ESCORES SEXO

//AGRESSIVIDADE AUTORITARIA
	float ESCjovem1 = 0, ESCadulto1 = 0, ESCsenhor1 = 0;      					 	// ESCORE FAIXA ETARIA
	float ESCengcivil1 = 0, ESCmed1 = 0, ESChist1 = 0, ESCletras1 = 0;				//ESCORE DE CURSO
	float ESCfem1=0, ESCmasc1=0;													//ESCORE SEXO

	int ACjovem1 = 0, ACadulto1 = 0, ACsenhor1 = 0;									 // ACUMULADORES PARA OS ESCORES FAIXA ETARIA
	int ACengcivil1 = 0, ACmed1 = 0, AChist1 = 0, ACletras1 = 0;					// ACUMULADORES PARA OS ESCORES CURSO
	int ACfem1 = 0, ACmasc1 = 0;													// ACUMULADORES PARA ESCORES SEXO
	
// CONVENCIONALISMO
	float ESCjovem2 = 0, ESCadulto2 = 0, ESCsenhor2 = 0;      						 // ESCORE FAIXA ETARIA
	float ESCengcivil2 = 0, ESCmed2 = 0, ESChist2 = 0, ESCletras2 = 0;				//ESCORE DE CURSO
	float ESCfem2 = 0, ESCmasc2 = 0;												//ESCORE SEXO

	int ACjovem2 = 0, ACadulto2 = 0, ACsenhor2 = 0;							 		// ACUMULADORES PARA OS ESCORES FAIXA ETARIA
	int ACengcivil2 = 0, ACmed2 = 0, AChist2 = 0, ACletras2 = 0;					// ACUMULADORES PARA OS ESCORES CURSO
	int ACfem2 = 0, ACmasc2 = 0;													// ACUMULADORES PARA ESCORES SEXO
	
// FREQUENCIA ABSOLUTA	
	int a1 = 0, b1 = 0 , c1 = 0 , d1 = 0 , e1 = 0 , f1 = 0 ;						
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
	
// ESCORE MEDIO
	float escmediojovem, escmedioadulto, escmediosenhor;
	float escmedioengcivil, escmediomed, escmediohist, escmedioletras;
	float escmediofem, escmediomasc;

// IPA 	
	float ipajovem = 0, ipaadulto = 0, ipasenhor = 0;
	float ipaengcivil = 0, ipamed = 0, ipahist = 0, ipaletras = 0;
	float ipafem = 0, ipamasc = 0;
	
// FREQUENCIA RELATIVA
	int somaq1=0, somaq2=0 ,somaq3=0, somaq4=0, somaq5=0 ,somaq6=0, somaq7=0, somaq8=0, somaq9=0, somaq10=0, somaq11=0, somaq12=0, somaq13=0, somaq14=0, somaq15=0, somaq16=0, somaq17=0;
	
	float fra1=0, frb1=0, frc1=0, frd1=0, fre1=0, frf1=0;
	float fra2=0, frb2=0, frc2=0, frd2=0, fre2=0, frf2=0;
	float fra3=0, frb3=0, frc3=0, frd3=0, fre3=0, frf3=0;
	float fra4=0, frb4=0, frc4=0, frd4=0, fre4=0, frf4=0;
	float fra5=0, frb5=0, frc5=0, frd5=0, fre5=0, frf5=0;
	float fra6=0, frb6=0, frc6=0, frd6=0, fre6=0, frf6=0;
	float fra7=0, frb7=0, frc7=0, frd7=0, fre7=0, frf7=0;
	float fra8=0, frb8=0, frc8=0, frd8=0, fre8=0, frf8=0;
	float fra9=0, frb9=0, frc9=0, frd9=0, fre9=0, frf9=0;
	float fra10=0, frb10=0, frc10=0, frd10=0, fre10=0, frf10=0;
	float fra11=0, frb11=0, frc11=0, frd11=0, fre11=0, frf11=0;
	float fra12=0, frb12=0, frc12=0, frd12=0, fre12=0, frf12=0;
	float fra13=0, frb13=0, frc13=0, frd13=0, fre13=0, frf13=0;
	float fra14=0, frb14=0, frc14=0, frd14=0, fre14=0, frf14=0;
	float fra15=0, frb15=0, frc15=0, frd15=0, fre15=0, frf15=0;
	float fra16=0, frb16=0, frc16=0, frd16=0, fre16=0, frf16=0;
	float fra17=0, frb17=0, frc17=0, frd17=0, fre17=0, frf17=0;
		
	for(;;)	{ 																									// INICIO DA PESQUISA	
			printf("-------------------------------------------------------------------------------------------- \n");
			printf("******** QUESTIONARIO SOBRE O MEDO DA VIOLENCIA E O APOIO AO AUTORITARISMO NO BRASIL ******** \n ");
			printf("-------------------------------------------------------------------------------------------- ");
			printf("\n \n DIGITE SUA IDADE: \n");      // SELEÇÃO DE IDADE
		do{
			scanf("%i", &idade);
				if (idade <18 ){
						printf("VOCE NAO PODE REALIZAR ESTE QUESTIONARIO, DIGITE UMA IDADE VALIDA \n ");
				}	
				else if  (idade>=18 && idade<=20 ){
						printf("Bem vindo ao questionario! \n\n");	
				}
				else if (idade>=21 && idade<=23 ) {
						printf("Bem vindo ao questionario! \n\n");
				}	
				else if (idade> 23 ) {
						printf("Bem vindo ao questionario! \n\n");
				}				
		}while(idade<18);
					system("pause");
					system("cls");
					
						if(idade>=18 && idade<=20 ){
							jovem++;
						}else if(idade>=21 && idade<=23 ){
							adulto++;
						}else if(idade>23){
							senhor++;
						}
			
		do{
			printf("Selecione o numero referente a seu curso: \n <1> Engenharia Civil \n <2> Medicina \n <3> Historia \n <4> Letras Vernaculas \n\n" );      //SELEÇÃO DO CURSO
			scanf("%i", &curso);
			switch(curso)
			{ 
				case 1 :				
					break;
				case 2 :
					break;
				case 3:
					break;			
				case 4 :
					break;					
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}			
		}while(curso>4 || curso==0);
					system("cls");
			
						if(curso==1){
							engcivil++;
						}else if(curso==2){
							med++;
						}else if(curso==3){
							hist++;
						}else if(curso==4){
							letras++;
						}		
		do{	
			printf("Selecione o seu sexo: \n <1> Feminino \n <2> Masculino \n" );
			scanf("%i", &sexo);				
			switch(sexo)
			{ 
				case 1 :
					break;				
				case 2 :
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(sexo>2 || sexo==0);
				system("cls");
					
					if(sexo==1){
						fem++;
					}else if(sexo==2){
						masc++;
					}	
			printf("____ AGORA VOCE VAI REALIZAR O QUESTIONARIO, TECLE OS DETERMINADOS NUMEROS PARA CADA ALTERNATIVA ____ \n\n ");       // INICIO DO QUESTIONARIO
		
		do{
			printf("*** Perguntas sobre SUBMISSAO A AUTORIDADE *** \n 1. O que este pais necessita principalmente, antes de leis ou planos politicos, eh de alguns lideres valentes, incansaveis e dedicados em quem o povo possa depositar a sua fe. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");	
			scanf("%i", &pergunta);		
			switch (pergunta)
				{			
				case 1:				
					a1++;
					break;					
				case 2 :	
					b1++;
					break;					
				case 3:			
					c1++;
					break;					
				case 4 :			
					d1++;
					break;					
				case 5:			
					e1++;
					break;					
				case 6 :			
					f1++;
					break;
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}		
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil=ACengcivil+6;
								}	
								else if(curso==2){
									ACmed=ACmed+6;	
								}
								else if (curso==3){
									AChist=AChist+6;
								}
								else if(curso==4){
									ACletras=ACletras+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+6;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+6;
								}
								if (sexo==1){
									ACfem=ACfem+6;
								}
								else if(sexo==2){
									ACmasc=ACmasc+6;
								}
						}
						else if(pergunta==2){
								if(curso==1){
									ACengcivil=ACengcivil+5;
								}	
								else if(curso==2){
									ACmed=ACmed+5;	
								}
								else if (curso==3){
									AChist=AChist+5;
								}
								else if(curso==4){
									ACletras=ACletras+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+5;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+5;
								}
								if (sexo==1){
									ACfem=ACfem+5;
								}
								else if(sexo==2){
									ACmasc=ACmasc+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil=ACengcivil+4;
								}	
								else if(curso==2){
									ACmed=ACmed+4;	
								}
								else if (curso==3){
									AChist=AChist+4;
								}
								else if(curso==4){
									ACletras=ACletras+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+4;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+4;
								}
								if (sexo==1){
									ACfem=ACfem+4;
								}
								else if(sexo==2){
									ACmasc=ACmasc+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil=ACengcivil+3;
								}	
								else if(curso==2){
									ACmed=ACmed+3;	
								}
								else if (curso==3){
									AChist=AChist+3;
								}
								else if(curso==4){
									ACletras=ACletras+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+3;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+3;
								}
								if (sexo==1){
									ACfem=ACfem+3;
								}
								else if(sexo==2){
									ACmasc=ACmasc+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil=ACengcivil+2;
								}	
								else if(curso==2){
									ACmed=ACmed+2;	
								}
								else if (curso==3){
									AChist=AChist+2;
								}
								else if(curso==4){
									ACletras=ACletras+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+2;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+2;
								}
								if (sexo==1){
									ACfem=ACfem+2;
								}
								else if(sexo==2){
									ACmasc=ACmasc+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil=ACengcivil+1;
								}	
								else if(curso==2){
									ACmed=ACmed+1;	
								}
								else if (curso==3){
									AChist=AChist+1;
								}
								else if(curso==4){
									ACletras=ACletras+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+1;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+1;
								}
								if (sexo==1){
									ACfem=ACfem+1;
								}
								else if(sexo==2){
									ACmasc=ACmasc+1;
								}
						}
		do{		
			printf("2.A obediencia e o respeito a autoridade sao as principais virtudes que devemos ensinar as nossas criancas. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:			
					a2++;
					break;
				case 2 :
					b2++;
					break;		
				case 3:		
					c2++;
					break;					
				case 4 :			
					d2++;	
					break;					
				case 5:		
					e2++;
					break;						
				case 6 :			
					f2++;	
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil=ACengcivil+6;
								}	
								else if(curso==2){
									ACmed=ACmed+6;	
								}
								else if (curso==3){
									AChist=AChist+6;
								}
								else if(curso==4){
									ACletras=ACletras+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+6;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+6;
								}
								if (sexo==1){
									ACfem=ACfem+6;
								}
								else if(sexo==2){
									ACmasc=ACmasc+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil=ACengcivil+5;
								}	
								else if(curso==2){
									ACmed=ACmed+5;	
								}
								else if (curso==3){
									AChist=AChist+5;
								}
								else if(curso==4){
									ACletras=ACletras+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+5;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+5;
								}
								if (sexo==1){
									ACfem=ACfem+5;
								}
								else if(sexo==2){
									ACmasc=ACmasc+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil=ACengcivil+4;
								}	
								else if(curso==2){
									ACmed=ACmed+4;	
								}
								else if (curso==3){
									AChist=AChist+4;
								}
								else if(curso==4){
									ACletras=ACletras+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+4;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+4;
								}
								if (sexo==1){
									ACfem=ACfem+4;
								}
								else if(sexo==2){
									ACmasc=ACmasc+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil=ACengcivil+3;
								}	
								else if(curso==2){
									ACmed=ACmed+3;	
								}
								else if (curso==3){
									AChist=AChist+3;
								}
								else if(curso==4){
									ACletras=ACletras+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+3;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+3;
								}
								if (sexo==1){
									ACfem=ACfem+3;
								}
								else if(sexo==2){
									ACmasc=ACmasc+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil=ACengcivil+2;
								}	
								else if(curso==2){
									ACmed=ACmed+2;	
								}
								else if (curso==3){
									AChist=AChist+2;
								}
								else if(curso==4){
									ACletras=ACletras+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+2;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+2;
								}
								if (sexo==1){
									ACfem=ACfem+2;
								}
								else if(sexo==2){
									ACmasc=ACmasc+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil=ACengcivil+1;
								}	
								else if(curso==2){
									ACmed=ACmed+1;	
								}
								else if (curso==3){
									AChist=AChist+1;
								}
								else if(curso==4){
									ACletras=ACletras+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+1;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+1;
								}
								if (sexo==1){
									ACfem=ACfem+1;
								}
								else if(sexo==2){
									ACmasc=ACmasc+1;
								}
						}
		do{	
			printf("3. Nao ha nada pior do que uma pessoa que nao sente profundo amor, gratidao e respeito por seus pais. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
				case 1:			 
					a3++;
					break;					
				case 2 :			
					b3++;
					break;					
				case 3:			
					c3++;
					break;					
				case 4 :
					d3++;
					break;					
				case 5:
					e3++;
					break;					
				case 6 :
					f3++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
						if(pergunta==1){
								if(curso==1){
									ACengcivil=ACengcivil+6;
								}	
								else if(curso==2){
									ACmed=ACmed+6;	
								}
								else if (curso==3){
									AChist=AChist+6;
								}
								else if(curso==4){
									ACletras=ACletras+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+6;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+6;
								}
								if (sexo==1){
									ACfem=ACfem+6;
								}
								else if(sexo==2){
									ACmasc=ACmasc+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil=ACengcivil+5;
								}	
								else if(curso==2){
									ACmed=ACmed+5;	
								}
								else if (curso==3){
									AChist=AChist+5;
								}
								else if(curso==4){
									ACletras=ACletras+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+5;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+5;
								}
								if (sexo==1){
									ACfem=ACfem+5;
								}
								else if(sexo==2){
									ACmasc=ACmasc+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil=ACengcivil+4;
								}	
								else if(curso==2){
									ACmed=ACmed+4;	
								}
								else if (curso==3){
									AChist=AChist+4;
								}
								else if(curso==4){
									ACletras=ACletras+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+4;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+4;
								}
								if (sexo==1){
									ACfem=ACfem+4;
								}
								else if(sexo==2){
									ACmasc=ACmasc+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil=ACengcivil+3;
								}	
								else if(curso==2){
									ACmed=ACmed+3;	
								}
								else if (curso==3){
									AChist=AChist+3;
								}
								else if(curso==4){
									ACletras=ACletras+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+3;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+3;
								}
								if (sexo==1){
									ACfem=ACfem+3;
								}
								else if(sexo==2){
									ACmasc=ACmasc+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil=ACengcivil+2;
								}	
								else if(curso==2){
									ACmed=ACmed+2;	
								}
								else if (curso==3){
									AChist=AChist+2;
								}
								else if(curso==4){
									ACletras=ACletras+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+2;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+2;
								}
								if (sexo==1){
									ACfem=ACfem+2;
								}
								else if(sexo==2){
									ACmasc=ACmasc+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil=ACengcivil+1;
								}	
								else if(curso==2){
									ACmed=ACmed+1;	
								}
								else if (curso==3){
									AChist=AChist+1;
								}
								else if(curso==4){
									ACletras=ACletras+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+1;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+1;
								}
								if (sexo==1){
									ACfem=ACfem+1;
								}
								else if(sexo==2){
									ACmasc=ACmasc+1;
								}
						}	
		do{		
			printf("4. Nenhuma pessoa decente, normal e em seu sao juizo pensaria em ofender um amigo ou parente proximo. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
				case 1:	
					a4++;
					break;
				case 2 :
					b4++;
					break;
				case 3 :
					c4++;
					break;
				case 4 :
					d4++;
					break;
				case 5:	
					e4++;
					break;
				case 6 :
					f4++;
					break;
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
			
						if(pergunta==1){
								if(curso==1){
									ACengcivil=ACengcivil+6;
								}	
								else if(curso==2){
									ACmed=ACmed+6;	
								}
								else if (curso==3){
									AChist=AChist+6;
								}
								else if(curso==4){
									ACletras=ACletras+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+6;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+6;
								}
								if (sexo==1){
									ACfem=ACfem+6;
								}
								else if(sexo==2){
									ACmasc=ACmasc+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil=ACengcivil+5;
								}	
								else if(curso==2){
									ACmed=ACmed+5;	
								}
								else if (curso==3){
									AChist=AChist+5;
								}
								else if(curso==4){
									ACletras=ACletras+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+5;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+5;
								}
								if (sexo==1){
									ACfem=ACfem+5;
								}
								else if(sexo==2){
									ACmasc=ACmasc+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil=ACengcivil+4;
								}	
								else if(curso==2){
									ACmed=ACmed+4;	
								}
								else if (curso==3){
									AChist=AChist+4;
								}
								else if(curso==4){
									ACletras=ACletras+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+4;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+4;
								}
								if (sexo==1){
									ACfem=ACfem+4;
								}
								else if(sexo==2){
									ACmasc=ACmasc+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil=ACengcivil+3;
								}	
								else if(curso==2){
									ACmed=ACmed+3;	
								}
								else if (curso==3){
									AChist=AChist+3;
								}
								else if(curso==4){
									ACletras=ACletras+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+3;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+3;
								}
								if (sexo==1){
									ACfem=ACfem+3;
								}
								else if(sexo==2){
									ACmasc=ACmasc+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil=ACengcivil+2;
								}	
								else if(curso==2){
									ACmed=ACmed+2;	
								}
								else if (curso==3){
									AChist=AChist+2;
								}
								else if(curso==4){
									ACletras=ACletras+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+2;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+2;
								}
								if (sexo==1){
									ACfem=ACfem+2;
								}
								else if(sexo==2){
									ACmasc=ACmasc+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil=ACengcivil+1;
								}	
								else if(curso==2){
									ACmed=ACmed+1;	
								}
								else if (curso==3){
									AChist=AChist+1;
								}
								else if(curso==4){
									ACletras=ACletras+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+1;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+1;
								}
								if (sexo==1){
									ACfem=ACfem+1;
								}
								else if(sexo==2){
									ACmasc=ACmasc+1;
								}
						}
		do{			
			printf("5. O policial eh um guerreiro de Deus para impor a ordem e proteger as pessoas de bem.\n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a5++;
					break;
				case 2 :
					b5++;
					break;
				case 3:
					c5++;
					break;
				case 4 :
					d5++;
					break;
				case 5:	
					e5++;
					break;
				case 6 :
					f5++;
					break;
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil=ACengcivil+6;
								}	
								else if(curso==2){
									ACmed=ACmed+6;	
								}
								else if (curso==3){
									AChist=AChist+6;
								}
								else if(curso==4){
									ACletras=ACletras+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+6;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+6;
								}
								if (sexo==1){
									ACfem=ACfem+6;
								}
								else if(sexo==2){
									ACmasc=ACmasc+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil=ACengcivil+5;
								}	
								else if(curso==2){
									ACmed=ACmed+5;	
								}
								else if (curso==3){
									AChist=AChist+5;
								}
								else if(curso==4){
									ACletras=ACletras+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+5;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+5;
								}
								if (sexo==1){
									ACfem=ACfem+5;
								}
								else if(sexo==2){
									ACmasc=ACmasc+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil=ACengcivil+4;
								}	
								else if(curso==2){
									ACmed=ACmed+4;	
								}
								else if (curso==3){
									AChist=AChist+4;
								}
								else if(curso==4){
									ACletras=ACletras+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+4;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+4;
								}
								if (sexo==1){
									ACfem=ACfem+4;
								}
								else if(sexo==2){
									ACmasc=ACmasc+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil=ACengcivil+3;
								}	
								else if(curso==2){
									ACmed=ACmed+3;	
								}
								else if (curso==3){
									AChist=AChist+3;
								}
								else if(curso==4){
									ACletras=ACletras+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+3;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+3;
								}
								if (sexo==1){
									ACfem=ACfem+3;
								}
								else if(sexo==2){
									ACmasc=ACmasc+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil=ACengcivil+2;
								}	
								else if(curso==2){
									ACmed=ACmed+2;	
								}
								else if (curso==3){
									AChist=AChist+2;
								}
								else if(curso==4){
									ACletras=ACletras+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+2;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+2;
								}
								if (sexo==1){
									ACfem=ACfem+2;
								}
								else if(sexo==2){
									ACmasc=ACmasc+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil=ACengcivil+1;
								}	
								else if(curso==2){
									ACmed=ACmed+1;	
								}
								else if (curso==3){
									AChist=AChist+1;
								}
								else if(curso==4){
									ACletras=ACletras+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem=ACjovem+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto=ACadulto+1;
								}
								else if (idade>23){	
									ACsenhor=ACsenhor+1;
								}
								if (sexo==1){
									ACfem=ACfem+1;
								}
								else if(sexo==2){
									ACmasc=ACmasc+1;
								}
						}
		do{			
			printf("*** Perguntas sobre AGRESSIVIDADE AUTORITARIA *** \n 6.A maioria de nossos problemas sociais estaria resolvida se pudessemos nos livrar das pessoas imorais, dos marginais e dos pervertidos. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
				case 1:
					a6++;
					break;	
				case 2 :
					b6++;
					break;
				case 3 :
					c6++;
					break;
				case 4 :
					d6++;
					break;
				case 5:		
					e6++;
					break;
				case 6 :
					f6++;
					break;
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
			
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}
			do{			
			printf("7.Se falassemos menos e trabalhassemos mais, todos estariamos melhor. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
				switch (pergunta)
				{
				case 1:	
					a7++;
					break;	
				case 2 :
					b7++;
					break;
				case 3:
					c7++;
					break;
				case 4 :
					d7++;
					break;					
				case 5:	
					e7++;
					break;					
				case 6 :	
					f7++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}
			
			printf("8.Deve-se castigar sempre todo insulto a nossa honra. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
		do{		
			scanf("%i", &pergunta);
			switch (pergunta)
				{			
				case 1:	
					a8++;
					break;
				case 2 :	
					b8++;
					break;
				case 3:	
					c8++;
					break;					
				case 4 :	
					d8++;
					break;					
				case 5:		
					e8++;
					break;					
				case 6 :	
					f8++;
					break;			
				default:
					printf("NUMERO INVALIDO!! DIGITE NOVAMENTE \n"); 
			}	
		}while(pergunta>6 || pergunta==0);
				system("cls");
				
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}
		do{		
			printf("9.Os crimes sexuais tais como o estupro ou ataques a criancas merecem mais que prisao; quem comete esses crimes deveria receber punicao fisica publicamente ou receber um castigo pior. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1 :
					a9++;
					break;	
				case 2 :
					b9++;
					break;
				case 3:
					c9++;
					break;					
				case 4 :
					d9++;
					break;					
				case 5:
					e9++;
					break;					
				case 6 :		
					f9++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
		
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}		
		do{			
			printf("10.Os homossexuais sao quase criminosos e deveriam receber um castigo severo. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n " );
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a10++;
					break;					
				case 2 :
					b10++;
					break;					
				case 3:
					c10++;
					break;					
				case 4 :
					d10++;
					break;					
				case 5:
					e10++;
					break;					
				case 6 :
					f10++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}		
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}
		do{				
			printf("11. As vezes, os jovens tem ideias rebeldes que, com os anos, deverao superar para acalmar os seus pensamentos. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a11++;
					break;
				case 2 :
					b11++;
					break;					
				case 3:
					c11++;
					break;					
				case 4 :
					d11++;
					break;					
				case 5:
					e11++;
					break;					
				case 6 :
					f11++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}
		do{	
			printf("12. Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{			
				case 1:
					a12++;
					break;					
				case 2 :
					b12++;
					break;					
				case 3:
					c12++;
					break;					
				case 4 :
					d12++;
					break;					
				case 5:
					e12++;
					break;					
				case 6 :
					f12++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){																			
								if(curso==1){																		
									ACengcivil1=ACengcivil1+6;
								}	
								else if(curso==2){
									ACmed1=ACmed1+6;	
								}
								else if (curso==3){
									AChist1=AChist1+6;
								}
								else if(curso==4){
									ACletras1=ACletras1+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+6;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+6;
								}
								if (sexo==1){
									ACfem1=ACfem1+6;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil1=ACengcivil1+5;
								}	
								else if(curso==2){
									ACmed1=ACmed1+3;	
								}
								else if (curso==3){
									AChist1=AChist1+5;
								}
								else if(curso==4){
									ACletras1=ACletras1+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+5;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+5;
								}
								if (sexo==1){
									ACfem1=ACfem1+5;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil1=ACengcivil1+4;
								}	
								else if(curso==2){
									ACmed1=ACmed1+4;	
								}
								else if (curso==3){
									AChist1=AChist1+4;
								}
								else if(curso==4){
									ACletras1=ACletras1+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+4;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+4;
								}
								if (sexo==1){
									ACfem1=ACfem1+4;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil1=ACengcivil1+3;
								}	
								else if(curso==2){
									ACmed1=ACmed1+5;	
								}
								else if (curso==3){
									AChist1=AChist1+3;
								}
								else if(curso==4){
									ACletras1=ACletras1+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+3;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+3;
								}
								if (sexo==1){
									ACfem1=ACfem1+3;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil1=ACengcivil1+2;
								}	
								else if(curso==2){
									ACmed1=ACmed1+2;	
								}
								else if (curso==3){
									AChist1=AChist1+2;
								}
								else if(curso==4){
									ACletras1=ACletras1+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+2;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+2;
								}
								if (sexo==1){
									ACfem1=ACfem1+2;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil1=ACengcivil1+1;
								}	
								else if(curso==2){
									ACmed1=ACmed1+1;	
								}
								else if (curso==3){
									AChist1=AChist1+1;
								}
								else if(curso==4){
									ACletras1=ACletras1+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem1=ACjovem1+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto1=ACadulto1+1;
								}
								else if (idade>23){	
									ACsenhor1=ACsenhor1+1;
								}
								if (sexo==1){
									ACfem1=ACfem1+1;
								}
								else if(sexo==2){
									ACmasc1=ACmasc1+1;
								}
						}		
		do{				
			printf("*** Perguntas sobre CONVENCIONALISMO *** \n 13. A ciencia tem o seu lugar, mas ha muitas coisas importantes que a mente humana jamais podera compreender. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a13++;
					break;					
				case 2 :
					b13++;
					break;					
				case 3:
					c13++;
					break;					
				case 4 :
					d13++;
					break;					
				case 5:
					e13++;
					break;					
				case 6 :
					f13++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}				
		}while(pergunta>6 || pergunta==0);
					system("cls");
				
						if(pergunta==1){
								if(curso==1){
									ACengcivil2=ACengcivil2+6;
								}	
								else if(curso==2){
									ACmed2=ACmed2+6;	
								}
								else if (curso==3){
									AChist2=AChist2+6;
								}
								else if(curso==4){
									ACletras2=ACletras2+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+6;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+6;
								}
								if (sexo==1){
									ACfem2=ACfem2+6;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil2=ACengcivil2+5;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+5;
								}
								else if(curso==4){
									ACletras2=ACletras2+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+5;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+5;
								}
								if (sexo==1){
									ACfem2=ACfem2+5;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil2=ACengcivil2+4;
								}	
								else if(curso==2){
									ACmed2=ACmed2+4;	
								}
								else if (curso==3){
									AChist2=AChist2+4;
								}
								else if(curso==4){
									ACletras2=ACletras2+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+4;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+4;
								}
								if (sexo==1){
									ACfem2=ACfem2+4;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil2=ACengcivil2+3;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+3;
								}
								else if(curso==4){
									ACletras2=ACletras2+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+3;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+3;
								}
								if (sexo==1){
									ACfem2=ACfem2+3;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil2=ACengcivil2+2;
								}	
								else if(curso==2){
									ACmed2=ACmed2+2;	
								}
								else if (curso==3){
									AChist2=AChist2+2;
								}
								else if(curso==4){
									ACletras2=ACletras2+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+2;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+2;
								}
								if (sexo==1){
									ACfem2=ACfem2+2;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil2=ACengcivil2+1;
								}	
								else if(curso==2){
									ACmed2=ACmed2+1;	
								}
								else if (curso==3){
									AChist2=AChist2+1;
								}
								else if(curso==4){
									ACletras2=ACletras2+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+1;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+1;
								}
								if (sexo==1){
									ACfem2=ACfem2+1;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+1;
								}
						}
				
		do{	
			printf("14. Os homens podem ser divididos em duas classes definidas: os fracos e os fortes. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a14++;
					break;					
				case 2 :
					b14++;
					break;					
				case 3:
					c14++;
					break;					
				case 4 :
					d14++;
					break;					
				case 5:
					e14++;
					break;					
				case 6 :
					f14++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil2=ACengcivil2+6;
								}	
								else if(curso==2){
									ACmed2=ACmed2+6;	
								}
								else if (curso==3){
									AChist2=AChist2+6;
								}
								else if(curso==4){
									ACletras2=ACletras2+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+6;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+6;
								}
								if (sexo==1){
									ACfem2=ACfem2+6;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil2=ACengcivil2+5;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+5;
								}
								else if(curso==4){
									ACletras2=ACletras2+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+5;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+5;
								}
								if (sexo==1){
									ACfem2=ACfem2+5;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil2=ACengcivil2+4;
								}	
								else if(curso==2){
									ACmed2=ACmed2+4;	
								}
								else if (curso==3){
									AChist2=AChist2+4;
								}
								else if(curso==4){
									ACletras2=ACletras2+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+4;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+4;
								}
								if (sexo==1){
									ACfem2=ACfem2+4;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil2=ACengcivil2+3;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+3;
								}
								else if(curso==4){
									ACletras2=ACletras2+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+3;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+3;
								}
								if (sexo==1){
									ACfem2=ACfem2+3;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil2=ACengcivil2+2;
								}	
								else if(curso==2){
									ACmed2=ACmed2+2;	
								}
								else if (curso==3){
									AChist2=AChist2+2;
								}
								else if(curso==4){
									ACletras2=ACletras2+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+2;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+2;
								}
								if (sexo==1){
									ACfem2=ACfem2+2;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil2=ACengcivil2+1;
								}	
								else if(curso==2){
									ACmed2=ACmed2+1;	
								}
								else if (curso==3){
									AChist2=AChist2+1;
								}
								else if(curso==4){
									ACletras2=ACletras2+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+1;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+1;
								}
								if (sexo==1){
									ACfem2=ACfem2+1;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+1;
								}
						}		
		do{				
			printf("15.Um individuo de mas maneiras, maus costumes e ma educacao dificilmente pode fazer amizade com pessoas decentes. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a15++;
					break;					
				case 2 :
					b15++;
					break;					
				case 3:
					c15++;
					break;					
				case 4 :
					d15++;
					break;					
				case 5:
					e15++;
					break;					
				case 6 :
					f15++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil2=ACengcivil2+6;
								}	
								else if(curso==2){
									ACmed2=ACmed2+6;	
								}
								else if (curso==3){
									AChist2=AChist2+6;
								}
								else if(curso==4){
									ACletras2=ACletras2+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+6;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+6;
								}
								if (sexo==1){
									ACfem2=ACfem2+6;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil2=ACengcivil2+5;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+5;
								}
								else if(curso==4){
									ACletras2=ACletras2+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+5;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+5;
								}
								if (sexo==1){
									ACfem2=ACfem2+5;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil2=ACengcivil2+4;
								}	
								else if(curso==2){
									ACmed2=ACmed2+4;	
								}
								else if (curso==3){
									AChist2=AChist2+4;
								}
								else if(curso==4){
									ACletras2=ACletras2+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+4;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+4;
								}
								if (sexo==1){
									ACfem2=ACfem2+4;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil2=ACengcivil2+3;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+3;
								}
								else if(curso==4){
									ACletras2=ACletras2+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+3;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+3;
								}
								if (sexo==1){
									ACfem2=ACfem2+3;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil2=ACengcivil2+2;
								}	
								else if(curso==2){
									ACmed2=ACmed2+2;	
								}
								else if (curso==3){
									AChist2=AChist2+2;
								}
								else if(curso==4){
									ACletras2=ACletras2+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+2;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+2;
								}
								if (sexo==1){
									ACfem2=ACfem2+2;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil2=ACengcivil2+1;
								}	
								else if(curso==2){
									ACmed2=ACmed2+1;	
								}
								else if (curso==3){
									AChist2=AChist2+1;
								}
								else if(curso==4){
									ACletras2=ACletras2+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+1;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+1;
								}
								if (sexo==1){
									ACfem2=ACfem2+1;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+1;
								}
						}	
		do{				
			printf("16. Todos devemos ter fe absoluta em um poder sobrenatural, cujas decisoes devemos acatar. \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a16++;
					break;					
				case 2 :
					b16++;
					break;					
				case 3:
					c16++;
					break;					
				case 4 :
					d16++;
					break;					
				case 5:
					e16++;
					break;					
				case 6 :
					f16++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil2=ACengcivil2+6;
								}	
								else if(curso==2){
									ACmed2=ACmed2+6;	
								}
								else if (curso==3){
									AChist2=AChist2+6;
								}
								else if(curso==4){
									ACletras2=ACletras2+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+6;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+6;
								}
								if (sexo==1){
									ACfem2=ACfem2+6;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil2=ACengcivil2+5;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+5;
								}
								else if(curso==4){
									ACletras2=ACletras2+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+5;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+5;
								}
								if (sexo==1){
									ACfem2=ACfem2+5;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil2=ACengcivil2+4;
								}	
								else if(curso==2){
									ACmed2=ACmed2+4;	
								}
								else if (curso==3){
									AChist2=AChist2+4;
								}
								else if(curso==4){
									ACletras2=ACletras2+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+4;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+4;
								}
								if (sexo==1){
									ACfem2=ACfem2+4;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil2=ACengcivil2+3;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+3;
								}
								else if(curso==4){
									ACletras2=ACletras2+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+3;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+3;
								}
								if (sexo==1){
									ACfem2=ACfem2+3;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil2=ACengcivil2+2;
								}	
								else if(curso==2){
									ACmed2=ACmed2+2;	
								}
								else if (curso==3){
									AChist2=AChist2+2;
								}
								else if(curso==4){
									ACletras2=ACletras2+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+2;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+2;
								}
								if (sexo==1){
									ACfem2=ACfem2+2;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil2=ACengcivil2+1;
								}	
								else if(curso==2){
									ACmed2=ACmed2+1;	
								}
								else if (curso==3){
									AChist2=AChist2+1;
								}
								else if(curso==4){
									ACletras2=ACletras2+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+1;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+1;
								}
								if (sexo==1){
									ACfem2=ACfem2+1;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+1;
								}
						}
					
		do{			
			printf("17. Pobreza eh consequencia da falta de vontade de querer trabalhar \n <1> Concordo totalmente \n <2> Concordo  \n <3> Concordo plenamente \n <4> Discorda parcialmente \n <5> Discorda \n <6> Discorda totalmente \n \n ");
			scanf("%i", &pergunta);
			switch (pergunta)
				{
				case 1:
					a17++;
					break;					
				case 2 :
					b17++;
					break;					
				case 3:
					c17++;
					break;					
				case 4 :
					d17++;
					break;					
				case 5:
					e17++;
					break;					
				case 6 :
					f17++;
					break;			
				default:
					system("cls");
					printf("_______ NUMERO INVALIDO!!!! DIGITE NOVAMENTE _______  \n\n"); 	
			}	
		}while(pergunta>6 || pergunta==0);
					system("cls");
					
						if(pergunta==1){
								if(curso==1){
									ACengcivil2=ACengcivil2+6;
								}	
								else if(curso==2){
									ACmed2=ACmed2+6;	
								}
								else if (curso==3){
									AChist2=AChist2+6;
								}
								else if(curso==4){
									ACletras2=ACletras2+6;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+6;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+6;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+6;
								}
								if (sexo==1){
									ACfem2=ACfem2+6;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+6;
								}
						}
								 
						else if(pergunta==2){
								if(curso==1){
									ACengcivil2=ACengcivil2+5;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+5;
								}
								else if(curso==4){
									ACletras2=ACletras2+5;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+5;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+5;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+5;
								}
								if (sexo==1){
									ACfem2=ACfem2+5;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+5;
								}
						}
						else if(pergunta==3){
								if(curso==1){
									ACengcivil2=ACengcivil2+4;
								}	
								else if(curso==2){
									ACmed2=ACmed2+4;	
								}
								else if (curso==3){
									AChist2=AChist2+4;
								}
								else if(curso==4){
									ACletras2=ACletras2+4;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+4;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+4;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+4;
								}
								if (sexo==1){
									ACfem2=ACfem2+4;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+4;
								}
						}
						else if(pergunta==4){
								if(curso==1){
									ACengcivil2=ACengcivil2+3;
								}	
								else if(curso==2){
									ACmed2=ACmed2+5;	
								}
								else if (curso==3){
									AChist2=AChist2+3;
								}
								else if(curso==4){
									ACletras2=ACletras2+3;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+3;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+3;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+3;
								}
								if (sexo==1){
									ACfem2=ACfem2+3;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+3;
								}
						}
						else if(pergunta==5){
								if(curso==1){
									ACengcivil2=ACengcivil2+2;
								}	
								else if(curso==2){
									ACmed2=ACmed2+2;	
								}
								else if (curso==3){
									AChist2=AChist2+2;
								}
								else if(curso==4){
									ACletras2=ACletras2+2;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+2;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+2;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+2;
								}
								if (sexo==1){
									ACfem2=ACfem2+2;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+2;
								}
						}
						else if(pergunta==6){
								if(curso==1){
									ACengcivil2=ACengcivil2+1;
								}	
								else if(curso==2){
									ACmed2=ACmed2+1;	
								}
								else if (curso==3){
									AChist2=AChist2+1;
								}
								else if(curso==4){
									ACletras2=ACletras2+1;
								}	
								if(idade>=18&&idade<=20){	
									ACjovem2=ACjovem2+1;
								}
								else if(idade>20&&idade<=23){	
									ACadulto2=ACadulto2+1;
								}
								else if (idade>23){	
									ACsenhor2=ACsenhor2+1;
								}
								if (sexo==1){
									ACfem2=ACfem2+1;
								}
								else if(sexo==2){
									ACmasc2=ACmasc2+1;
								}
						}
								// ESCORES														//CATEGORIA 1
						ESCjovem=(ACjovem/5.0)/jovem;
						ESCadulto=(ACadulto/5.0)/adulto;
						ESCsenhor=ACsenhor/5.0/senhor;
						ESCengcivil=(ACengcivil/5.0)/engcivil;
						ESCmed=(ACmed/5.0)/med;
						ESChist=(AChist/5.0)/hist;
						ESCletras=(ACletras/5.0)/letras;
						ESCfem=(ACfem/5.0)/fem;
						ESCmasc=(ACmasc/5.0)/masc;
																								
						ESCjovem1=(ACjovem1/7.0)/jovem;											//CATEGORIA 2
						ESCadulto1=(ACadulto1/7.0)/adulto;
						ESCsenhor1=ACsenhor1/7.0/senhor;
						ESCengcivil1=(ACengcivil1/7.0)/engcivil;
						ESCmed1=(ACmed1/7.0)/med;
						ESChist1=(AChist1/7.0)/hist;
						ESCletras1=(ACletras1/7.0)/letras;
						ESCfem1=(ACfem1/7.0)/fem;
						ESCmasc1=(ACmasc1/7.0)/masc;
						
						ESCjovem2=(ACjovem2/5.0)/jovem;											//CATEGORIA 3
						ESCadulto2=(ACadulto2/5.0)/adulto;
						ESCsenhor2=ACsenhor2/5.0/senhor;
						ESCengcivil2=(ACengcivil2/5.0)/engcivil;
						ESCmed2=(ACmed2/5.0)/med;
						ESChist2=(AChist2/5.0)/hist;
						ESCletras2=(ACletras2/5.0)/letras;
						ESCfem2=(ACfem2/5.0)/fem;
						ESCmasc2=(ACmasc2/5.0)/masc;
	
										// ESCORES MEDIOS
								escmediojovem=(ESCjovem+ESCjovem1+ESCjovem2)/3.0;		
								escmedioadulto=(ESCadulto+ESCadulto1+ESCadulto2)/3.0;
								escmediosenhor=(ESCsenhor+ESCsenhor1+ESCsenhor2)/3.0;
								
								escmedioengcivil=(ESCengcivil+ESCengcivil1+ESCengcivil2)/3.0;
								escmediomed=(ESCmed+ESCmed1+ESCmed2)/3.0;
								escmediohist=(ESChist+ESChist1+ESChist2)/3.0;
								escmedioletras=(ESCletras+ESCletras1+ESCletras2)/3.0;
								
								escmediofem=(ESCfem+ESCfem1+ESCfem2)/3.0;
								escmediomasc=(ESCmasc+ESCmasc1+ESCmasc2)/3.0;
					
												//IPA
										ipajovem=(escmediojovem-1)*2;
										ipaadulto=(escmedioadulto-1)*2;
										ipasenhor=(escmediosenhor-1)*2;
										
										ipaengcivil=(escmedioengcivil-1)*2;
										ipamed=(escmediomed-1)*2;
										ipahist=(escmediohist-1)*2;
										ipaletras=(escmedioletras-1)*2;
										
										ipafem=(escmediofem-1)*2;
										ipamasc=(escmediomasc-1)*2;
									
							// VARIAVEIS DE SOMA PARA A FREQUENCIA RELATIVA DE CADA QUESTAO
						somaq1=a1+b1+c1+d1+e1+f1;
						somaq2=a2+b2+c2+d2+e2+f2;
						somaq3=a3+b3+c3+d3+e3+f3;
						somaq4=a4+b4+c4+d4+e4+f4;
						somaq5=a5+b5+c5+d5+e5+f5;
						somaq6=a6+b6+c6+d6+e6+f6;
						somaq7=a7+b7+c7+d7+e7+f7;
						somaq8=a8+b8+c8+d8+e8+f8;
						somaq9=a9+b9+c9+d9+e9+f9;
						somaq10=a10+b10+c10+d10+e10+f10;
						somaq11=a11+b11+c11+d11+e11+f11;
						somaq12=a12+b12+c12+d12+e12+f12;
						somaq13=a13+b13+c13+d13+e13+f13;
						somaq14=a14+b14+c14+d14+e14+f14;
						somaq15=a15+b15+c15+d15+e15+f15;
						somaq16=a16+b16+c16+d16+e16+f16;
						somaq17=a17+b17+c17+d17+e17+f17;

				
			printf("-------------------------------------------------------------------------------------------- \n");			
			printf("DIGITE:\n <1> PARA MOSTRAR OS RESULTADOS DA PESQUISA \n <2> PARA REALIZAR NOVA PESQUISA \n");						//APRESENTAÇÃO DOS RESULTADOS DA PESQUISA
			printf("-------------------------------------------------------------------------------------------- \n");			
			scanf("%i", &dados);
			system("cls");
			
			if (dados==1){
				printf("****************   RESULTADOS DA PESQUISA   **************** \n\n");						//OBSERVAÇÃO: O TOPICO QUE NAO TEVE NENHUM DADO PARA DIVIDIR FICOU IGUAL A 0, OU SEJA, O SIMBOLO -1.& APARECE ONDE A DIVISÃO FOI POR 0
				
				printf("_________________ FREQUENCIA ABSOLUTA _________________ \n > SUBMISSAO A AUTORIDADE ------------------------------------ \n \n");       		// FREQ ABSOLUTA       CATEGORIA 1
				printf("1. O que este pais necessita principalmente, antes de leis ou planos politicos, eh de alguns lideres valentes, incansaveis e dedicados em quem o povo possa depositar a sua fe. \n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a1,b1,c1,d1,e1,f1);
				printf("2.A obediencia e o respeito a autoridade sao as principais virtudes que devemos ensinar as nossas criancas.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a2,b2,c2,d2,e2,f2);
				printf("3. Nao ha nada pior do que  uma pessoa que nao sente profundo amor, gratidao e respeito por seus pais.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a3,b3,c3,d3,e3,f3);				
				printf("4. Nenhuma pessoa decente, normal e em seu sao juizo pensaria em ofender um amigo ou parente proximo. \n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a4,b4,c4,d4,e4,f5);								
				printf("5. O policial eh um guerreiro de Deus para impor a ordem e proteger as pessoas de bem.\nConcordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a5,b5,c5,d5,e5,f5);
			
				printf("> AGRESSIVIDADE AUTORITARIA  ------------------------------------ \n\n");				// CATEGORIA 2
				printf("6.A maioria de nossos problemas sociais estaria resolvida se pudessemos nos livrar das pessoas imorais, dos marginais e dos pervertidos.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a6,b6,c6,d6,e6,f6);
				printf("7.Se falassemos menos e trabalhassemos mais, todos estariamos melhor.\nConcordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a7,b7,c7,d7,e7,f7);							
				printf("8.Deve-se castigar sempre todo insulto a nossa honra.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a8,b8,c8,d8,e8,f8);
				printf("9.Os crimes sexuais tais como o estupro ou ataques a criancas merecem mais que prisao; quem comete esses crimes deveria receber punicao fisica publicamente ou receber um castigo pior.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a9,b9,c9,d9,e9,f9);
				printf("10.Os homossexuais sao quase criminosos e deveriam receber um castigo severo.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a10,b10,c10,d10,e10,f10);
				printf("11. As vezes, os jovens tem ideias rebeldes que, com os anos, deverao superar para acalmar os seus pensamentos.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a11,b11,c11,d11,e11,f11);
				printf("12. Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a12,b12,c12,d12,e12,f12);
					
				printf("> CONVENCIONALISMO  ------------------------------------ \n\n");						// CATEGORIA 3
				printf("13. A ciencia tem o seu lugar, mas ha muitas coisas importantes que a mente humana jamais podera compreender.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a13,b13,c13,d13,e13,f13);
				printf("14. Os homens podem ser divididos em duas classes definidas: os fracos e os fortes. \n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a14,b14,c14,d14,e14,f14);			
				printf("15.Um individuo de mas maneiras, maus costumes e ma educacao dificilmente pode fazer amizade com pessoas decentes.\n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a15,b15,c15,d15,e15,f15 );
				printf("16.Todos devemos ter fe absoluta em um poder sobrenatural, cujas decisoes devemos acatar. \n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a16,b16,c16,d16,e16,f16);
				printf("17. Pobreza eh consequencia da falta de vontade de querer trabalhar. \n Concordo completamente: %i \t Concordo: %i \t Concordo parcialmente: %i \n Discordo parcialmente: %i \t Discordo: %i \t Discordo totalmente: %i \n\n", a17,b17,c17,d17,e17,f17);
						system("pause");
						system("cls");
				printf("_________________ FREQUENCIA RELATIVA _________________ \n\n > SUBMISSAO A AUTORIDADE ------------------------------------ \n \n");       			// FREQ RELATIVA 		CATEGORIA 1
			
				printf("1. O que este pais necessita principalmente, antes de leis ou planos politicos, eh de alguns lideres valentes, incansaveis e dedicados em quem o povo possa depositar a sua fe. \n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra1=(float)((a1*100)/somaq1), frb1=(float)((b1*100)/somaq1), frc1=(float)((c1*100)/somaq1), frd1=((d1*100)/somaq1), fre1=((e1*100)/somaq1), frf1=((f1*100)/somaq1));
				printf("2.A obediencia e o respeito a autoridade sao as principais virtudes que devemos ensinar as nossas criancas.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra2=(float)((a2*100)/somaq2), frb2=(float)((b2*100)/somaq2), frc2=(float)((c2*100)/somaq2), frd2=((d2*100)/somaq2), fre2=((e2*100)/somaq2), frf2=((f2*100)/somaq2));
				printf("3. Nao ha nada pior do que  uma pessoa que nao sente profundo amor, gratidao e respeito por seus pais.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", 	fra3=(float)((a3*100)/somaq3), frb3+(float)((b3*100)/somaq3), frc3=(float)((c3*100)/somaq3), frd3=((d3*100)/somaq3), fre3=((e3*100)/somaq3), frf3=((f3*100)/somaq3));				
				printf("4. Nenhuma pessoa decente, normal e em seu sao juizo pensaria em ofender um amigo ou parente proximo. \n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", 	fra4=(float)((a4*100)/somaq4), frb4=(float)((b4*100)/somaq4), frc4=(float)((c4*100)/somaq4), frd1=((d4*100)/somaq4), fre1=((e4*100)/somaq4), frf1=((f4*100)/somaq4));								
				printf("5. O policial eh um guerreiro de Deus para impor a ordem e proteger as pessoas de bem.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", 	fra5=(float)((a5*100)/somaq5), frb5=(float)((b5*100)/somaq5), frc5=(float)((c5*100)/somaq5), frd1=((d5*100)/somaq5), fre1=((e5*100)/somaq5), frf1=((f5*100)/somaq5));
			
				printf("> AGRESSIVIDADE AUTORITARIA  ------------------------------------ \n\n");					//CATEGORIA 2
				printf("6.A maioria de nossos problemas sociais estaria resolvida se pudessemos nos livrar das pessoas imorais, dos marginais e dos pervertidos.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra6=(float)((a6*100)/somaq6), frb6=(float)((b6*100)/somaq6), frc6=(float)((c6*100)/somaq6), frd1=((d6*100)/somaq6), fre1=((e6*100)/somaq6), frf1=((f7*100)/somaq6));
				printf("7.Se falassemos menos e trabalhassemos mais, todos estariamos melhor.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra7=(float)((a7*100)/somaq7), frb7=(float)((b7*100)/somaq7), frc7=(float)((c7*100)/somaq7), frd1=((d7*100)/somaq7), fre1=((e7*100)/somaq7), frf1=((f7*100)/somaq7));
				printf("8.Deve-se castigar sempre todo insulto a nossa honra.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra8=(float)((a8*100)/somaq8), frb8=(float)((b8*100)/somaq8), frc8=(float)((c8*100)/somaq8), frd1=((d8*100)/somaq8), fre1=((e8*100)/somaq8), frf1=((f8*100)/somaq8));
				printf("9.Os crimes sexuais tais como o estupro ou ataques a criancas merecem mais que prisao; quem comete esses crimes deveria receber punição fisica publicamente ou receber um castigo pior.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", 	fra9=(float)((a9*100)/somaq9), frb9=(float)((b9*100)/somaq9), frc9=(float)((c9*100)/somaq9), frd1=((d9*100)/somaq9), fre1=((e9*100)/somaq9), frf1=((f9*100)/somaq9));
				printf("10.Os homossexuais sao quase criminosos e deveriam receber um castigo severo.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra10=(float)((a10*100)/somaq10), frb10=(float)((b10*100)/somaq10), frc10=(float)((c10*100)/somaq10), frd10=((d10*100)/somaq10), fre10=((e10*100)/somaq10), frf10=((f1*100)/somaq10));

				printf("11. As vezes, os jovens tem ideias rebeldes que, com os anos, deverao superar para acalmar os seus pensamentos.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra11=(float)((a11*100)/somaq11), frb11=(float)((b11*100)/somaq11), frc11=(float)((c11*100)/somaq11), frd11=((d11*100)/somaq11), fre11=((e11*100)/somaq11), frf11=((f1*100)/somaq11));
				printf("12. Hoje em dia, as pessoas se intrometem cada vez mais em assuntos que deveriam ser somente pessoais e privados.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra12=(float)((a12*100)/somaq12), frb12=(float)((b12*100)/somaq12), frc12=(float)((c12*100)/somaq12), frd12=((d12*100)/somaq12), fre12=((e12*100)/somaq12), frf12=((f1*100)/somaq12));
					
				printf("> CONVENCIONALISMO  ------------------------------------ \n\n");				//CATEGORIA 3
				printf("13. A ciencia tem o seu lugar, mas ha muitas coisas importantes que a mente humana jamais podera compreender.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra13=(float)((a13*100)/somaq13), frb13=(float)((b13*100)/somaq13), frc13=(float)((c13*100)/somaq13), frd13=((d13*100)/somaq13), fre13=((e13*100)/somaq13), frf13=((f1*100)/somaq13));
				printf("14. Os homens podem ser divididos em duas classes definidas: os fracos e os fortes. \n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra14=(float)((a14*100)/somaq14), frb14=(float)((b14*100)/somaq14), frc14=(float)((c14*100)/somaq14), frd14=((d14*100)/somaq14), fre14=((e14*100)/somaq14), frf14=((f1*100)/somaq14));			
				printf("15.Um individuo de mas maneiras, maus costumes e ma educacao dificilmente pode fazer amizade com pessoas decentes.\n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra15=(float)((a15*100)/somaq15), frb15=(float)((b15*100)/somaq15), frc15=(float)((c15*100)/somaq15), frd15=((d15*100)/somaq15), fre15=((e15*100)/somaq15), frf15=((f1*100)/somaq15));
				printf("16.Todos devemos ter fe absoluta em um poder sobrenatural, cujas decisoes devemos acatar. \n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n", fra16=(float)((a16*100)/somaq16), frb16=(float)((b16*100)/somaq16), frc16=(float)((c16*100)/somaq16), frd16=((d16*100)/somaq16), fre16=((e16*100)/somaq16), frf16=((f1*100)/somaq16));
				printf("17. Pobreza eh consequencia da falta de vontade de querer trabalhar. \n Concordo completamente: %.1f %% \t Concordo: %.1f %% \t Concordo parcialmente: %.1f %% \n Discordo parcialmente: %.1f %% \t Discordo: %.1f %% \t Discordo totalmente: %.1f %% \n\n",fra17=(float)((a17*100)/somaq17), frb17=(float)((b17*100)/somaq17), frc17=(float)((c17*100)/somaq17), frd17=((d17*100)/somaq17), fre17=((e17*100)/somaq17), frf17=((f1*100)/somaq17));	
						system("pause");
						system("cls");																	
				printf("_________________ ESCORES _________________\n");							//ESCORES

				printf("> ESCORE DE SUBMISSAO A AUTORIDADE de acordo com: \n\n");
				printf("FAIXA ETARIA:\n 18 anos a 20 anos: %.1f \n 21 a 23 anos: %.1f \n Acima de 23 anos: %.1f \n\n", ESCjovem, ESCadulto, ESCsenhor);
				printf("CURSO:\n Engenharia civil: %.1f \n Medicina: %.1f \n Historia: %.1f \n Letras Vernaculas: %.1f \n\n", ESCengcivil, ESCmed, ESChist, ESCletras);
				printf("SEXO:\n Feminino: %.1f \n Masculino: %.1f \n\n", ESCfem, ESCmasc);
				
				printf("> ESCORE DE AGRESSIVIDADE AUTORITARIA de acordo com: \n\n");
				printf("FAIXA ETARIA:\n 18 anos a 20 anos: %.1f \n 21 a 23 anos: %.1f \n Acima de 23 anos: %.1f \n\n", ESCjovem1, ESCadulto1, ESCsenhor1);
				printf("CURSO:\n Engenharia civil: %.1f \n Medicina: %.1f \n Historia: %.1f \n Letras Vernaculas: %.1f \n\n", ESCengcivil1, ESCmed1, ESChist1, ESCletras1);
				printf("SEXO:\n Feminino: %.1f \n Masculino: %.1f \n\n", ESCfem1, ESCmasc1);
				
				printf("> ESCORE DE CONVENCIONALISMO de acordo com: \n\n");
				printf("FAIXA ETARIA:\n 18 anos a 20 anos: %.1f \n 21 a 23 anos: %.1f \n Acima de 23 anos: %.1f \n\n", ESCjovem2, ESCadulto2, ESCsenhor2);
				printf("CURSO:\n Engenharia civil: %.1f \n Medicina: %.1f \n Historia: %.1f \n Letras Vernaculas: %.1f \n\n", ESCengcivil2, ESCmed2, ESChist2, ESCletras2);
				printf("SEXO:\n Feminino: %.1f \n Masculino: %.1f \n\n", ESCfem2, ESCmasc2);
							system("pause");
							system("cls");
																		
				printf("_________________ ESCORES MEDIOS _________________\n");								// ESCORES MEDIOS
				printf("FAIXA ETARIA:\n 18 anos a 20 anos: %.1f \n 21 a 23 anos: %.1f \n Acima de 23 anos: %.1f \n\n", escmediojovem, escmedioadulto, escmediosenhor);
				printf("CURSO:\n Engenharia civil: %.1f \n Medicina: %.1f \n Historia: %.1f \n Letras Vernaculas: %.1f \n\n", escmedioengcivil, escmediomed, escmediohist, escmedioletras);
				printf("SEXO:\n Feminino: %.1f \n Masculino: %.1f \n\n", escmediofem, escmediomasc);
						
				printf("---------------------------------------------------------------------------------- \n \n");									//IPA
				printf("_________________ IPA _________________ \n");
				printf("FAIXA ETARIA:\n 18 anos a 20 anos: %.1f \n 21 a 23 anos: %.1f \n Acima de 23 anos: %.1f \n\n", ipajovem, ipaadulto, ipasenhor);
				printf("CURSO:\n Engenharia civil: %.1f \n Medicina: %.1f \n Historia: %.1f \n Letras Vernaculas: %.1f \n\n", ipaengcivil, ipamed, ipahist, ipaletras);
				printf("SEXO:\n Feminino: %.1f \n Masculino: %.1f \n\n", ipafem, ipamasc);
				
				break;
			}
			else if(dados==2){
				continue;
			}
			
	}
return 0;
		}

  
					


	
