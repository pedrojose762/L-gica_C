// Online C compiler to run C program online
#include <stdio.h>

void ligarRobo() {
    printf("Robô ligado e pronto para operar!\n");
}

void desligarRobo() {
    printf("Robô desligado com segurança.\n");
}

void pegarPeca () {
    printf("Robô pegou a peça da esteira.\n");
}

void soldarPeca() {
    printf("Robô realizou a soldagem da peça.\n");
}

void montarPeca () {
    printf("Robô montou a peça com sucesso.\n");
}

int main() {
    int opcao;
    
    do {
      // exibe o menu
      printf("\n ========= PAINEL DE CONTROLE DO ROBÔ INDUSTRIAL =========\n");
      printf ("1 - Ligar Robô\n");
      printf ("2 - Desligar Robô\n");
      printf ("3 - Pegar peça\n");
      printf ("4 - Soldar peça\n");
      printf ("5 - Montar peça\n");
      printf ("0 - Sair\n");
      printf ("Digite o número desejado: \n");
      scanf("%d", &opcao ); // solicitando o valor da variável
      
      //executa a função corretamente
      
      switch (opcao){
          case 1:
          ligarRobo();
          break;
          
          case 2:
          desligarRobo();
          break;
          
          case 3:
          pegarPeca();
          break;
          
          case 4:
          soldarPeca();
          break;
          
          case 5:
          montarPeca();
          break;
          
          case 0:
          printf("Saindo do painel de controle...");
          break;
          
          default:
            printf ("opção inválida. Tente novamente...\n");
      }
      } while(opcao != 0);

    return 0;
}