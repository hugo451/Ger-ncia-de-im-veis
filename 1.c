#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

typedef struct endereco
{
    char logradouro[100];
    char cep[10];
    char numero[5];
    char bairro[100];
    char cidade[100];
}t_endereco;

typedef struct imovel
{
    char informacoes[100];
    char anuncio[200];
    char preco[11];
    char contrato[15];
    t_endereco local;
}t_imovel;

typedef struct casa{
    t_imovel cs;
    char areaconstruida[10];
    char areaterreno[10];
    char quartoscs[5];
    char pavimentos[10];
}t_casa;

typedef struct apartamento
{
    t_imovel apto;
    char area[10];
    char quartosapto[5];
    char posicao[20];
    char andar[5];
    char condominio[5];
    char garagens[2];
}t_apartamento;

typedef struct terreno
{
    t_imovel ter;
    char areater[10];
}t_terreno;

void limpa_buffer()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    
}

void menu_principal()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - CONSULTAR IMOVEIS                                          \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - CADASTRAR IMOVEL                                           \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - BUSCAR IMOVEL                                              \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - REMOVER IMOVEL                                             \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    5 - EDITAR IMOVEL                                              \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    6 - SAIR DO PROGRAMA                                           \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void submenu_2()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - CADASTRAR APARTAMENTO                                      \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - CADASTRAR CASA                                             \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - CADASTRAR TERRENO                                          \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void submenu_3_1()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - BUSCA POR TIPO DE CONTRATO                                 \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - BUSCA POR BAIRRO                                           \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - BUSCA POR TITULO                                           \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - BUSCA POR VALOR                                            \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    5 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}
void submenu_3()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - BUSCAR APARTAMENTO                                         \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - BUSCAR CASA                                                \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - BUSCAR TERRENO                                             \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void submenu_3_2()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - VENDA                                                      \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - ALUGUEL                                                    \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void submenu_4()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - REMOVER APARTAMENTO                                        \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - REMOVER CASA                                               \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - REMOVER TERRENO                                            \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void submenu_5()
{
    printf("===================================================================================================\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    1 - EDITAR APARTAMENTO                                         \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    2 - EDITAR CASA                                                \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    3 - EDITAR TERRENO                                             \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                    4 - VOLTAR AO MENU PRINCIPAL                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("===================================================================================================\n");
    printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
}

void pressione()
{
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Pressione enter para sair dessa tela...\n");
    printf("---------------------------------------------------------------------------------------------------\n");
    limpa_buffer();
    getchar();
    system("clear");
}

void mostra_apartamento(t_apartamento *apartamentos, int j)
{
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Informações: %s\n", apartamentos[j].apto.informacoes);
    printf("Anuncio: %s\n", apartamentos[j].apto.anuncio);
    printf("Preco: %s\n", apartamentos[j].apto.preco);
    printf("Tipo de contrato: %s\n", apartamentos[j].apto.contrato);
    printf("Logradouro: %s\n", apartamentos[j].apto.local.logradouro);
    printf("CEP: %s\n", apartamentos[j].apto.local.cep);
    printf("Numero: %s\n", apartamentos[j].apto.local.numero);
    printf("Bairro: %s\n", apartamentos[j].apto.local.bairro);
    printf("Cidade: %s\n", apartamentos[j].apto.local.cidade);
    printf("Area do apartamento: %s\n", apartamentos[j].area);
    printf("Numero de quartos: %s\n", apartamentos[j].quartosapto);
    printf("Posicao do apartamento: %s\n", apartamentos[j].posicao);
    printf("Andar: %s\n", apartamentos[j].andar);
    printf("Valor do condominio: %s\n", apartamentos[j].condominio);
    printf("Numero de garagens: %s\n", apartamentos[j].garagens);
    printf("---------------------------------------------------------------------------------------------------\n");
}

void mostra_casa(t_casa *casas, int a)
{
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Informações: %s\n", casas[a].cs.informacoes);
    printf("Anuncio: %s\n", casas[a].cs.anuncio);
    printf("Preco: %s\n", casas[a].cs.preco);
    printf("Tipo de contrato: %s\n", casas[a].cs.contrato);
    printf("Logradouro: %s\n", casas[a].cs.local.logradouro);
    printf("CEP: %s\n", casas[a].cs.local.cep);
    printf("Numero: %s\n", casas[a].cs.local.numero);
    printf("Bairro: %s\n", casas[a].cs.local.bairro);
    printf("Cidade: %s\n", casas[a].cs.local.cidade);
    printf("Area construida: %s\n", casas[a].areaconstruida);
    printf("Area do terreno: %s\n", casas[a].areaterreno);
    printf("Numero de quartos:%s\n", casas[a].quartoscs);
    printf("Pavimentos: %s\n", casas[a].pavimentos);
    printf("---------------------------------------------------------------------------------------------------\n");
}

void mostra_terreno(t_terreno *terrenos, int b)
{
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("Informações: %s\n", terrenos[b].ter.informacoes);
    printf("Anuncio: %s\n", terrenos[b].ter.anuncio);
    printf("Preco:%s\n", terrenos[b].ter.preco);
    printf("Tipo de contrato: %s\n", terrenos[b].ter.contrato);
    printf("Logradouro: %s\n", terrenos[b].ter.local.logradouro);
    printf("CEP: %s\n", terrenos[b].ter.local.cep);
    printf("Numero: %s\n", terrenos[b].ter.local.numero);
    printf("Bairro: %s\n", terrenos[b].ter.local.bairro);
    printf("Cidade: %s\n", terrenos[b].ter.local.cidade);
    printf("Area do terreno: %s\n", terrenos[b].areater);
    printf("---------------------------------------------------------------------------------------------------\n");
}

void cadastra_apartamento(t_apartamento *apartamentos, int i)
{
    printf("Informações:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.informacoes);
    printf("\nAnuncio:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.anuncio);
    printf("\nPreco:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.preco);
    printf("\nTipo de contrato:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.contrato);
    printf("\nLogradouro:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.local.logradouro);
    printf("\nCEP:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.local.cep);
    printf("\nNumero:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.local.numero);
    printf("\nBairro:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.local.bairro);
    printf("\nCidade:");
    scanf("%*c%[^\n]s", apartamentos[i].apto.local.cidade);
    printf("\nArea do apartamento:");
    scanf("%*c%[^\n]s", apartamentos[i].area);
    printf("\nNumero de quartos:");
    scanf("%*c%[^\n]s", apartamentos[i].quartosapto);
    printf("\nPosicao do apartamento:");
    scanf("%*c%[^\n]s", apartamentos[i].posicao);
    printf("\nAndar:");
    scanf("%*c%[^\n]s", apartamentos[i].andar);
    printf("\nValor do condominio:");
    scanf("%*c%[^\n]s", apartamentos[i].condominio);
    printf("\nNumero de garagens:");
    scanf("%*c%[^\n]s", apartamentos[i].garagens);
}

void cadastra_casa(t_casa *casas, int j)
{
    printf("Informações:");
    scanf("%*c%[^\n]s", casas[j].cs.informacoes);
    printf("\nAnuncio:");
    scanf("%*c%[^\n]s", casas[j].cs.anuncio);
    printf("\nPreco:");
    scanf("%*c%[^\n]s", casas[j].cs.preco);
    printf("\nTipo de contrato:");
    scanf("%*c%[^\n]s", casas[j].cs.contrato);
    printf("\nLogradouro:");
    scanf("%*c%[^\n]s", casas[j].cs.local.logradouro);
    printf("\nCEP:");
    scanf("%*c%[^\n]s", casas[j].cs.local.cep);
    printf("\nNumero:");
    scanf("%*c%[^\n]s", casas[j].cs.local.numero);
    printf("\nBairro:");
    scanf("%*c%[^\n]s", casas[j].cs.local.bairro);
    printf("\nCidade:");
    scanf("%*c%[^\n]s", casas[j].cs.local.cidade);
    printf("\nArea construida:");
    scanf("%*c%[^\n]s", casas[j].areaconstruida);
    printf("\nArea do terreno:");
    scanf("%*c%[^\n]s", casas[j].areaterreno);
    printf("\nNumero de quartos:");
    scanf("%*c%[^\n]s", casas[j].quartoscs);
    printf("\nPavimentos:");
    scanf("%*c%[^\n]s", casas[j].pavimentos);
}

void cadastra_terreno(t_terreno *terrenos, int k)
{
    printf("Informações:");
    scanf("%*c%[^\n]s", terrenos[k].ter.informacoes);
    printf("\nAnuncio:");
    scanf("%*c%[^\n]s", terrenos[k].ter.anuncio);
    printf("\nPreco:");
    scanf("%*c%[^\n]s", terrenos[k].ter.preco);
    printf("\nTipo de contrato:");
    scanf("%*c%[^\n]s", terrenos[k].ter.contrato);
    printf("\nLogradouro:");
    scanf("%*c%[^\n]s", terrenos[k].ter.local.logradouro);
    printf("\nCEP:");
    scanf("%*c%[^\n]s", terrenos[k].ter.local.cep);
    printf("\nNumero:");
    scanf("%*c%[^\n]s", terrenos[k].ter.local.numero);
    printf("\nBairro:");
    scanf("%*c%[^\n]s", terrenos[k].ter.local.bairro);
    printf("\nCidade:");
    scanf("%*c%[^\n]s", terrenos[k].ter.local.cidade);
    printf("\nArea do terreno:");
    scanf("%*c%[^\n]s", terrenos[k].areater);
}

void consulta_imoveis(t_apartamento *apartamentos, int tama, t_casa *casas, int tamc, t_terreno *terrenos, int tamt)
{
    int i;
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                        APARTAMENTOS                                               \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    for(i=0; i<tama; i++)
    {
        mostra_apartamento(apartamentos, i);
    }
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                        CASAS                                                      \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    for(i=0; i<tamc; i++)
    {
        mostra_casa(casas, i);
    }
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                        TERRENOS                                                   \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    for(i=0; i<tamt; i++)
    {
        mostra_terreno(terrenos, i);
    }
    pressione();
}

void busca_apartamento(t_apartamento *apartamentos, int i, int opcao)
{
    int j;
    char bairro[30];
    char titulo[100];
    int valor;
    switch (opcao)
    {
        case 1:
            system("clear");
            submenu_3_2();
            scanf("%d", &opcao);

            if(opcao == 1)
            {
                for(j = 0; j < i; j++)
                {
                    if(strcmp(apartamentos[j].apto.contrato,"venda") == 0)
                    {
                        mostra_apartamento(apartamentos, j);
                    }
                }
            }
            else if(opcao == 2)
            {
                for(j = 0; j < i; j++)
                {
                    if(strcmp(apartamentos[j].apto.contrato,"aluguel") == 0)
                    {
                        mostra_apartamento(apartamentos, j);
                    }
                }
            }
            pressione();
            break;

        case 2:
            limpa_buffer();
            printf("Qual bairro deseja procurar? ");
            scanf("%[^\n]s", bairro);
            strtok(bairro, "\n");

            for(j = 0; j < i; j++)
            {
                if(strcmp(apartamentos[j].apto.local.bairro, bairro) == 0)
                {
                    mostra_apartamento(apartamentos, j);
                }
            }
            pressione();
            break;

        case 3:
            limpa_buffer();
            printf("Qual titulo de anuncio deseja procurar? ");
            scanf("%[^\n]s", titulo);
            
            for(j = 0; j < i; j++)
            {
                if(strcmp(apartamentos[j].apto.anuncio, titulo) == 0)
                {
                    mostra_apartamento(apartamentos, j);
                }
            }
            pressione();
            break;

        case 4:
            printf("Qual o valor maximo que deseja procurar? ");
            scanf("%d", &valor);

            for(j = 0; j < i; j++)
            {
                if(valor >= atoi(apartamentos[j].apto.preco))
                {
                    mostra_apartamento(apartamentos, j);
                }
            }
            pressione();
            break;

        default:
            break;
        }
}

void busca_casa(t_casa *casas, int j, int opcao)
{
    int a;
    char bairro[30];
    char titulo[100];
    int valor;
    switch (opcao)
    {
        case 1:
            system("clear");
            submenu_3_2();
            scanf("%d", &opcao);

            if(opcao == 1)
            {
                for(a = 0; a < j; a++)
                {
                    if(strcmp(casas[a].cs.contrato,"venda") == 0)
                    {
                        mostra_casa(casas, a);
                    }
                }
            }
            else if(opcao == 2)
            {
                for(a = 0; a < j; a++)
                {
                    if(strcmp(casas[a].cs.contrato,"aluguel") == 0)
                    {
                        mostra_casa(casas, a);
                    }
                }
            }
            pressione();
            break;

        case 2:
            limpa_buffer();
            printf("Qual bairro deseja procurar? ");
            scanf("%[^\n]s", bairro);

            for(a = 0; a < j; a++)
            {
                if(strcmp(casas[a].cs.local.bairro, bairro) == 0)
                {
                    mostra_casa(casas, a);
                }
            }
            pressione();
            break;

        case 3:
            limpa_buffer();
            printf("Qual titulo de anuncio deseja procurar? ");
            scanf("%[^\n]s", titulo);
            
            for(a = 0; a < j; a++)
            {
                if(strcmp(casas[a].cs.anuncio, titulo) == 0)
                {
                    mostra_casa(casas, a);
                }
            }
            pressione();
            break;

        case 4:
            printf("Qual o valor maximo que deseja procurar? ");
            scanf("%d", &valor);

            for(a = 0; a < j; a++)
            {
                if(valor >= atoi(casas[a].cs.preco))
                {
                    mostra_casa(casas, a);
                }
            }
            pressione();
            break;

        default:
            break;
        }
}

void busca_terreno(t_terreno *terrenos, int k, int opcao)
{
    int b;
    char bairro[30];
    char titulo[100];
    int valor;
    switch (opcao)
    {
        case 1:
            system("clear");
            submenu_3_2();
            scanf("%d", &opcao);

            if(opcao == 1)
            {
                for(b = 0; b < k; b++)
                {
                    if(strcmp(terrenos[b].ter.contrato,"venda") == 0)
                    {
                        mostra_terreno(terrenos, b);
                    }
                }
            }
            else if(opcao == 2)
            {
                for(b = 0; b < k; b++)
                {
                    if(strcmp(terrenos[b].ter.contrato,"aluguel") == 0)
                    {
                        mostra_terreno(terrenos, b);
                    }
                }
            }
            pressione();
            break;

        case 2:
            limpa_buffer();
            printf("Qual bairro deseja procurar? ");
            scanf("%[^\n]s", bairro);

            for(b = 0; b < k; b++)
            {
                if(strcmp(terrenos[b].ter.local.bairro, bairro) == 0)
                {
                    mostra_terreno(terrenos, b);
                }
            }
            pressione();
            break;

        case 3:
            limpa_buffer();
            printf("Qual titulo de anuncio deseja procurar? ");
            scanf("%[^\n]s", titulo);
            
            for(b = 0; b < k; b++)
            {
                if(strcmp(terrenos[b].ter.anuncio, titulo) == 0)
                {
                    mostra_terreno(terrenos, b);
                }
            }
            pressione();
            break;

        case 4:
            printf("Qual o valor maximo que deseja procurar? ");
            scanf("%d", &valor);

            for(b = 0; b < k; b++)
            {
                if(valor >= atoi(terrenos[b].ter.preco))
                {
                    mostra_terreno(terrenos, b);
                }
            }
            pressione();
            break;

        default:
            break;
        }
}

int remover_imovel(t_apartamento *apartamentos, int tama, t_casa *casas, int tamc, t_terreno *terrenos, int tamt ,int opcao)
{
    int i, k;

    system("clear");

    switch (opcao)
    {
    case 1:
        for(i=0; i<tama; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_apartamento(apartamentos, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);
        for(i = k + 1; i < tama; i++)
        {
            strcpy(apartamentos[i-1].apto.informacoes,apartamentos[i].apto.informacoes);
            strcpy(apartamentos[i-1].apto.anuncio, apartamentos[i].apto.anuncio);
            strcpy(apartamentos[i-1].apto.preco, apartamentos[i].apto.preco);
            strcpy(apartamentos[i-1].apto.contrato, apartamentos[i].apto.contrato);
            strcpy(apartamentos[i-1].apto.local.logradouro, apartamentos[i].apto.local.logradouro);
            strcpy(apartamentos[i-1].apto.local.cep, apartamentos[i].apto.local.cep);
            strcpy(apartamentos[i-1].apto.local.numero, apartamentos[i].apto.local.numero);
            strcpy(apartamentos[i-1].apto.local.bairro, apartamentos[i].apto.local.bairro);
            strcpy(apartamentos[i-1].apto.local.cidade, apartamentos[i].apto.local.cidade);
            strcpy(apartamentos[i-1].area, apartamentos[i].area);
            strcpy(apartamentos[i-1].quartosapto, apartamentos[i].quartosapto);
            strcpy(apartamentos[i-1].posicao, apartamentos[i].posicao);
            strcpy(apartamentos[i-1].andar, apartamentos[i].andar);
            strcpy(apartamentos[i-1].condominio, apartamentos[i].condominio);
            strcpy(apartamentos[i-1].garagens, apartamentos[i].garagens);
        }
        system("clear");
        return 1;
        break;
    case 2:
        for(i=0; i<tamc; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_casa(casas, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);
        for(i = k + 1; i < tamc; i++)
        {
            strcpy(casas[i-1].cs.informacoes, casas[i].cs.informacoes);
            strcpy(casas[i-1].cs.anuncio, casas[i].cs.anuncio);
            strcpy(casas[i-1].cs.preco, casas[i].cs.preco);
            strcpy(casas[i-1].cs.contrato, casas[i].cs.contrato);
            strcpy(casas[i-1].cs.local.logradouro, casas[i].cs.local.logradouro);
            strcpy(casas[i-1].cs.local.cep, casas[i].cs.local.cep);
            strcpy(casas[i-1].cs.local.numero, casas[i].cs.local.numero);
            strcpy(casas[i-1].cs.local.bairro, casas[i].cs.local.bairro);
            strcpy(casas[i-1].cs.local.cidade, casas[i].cs.local.cidade);
            strcpy(casas[i-1].areaconstruida, casas[i].areaconstruida);
            strcpy(casas[i-1].areaterreno, casas[i].areaterreno);
            strcpy(casas[i-1].quartoscs, casas[i].quartoscs);
            strcpy(casas[i-1].pavimentos, casas[i].pavimentos);
        }
        system("clear");
        return 2;
        break;
    case 3:
        for(i=0; i<tamt; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_terreno(terrenos, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);
        for(i = k + 1; i < tamt; i++)
        {
            strcpy(terrenos[i-1].ter.informacoes, terrenos[i].ter.informacoes);
            strcpy(terrenos[i-1].ter.anuncio, terrenos[i].ter.anuncio);
            strcpy(terrenos[i-1].ter.preco, terrenos[i].ter.preco);
            strcpy(terrenos[i-1].ter.contrato, terrenos[i].ter.contrato);
            strcpy(terrenos[i-1].ter.local.logradouro, terrenos[i].ter.local.logradouro);
            strcpy(terrenos[i-1].ter.local.cep, terrenos[i].ter.local.cep);
            strcpy(terrenos[i-1].ter.local.numero, terrenos[i].ter.local.numero);
            strcpy(terrenos[i-1].ter.local.bairro, terrenos[i].ter.local.bairro);
            strcpy(terrenos[i-1].ter.local.cidade, terrenos[i].ter.local.cidade);
            strcpy(terrenos[i-1].areater, terrenos[i].areater);
        }
        system("clear");
        return 3;
        break;
    default:
        system("clear");
        break;
    }
    return 4;
}

void salvar_arquivo(FILE *apto, t_apartamento * apartamentos, int tama, FILE *cs, t_casa *casas, int tamc, FILE *ter, t_terreno *terrenos, int tamt)
{
    int i;

    apto = fopen("apartamentos.txt", "w");
    cs = fopen("casas.txt", "w");
    ter = fopen("terrenos.txt", "w");

    if(apto == NULL || cs == NULL || ter == NULL)
    {
        printf("===================================================================================================\n");
        printf("===================================================================================================\n");
        printf("             Alguns arquivos nao puderam ser salvos, por favor contate o programador!              \n");
        printf("===================================================================================================\n");
        printf("===================================================================================================\n");
    }
    else
    {
        for(i = 0; i < tama; i++)
        {
            fprintf(apto, "%s\n",apartamentos[i].apto.informacoes);
            fprintf(apto, "%s\n",apartamentos[i].apto.anuncio);
            fprintf(apto, "%s\n",apartamentos[i].apto.preco);
            fprintf(apto, "%s\n",apartamentos[i].apto.contrato);
            fprintf(apto, "%s\n",apartamentos[i].apto.local.logradouro);
            fprintf(apto, "%s\n",apartamentos[i].apto.local.cep);
            fprintf(apto, "%s\n",apartamentos[i].apto.local.numero);
            fprintf(apto, "%s\n",apartamentos[i].apto.local.bairro);
            fprintf(apto, "%s\n",apartamentos[i].apto.local.cidade);
            fprintf(apto, "%s\n",apartamentos[i].area);
            fprintf(apto, "%s\n",apartamentos[i].quartosapto);
            fprintf(apto, "%s\n",apartamentos[i].posicao);
            fprintf(apto, "%s\n",apartamentos[i].andar);
            fprintf(apto, "%s\n",apartamentos[i].condominio);
            fprintf(apto, "%s\n",apartamentos[i].garagens);
        }
        for(i = 0; i < tamc; i++)
        {
            fprintf(cs, "%s\n",casas[i].cs.informacoes);
            fprintf(cs, "%s\n",casas[i].cs.anuncio);
            fprintf(cs, "%s\n",casas[i].cs.preco);
            fprintf(cs, "%s\n",casas[i].cs.contrato);
            fprintf(cs, "%s\n",casas[i].cs.local.logradouro);
            fprintf(cs, "%s\n",casas[i].cs.local.cep);
            fprintf(cs, "%s\n",casas[i].cs.local.numero);
            fprintf(cs, "%s\n",casas[i].cs.local.bairro);
            fprintf(cs, "%s\n",casas[i].cs.local.cidade);
            fprintf(cs, "%s\n",casas[i].areaconstruida);
            fprintf(cs, "%s\n",casas[i].areaterreno);
            fprintf(cs, "%s\n",casas[i].quartoscs);
            fprintf(cs, "%s\n",casas[i].pavimentos);
        }
        for(i = 0; i < tamt; i++)
        {
            fprintf(ter, "%s\n",terrenos[i].ter.informacoes);
            fprintf(ter, "%s\n",terrenos[i].ter.anuncio);
            fprintf(ter, "%s\n",terrenos[i].ter.preco);
            fprintf(ter, "%s\n",terrenos[i].ter.contrato);
            fprintf(ter, "%s\n",terrenos[i].ter.local.logradouro);
            fprintf(ter, "%s\n",terrenos[i].ter.local.cep);
            fprintf(ter, "%s\n",terrenos[i].ter.local.numero);
            fprintf(ter, "%s\n",terrenos[i].ter.local.bairro);
            fprintf(ter, "%s\n",terrenos[i].ter.local.cidade);
            fprintf(ter, "%s\n",terrenos[i].areater);
        }
        fclose(apto);
        fclose(cs);
        fclose(ter);
        printf("===================================================================================================\n");
        printf("                                 ARQUIVOS SALVOS COM SUCESSO                                       \n");
        printf("===================================================================================================\n");
    }
    pressione();
}
void ler_arquivo(FILE *apto, t_apartamento *apartamentos, int *a, FILE *cs, t_casa *casas, int *b, FILE *ter, t_terreno *terrenos, int *c)
{
    int i = 0;

    apto = fopen("apartamentos.txt", "r");
    cs = fopen("casas.txt", "r");
    ter = fopen("terrenos.txt", "r");

    if(apto == NULL || cs == NULL || ter == NULL)
    {
        printf("===================================================================================================\n");
        printf("===================================================================================================\n");
        printf("             Alguns arquivos nao puderam ser abertos, por favor contate o programador!             \n");
        printf("===================================================================================================\n");
        printf("===================================================================================================\n");
    }
    else
    {
        while (!feof(apto))
        {
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.informacoes);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.anuncio);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.preco);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.contrato);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.local.logradouro);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.local.cep);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.local.numero);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.local.bairro);
            fscanf(apto, "%[^\n]\n",apartamentos[i].apto.local.cidade);
            fscanf(apto, "%[^\n]\n",apartamentos[i].area);
            fscanf(apto, "%[^\n]\n",apartamentos[i].quartosapto);
            fscanf(apto, "%[^\n]\n",apartamentos[i].posicao);
            fscanf(apto, "%[^\n]\n",apartamentos[i].andar);
            fscanf(apto, "%[^\n]\n",apartamentos[i].condominio);
            fscanf(apto, "%[^\n]\n",apartamentos[i].garagens);
            i++;
        }
        *a = i;
        i = 0;
        while (!feof(cs))
        {
            fscanf(cs, "%[^\n]\n",casas[i].cs.informacoes);
            fscanf(cs, "%[^\n]\n",casas[i].cs.anuncio);
            fscanf(cs, "%[^\n]\n",casas[i].cs.preco);
            fscanf(cs, "%[^\n]\n",casas[i].cs.contrato);
            fscanf(cs, "%[^\n]\n",casas[i].cs.local.logradouro);
            fscanf(cs, "%[^\n]\n",casas[i].cs.local.cep);
            fscanf(cs, "%[^\n]\n",casas[i].cs.local.numero);
            fscanf(cs, "%[^\n]\n",casas[i].cs.local.bairro);
            fscanf(cs, "%[^\n]\n",casas[i].cs.local.cidade);
            fscanf(cs, "%[^\n]\n",casas[i].areaconstruida);
            fscanf(cs, "%[^\n]\n",casas[i].areaterreno);
            fscanf(cs, "%[^\n]\n",casas[i].quartoscs);
            fscanf(cs, "%[^\n]\n",casas[i].pavimentos);
            i++;
        }
        *b = i;
        i = 0;
        while (!feof(ter))
        {
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.informacoes);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.anuncio);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.preco);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.contrato);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.local.logradouro);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.local.cep);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.local.numero);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.local.bairro);
            fscanf(ter, "%[^\n]\n",terrenos[i].ter.local.cidade);
            fscanf(ter, "%[^\n]\n",terrenos[i].areater);
            i++;
        }
        *c = i;
        fclose(apto);
        fclose(cs);
        fclose(ter);
        printf("===================================================================================================\n");
        printf("                                  ARQUIVOS LIDOS COM SUCESSO                                       \n");
        printf("===================================================================================================\n");
        
    }
    pressione();
}

void editar_imovel(t_apartamento *apartamentos, int tama, t_casa *casas, int tamc, t_terreno *terrenos, int tamt ,int opcao)
{
    int i, k;

    system("clear");

    switch (opcao)
    {
    case 1:
        for(i=0; i<tama; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_apartamento(apartamentos, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);

        system("clear");

        cadastra_apartamento(apartamentos, k);

        system("clear");
        break;
    case 2:
        for(i=0; i<tamc; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_casa(casas, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);

        system("clear");

        cadastra_casa(casas, k);

        system("clear");
        break;
    case 3:
        for(i=0; i<tamt; i++)
        {
            printf("---------------------------------------------------------------------------------------------------\n");
            printf("                                         OPCAO \'%d\'                                              \n", i);
            printf("---------------------------------------------------------------------------------------------------\n");
            mostra_terreno(terrenos, i);
            printf("---------------------------------------------------------------------------------------------------\n");
        }
        printf("===================================================================================================\n");
        printf("--------------------------------------ESCOLHA UMA OPCAO--------------------------------------------\n");
        scanf("%d", &k);

        system("clear");
            
        cadastra_terreno(terrenos, k);

        system("clear");
        break;
    default:
        system("clear");
        break;
    }
}

int main(void){

    int opcao, i=0, j=0, k=0;

    t_apartamento apartamentos[TAM];
    t_casa casas[TAM];
    t_terreno terrenos[TAM];

    FILE *apto, *cs, *ter;

    system("clear");

    ler_arquivo(apto, apartamentos, &i, cs, casas, &j, ter, terrenos, &k);
 
    while(1)
    {
    menu_inicial:
        
        menu_principal();

        scanf("%d", &opcao);

        if(opcao == 1)
        {
            system("clear");
            consulta_imoveis(apartamentos, i, casas, j, terrenos, k);
            goto menu_inicial;
            
            
        }
        else if(opcao == 2)
        {
            system("clear");
            printf("CADASTRAR IMOVEIS\n");
            submenu_2();
            printf("Qual tipo de imovel voce deseja cadastrar?");
            scanf("%d", &opcao);
            system("clear");


            if(opcao == 1)
            {
                cadastra_apartamento(apartamentos, i);
                system("clear");
                i++;


            }
            else if(opcao == 2)
            {
                cadastra_casa(casas, j);
                system("clear");
                j++;
            }
            else if (opcao == 3)
            {
                cadastra_terreno(terrenos, k);
                system("clear");
                k++;
            }
            else
            {
                system("clear");
                goto menu_inicial;
            }
            
            printf("\nImovel cadastrado com sucesso!\n");

            goto menu_inicial;

        }
        else if(opcao == 3)
        {
            system("clear");
            submenu_3();
            scanf("%d", &opcao);
            if(opcao == 1)
            {
                system("clear");
                submenu_3_1();
                scanf("%d", &opcao);
                busca_apartamento(apartamentos, i, opcao);
            }
            else if(opcao == 2)
            {
                system("clear");
                submenu_3_1();
                scanf("%d", &opcao);
                busca_casa(casas, j, opcao);
            }
            else if(opcao == 3)
            {
                system("clear");
                submenu_3_1();
                scanf("%d", &opcao);
                busca_terreno(terrenos, k, opcao);
            }
            else
            {
                system("clear");
                goto menu_inicial;
            }
            
            
        }
        else if(opcao == 4)
        {
            system("clear");
            submenu_4();
            scanf("%d", &opcao);
            switch(remover_imovel(apartamentos, i, casas, j, terrenos, k, opcao))
            {
                case 1:
                    i--;
                    break;
                case 2:
                    j--;
                    break;
                case 3:
                    k--;
                    break;
                default:
                    goto menu_inicial;
            }
        }
        else if(opcao == 5)
        {
            system("clear");
            puts("EDITAR IMOVEIS\n");
            submenu_5();
            scanf("%d", &opcao);
            editar_imovel(apartamentos, i, casas, j, terrenos, k, opcao);
            printf("Imovel editado com sucesso!\n");
            goto menu_inicial;
        }
        else
        {
            system("clear");
            salvar_arquivo(apto, apartamentos, i, cs, casas, j, ter, terrenos, k);
            printf("---------------------------OBRIGADO POR USAR NOSSO PROGRAMA! ATÉ MAIS!-----------------------------\n");
            printf("------------------------------------FEITO POR ANDRE HUGO (P2)!-------------------------------------\n");
            break;
        }
        
    }
    
    return 0;
}