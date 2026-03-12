/*Uma escola esta informatizando sua gestao de matriculas. ela cadstrou o valor de matricula de todos os seus cursos em vetor, com os seguintes valores: ads 700- si 900- ec 1600
depois, cadstrou todos os seus alunos em um arquivo binario, contendo os seguintes campos: matricula(inteiro, curso(caractere[3], total de mensalidades pagas (inteiro). estes dados devem ser manipulados por uma struct 
crie um programa em c com as seguintes opcoes de menu(todas as opcoes implentadas devem ser manipuladas por uma struct
1 cadastrar aluno
2mostrar um relatorio contenndo a matricula do aluno, o curso o qual esta matriculado e o total de mensalidades pagas.
3 mostar o valor total recebido por curso
4 finalizae*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int matricula;
    char curso[3];
    int total_mensalidades_pagas;
} aluno;

int valormatricula[3] = {700, 900, 1600}; // Valores das mensalidades para ADS, SI, EC
int cursoc[3] = {0, 0, 0}; // Acumulador de mensalidades pagas para cada curso

void cadastro() {
    aluno reg;
    printf("-- CADASTRO --\n\n");
    printf("Matrícula: ");
    scanf("%d", &reg.matricula);
    
    printf("Total de mensalidades pagas: ");
    scanf("%d", &reg.total_mensalidades_pagas);
    
    int curso_valido = 0;
    do {
        printf("Curso (ADS-SI-EC): ");
        scanf("%s", reg.curso);
        if (strcmp(reg.curso, "ADS") == 0) {
            cursoc[0] += reg.total_mensalidades_pagas;
            curso_valido = 1;
        } else if (strcmp(reg.curso, "SI") == 0) {
            cursoc[1] += reg.total_mensalidades_pagas;
            curso_valido = 1;
        } else if (strcmp(reg.curso, "EC") == 0) {
            cursoc[2] += reg.total_mensalidades_pagas;
            curso_valido = 1;
        } else {
            printf("Curso inválido. Tente novamente.\n");
        }
        system("CLS");
    } while (!curso_valido);
    
    // Abrindo o arquivo para adicionar o registro no modo binário
    FILE *arquivo = fopen("alunos.bin", "ab");  // 'ab' = append binary
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Gravando a estrutura `reg` no arquivo
    fwrite(&reg, sizeof(aluno), 1, arquivo);
    fclose(arquivo);
    printf("Aluno cadastrado com sucesso!\n");
    system("PAUSE");
}

void relatorio() {
    printf("RELATÓRIO\n\n");
    FILE *arquivo = fopen("alunos.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return;
    }

    aluno reg;
    while (fread(&reg, sizeof(aluno), 1, arquivo)) {
        printf("Matrícula: %d, Curso: %s, Mensalidades pagas: %d\n", reg.matricula, reg.curso, reg.total_mensalidades_pagas);
    }

    fclose(arquivo);
    system("PAUSE");
}

void tpago() {
    printf("Curso ADS: R$ %d\n", cursoc[0] * valormatricula[0]);
    printf("Curso SI.: R$ %d\n", cursoc[1] * valormatricula[1]);
    printf("Curso EC.: R$ %d\n", cursoc[2] * valormatricula[2]);

    system("PAUSE");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int menu;
    do {
        system("CLS");
        printf("1 - Cadastrar um aluno\n");
        printf("2 - Relatório\n");
        printf("3 - Valor total pago por curso\n");
        printf("4 - Finalizar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                cadastro();
                break;
            case 2:
                relatorio();
                break;
            case 3:
                tpago();
                break;
            case 4:
                printf("EXIT\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (menu != 4);

    return 0;
}


/*#include <stdio.h>
#include <string.h>
#include<locale.h>
typedef struct {
    int matricula;
    char curso[3];
    int total_mensalidades_pagas;
} aluno;

int valormatricula[4]={0, 700, 900, 1600};
int cursoc[4]={0, 0, 0, 0};

void cadastro() {
    aluno reg;
	char teste;
    printf("-- CADASTRO --\n\n");
    printf("Matrícula: ");
    scanf("%d", &reg.matricula);
    
    printf("Total de mensalidades pagas: ");
    scanf("%d", &reg.total_mensalidades_pagas);
    
   // do {
        printf("Curso (ADS-SI-EC): ");
        scanf("%s", &reg.curso);
       // teste = reg.curso;
        	system("CLS");
       // if (teste != 'ads' || teste !='si' || teste !='ec') {
       //     printf("Input inválido. Tente novamente.\n");
       // }
   // } while (teste != 'ads' || teste !='si' || teste !='ec');
	if(reg.curso=="ads"){
		cursoc[0]+=reg.total_mensalidades_pagas;
	}else if(reg.curso=="si"){
		cursoc[1]+=reg.total_mensalidades_pagas;
	}else{//ec
		cursoc[2]+=reg.total_mensalidades_pagas;
	}
    // Abrindo o arquivo para adicionar o registro no modo binário
    FILE *arquivo = fopen("alunos.bin", "ab");  // 'ab' = append binary
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    // Gravando a estrutura `reg` no arquivo
    fwrite(&reg, sizeof(aluno), 1, arquivo);
    fclose(arquivo);
    printf("aluno cadastrado com sucesso!\n");
    system("PAUSE");
    
    return;
}
void relatorio(){
    printf("RELATÓRIO\n\n");
	FILE *arquivo = fopen("alunos.bin", "rb");
	if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return;
    }

    aluno reg;
    while (fread(&reg,sizeof(aluno),1,arquivo)) {
        printf("Matricula: %d, Curso: %s, Mensalidades pagas: %d\n", reg.matricula, reg.curso, reg.total_mensalidades_pagas);
    }

    fclose(arquivo);
    system("PAUSE");
    return;
}
void tpago(){
	
	printf("Curso ADS: %d\n", cursoc[0]*valormatricula[0]);
	printf("Curso SI.: %d\n", cursoc[1]*valormatricula[1]);
	printf("Curso EC.: %d\n", cursoc[2]*valormatricula[2]);
	
	system("PAUSE");
	
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int menu;
    do {
    	system("CLS");
        printf("1 - Cadastrar um aluno\n");
        printf("2 - Relatório\n");
        printf("3 - Valor total pago por curso\n");
        printf("4 - Finalizar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                cadastro();
                break;
            case 2:
                relatorio();
                break;
            case 3:
                tpago();
                break;
            case 4:
                printf("EXIT\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (menu != 4);

    return 0;
}*/
