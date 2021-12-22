
#include <iostream>

int main()
{
    int codigo, qtdClienteEntrou, qtdClienteSaiu, qtdDisponivel;
    qtdClienteEntrou = qtdClienteSaiu = 0;
    qtdDisponivel = 40;

    do
    {
         system("cls");
         printf("RESTAURANTE FUR ALLES \n");
         printf("Insira um codigo abaixo: \n");
         printf("0 - Encerrar o programa \n");
         printf("1 - Entrar uma pessoa no restaurante \n");
         printf("2 - Sair uma pessoa do restaurante \n");
         printf("3 - Mostrar quantos lugares estao disponiveis \n");
         printf("4 - Mostrar o total de pessoas que entraram \n");
         printf("5 - Mostrar o total de pessoas que sairam \n");
         printf("Escolha uma opcao: ");
         scanf_s("%d", &codigo);


         switch (codigo)
         {
            case 0:
                printf("Encerrando programa... \n");
                break;
            case 1:
                if (qtdDisponivel > 0)
                {
                    printf("Cliente adicionado! \n");
                    qtdClienteEntrou++;
                    qtdDisponivel--;
                }
                else
                {
                    printf("Restaurante cheio!!! \n");
                }
                break;
            case 2:
                if (qtdDisponivel == 40)
                {
                    printf("Nao ha cliente para ser removido. Restaurante vazio! \n");
                }
                else
                {
                    printf("Saida de cliente confirmada! \n");
                    qtdClienteSaiu++;
                    qtdDisponivel++;
                }
                break;
                
            case 3:
                printf("Lugares disponiveis: %d \n", qtdDisponivel);
                break;
            case 4:
                printf("Total de pessoas que entraram: %d \n", qtdClienteEntrou);
                break;
            case 5:
                printf("Total de pessoas que sairam: %d \n", qtdClienteSaiu);
                break;
            default:
                printf("Codigo invalido!!! \n");
                break;
         }
         system("pause");

    } while (codigo != 0);
}

