#include<stdio.h>
#include<locale.h>
#define num_funcionarios 1
#define s_minimo 550
typedef struct{
	char  nome[50];
	int   horast;
	char  turno;
	char  categoria;
	float v_hora;
	float salario_inicial;
	float aux_alimentacao;
}funcionario;

	funcionario funcionarios[num_funcionarios];// Array GLOBAL de funcionários
	int flag=0;
	
void cadastrar_funcionario(){
	flag = 1;
	int i;
	printf("CADASTRO DE FUNCIONÁRIOS - Preencha os dados\n\n");
	for(i=0;i<num_funcionarios;i++){
		printf("Funcionário %d\n",i+1);
				
		printf(" Nome: ");
		scanf("%s", funcionarios[i].nome);
		printf(" Número de horas trabalhadas no mês: ");
		scanf("%d", &funcionarios[i].horast);
		do{
			printf(" Turno (M-Matutino / V-Vespertino / N-Noturno): ");
			scanf(" %c", &funcionarios[i].turno);
			if(funcionarios[i].turno!='m' && funcionarios[i].turno!='v' && funcionarios[i].turno!='n'){
				printf("inválido - Tente novamente\n");
			}
		}while(funcionarios[i].turno!='m' && funcionarios[i].turno!='v' && funcionarios[i].turno!='n');
		do{
			printf(" Categoria (Operário-O / Gerente-G): ");
			scanf(" %c", &funcionarios[i].categoria);
			if(funcionarios[i].categoria!='o' && funcionarios[i].categoria!='g'){
				printf("inválido - Tente novamente\n");
			}
		}while(funcionarios[i].categoria!='o' && funcionarios[i].categoria!='g');
	}
}

void valor_da_hora(int i){
	if(funcionarios[i].categoria=='g'){
		if(funcionarios[i].turno=='n'){
			funcionarios[i].v_hora = (s_minimo/100)*18;//cat G .. turno N
		}else{
			funcionarios[i].v_hora = (s_minimo/100)*15;//cat G .. turno M ou V
		}
	}else{
		if(funcionarios[i].turno=='n'){
			funcionarios[i].v_hora = (s_minimo/100)*13;//cat O .. turno N
		}else{
			funcionarios[i].v_hora = (s_minimo/100)*10;//cat O .. turno M ou V
		}
	}
}

void salario_inicial(int i){
	funcionarios[i].salario_inicial=funcionarios[i].v_hora*funcionarios[i].horast;
}

void auxilio_alimentacao(int i){
	if(funcionarios[i].salario_inicial>=800){
		funcionarios[i].aux_alimentacao=(funcionarios[i].salario_inicial/100)*5;
	}else if(funcionarios[i].salario_inicial>550){
		funcionarios[i].aux_alimentacao=(funcionarios[i].salario_inicial/100)*15;
	}else{
		funcionarios[i].aux_alimentacao=(funcionarios[i].salario_inicial/100)*20;
	}
}

float folha_de_pagamento(){
	printf("FOLHA DE PAGAMENTO\n\n");
	if(flag==0){
		printf("Nenhum funcionário cadastrado- Faça o cadastro \n\n");
		return 1;
	}
	int i;
	for(i=0;i<num_funcionarios;i++){
		valor_da_hora(i);
		salario_inicial(i);
		auxilio_alimentacao(i);
		printf("Funcionario %d\n", i+1);
		printf("Nome: %s\n", funcionarios[i].nome);
		printf("Horas trabalhadas no mês: %d\n", funcionarios[i].horast);
		printf("Valor da hora trabalhada: %.2f\n", funcionarios[i].v_hora);
		printf("Salário inicial: %.2f\n", funcionarios[i].salario_inicial);
		printf("Auxílio alimentação: %.2f\n", funcionarios[i].aux_alimentacao);
		printf("Salário final: %.2f\n\n", funcionarios[i].salario_inicial + funcionarios[i].aux_alimentacao);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int menu;
	do{
		system("cls");
		printf("MENU\n");
		printf(" 1 - Cadastrar funcionário\n 2 - Mostrar folha de pagamento\n 3 - Sair\n R: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				cadastrar_funcionario();
				break;
			case 2: 
				folha_de_pagamento();
				break;
			case 3:
				printf("Saindo...");
				break;
			default:
				printf("Opção inválida - Tente novamente");
		}
	}while(menu!=3);
	
	return 0;
}
//quero que toda vez que um funcionario seja cadastrado apareça a pergunat"adicionar mais um funcionario?" dessa forma nao ha um limite de funcionarios que possa ser cadastrado
