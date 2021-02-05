#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#define SIZE 200

char nome_cliente [SIZE][50];
char email [SIZE][50];
int cpf [SIZE];

char nome_produto [SIZE][50];
float preco_produto [SIZE] [10];

int op = 0;

void TelaLogin();
void MostraMenu();
void Cadastro_Cliente();
void Cadastro_Produto();

int main(void)
{
    TelaLogin();
    MostraMenu();
    Cadastro_Cliente();
    Cadastro_Produto(); 
    
return 0;
}

void TelaLogin(){

char login[15] = "jonatas";
char login1[15];
char senha[15] = "a1b2c3d4";
char senha1[15];

    printf("*********************\n\n");
    printf("****TELA DE LOGIN****\n\n");
    printf("*********************\n\n");
    
    printf("Digite seu login: ");

    scanf("%s", login1);
    
    while (strcmp(login, login1) != 0)
    {
        printf("\nLOGIN INCORRETO!");
        printf("\n\nTente novamente:");
        scanf("%s", login1);
    }

    printf ("\n\nLOGIN CORRETO!");
    
    printf("\n\nAgora Digite sua senha: ");

    scanf("%s", senha1);

    while (strcmp(senha, senha1) != 0)
    {
        printf("\nSENHA ERRADA!!");
        printf("\n\nTente digitar sua senha novamente: ");
        scanf("%s", senha1);
    }
    
    system("cls||clear");

    printf("\nBem vindo de volta!\n\n");

    sleep(2);

    system("cls||clear");
}

void MostraMenu(){

    printf ("ESCOLHA UMA DAS OPÇÕES\n\n");
    printf ("1. Cadastro de clientes\n");
    printf ("2. Cadastro de produtos\n");
    printf ("3. Sair\n\n");

    scanf ("%d", &op);

    switch (op)
    {
    case 1:
        system("cls||clear");
        Cadastro_Cliente();
        break;

    case 2:
        system("cls||clear");
        Cadastro_Produto();
        break;
    
    case 3:
        exit(0);
        break;

    default:
        break;
    }

    sleep(1);

    system("cls||clear");
}

void Cadastro_Cliente()
{
    static int linha;
    do
    {
        printf("\nDigite o nome: ");
        scanf("%s", nome_cliente[linha]);
        printf("\nDigite o email: ");
        scanf("%s", email[linha]);
        printf("\nDigite o CPF: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para voltar ao menu.\n\n");
        scanf("%d", &op);
        linha++;
        system("cls||clear");
    }
        while (op == 1);
    
            if (op != 1)
            {
                MostraMenu();
            }
}

void Cadastro_Produto()
{
    static int linha2;
    do
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome_produto[linha2]);
        printf("\nDigite o preço do produto: ");
        scanf("%f", preco_produto[linha2]);
        printf("\nDigite 1 para continuar ou outro valor para sair\n\n");
        scanf("%d", &op);
        linha2++;
        system("cls||clear");
    }
        while (op == 1);
    
            if (op != 1)
            {
                MostraMenu();
            }
}

/*void pesquisa()
{

}*/