#include <stdio.h>
#include <stdlib.h>

// movimentação de peças:
	// torre = frente ou lado; | 5 casas para frente
	// bispo = apenas diagonais; | 5 casas para a diagonal direita
	// rainha = frente, lado e diagonais. | 8 casas para a esquerda

void funcao_inicio_xadrez(){
	printf("-----------------------------------");
	printf("\n##### ---| JOGUE XADREZ! |--- #####\n");
	printf("-----------------------------------\n");
}

int main() {
	funcao_inicio_xadrez();
	
	int escolha_da_peca, menu_escolha_tipo_movimento, menu_escolha_quantidade_movimento;
	int i, contagem_quantidade_movimentos = 1; // variaveis criadas para uso no for.
	const char *direcao_movimento;
	
	printf("\nQuem voce deseja movimentar?\n1. Torre\n2. Bispo\n3. Rainha\nEscolha sua opcao (atraves do numero): ");
	scanf("%i", &escolha_da_peca);
	
	switch(escolha_da_peca){
		case 1:
			printf("\n--- Movimentos da Torre: ---\n1. Para a direita\n2. Para a esquerda\n3. Para frente\n4. Para tras\n\nInsira sua escolha (numero da opcao): ");
			scanf("%i", &menu_escolha_tipo_movimento);
			
			switch(menu_escolha_tipo_movimento){
				case 1:
					direcao_movimento = "Para direita";
					break;
				
				case 2:
					direcao_movimento = "Para esquerda";
					break;
					
				case 3:
					direcao_movimento = "Para frente";
					break;
					
				case 4:
					direcao_movimento = "Para tras";
					break;
						
				default:
					printf("Movimento invalido, programa em finalizacao. Tente novamente mais tarde.");
					exit(0);
					break;
			}
			
			break;
			
		case 2:
			printf("\n--- Movimentos do Bispo: ---\n1. Para frente e direita (diagonal)\n2. Para frente e esquerda (diagonal)\n3. Para tras e direita (diagonal)\n4. Para tras e direita (diagonal)\n\nInsira sua escolha (numero da opcao): ");
			scanf("%i", &menu_escolha_tipo_movimento);
			
			switch(menu_escolha_tipo_movimento){
				case 1:
					direcao_movimento = "Para frente e direita (diagonal)";
					break;
				
				case 2:
					direcao_movimento = "Para frente e esquerda (diagonal)";
					break;
					
				case 3:
					direcao_movimento = "Para tras e esquerda (diagonal)";
					break;
					
				case 4:
					direcao_movimento = "Para tras e direita (diagonal)";
					break;
						
				default:
					printf("Movimento invalido, programa em finalizacao. Tente novamente mais tarde.");
					exit(0);
					break;
			}
			
			break;
			
		case 3:
			printf("\n--- Movimentos da Rainha: ---\n1. Para a direita\n2. Para a esquerda\n3. Para frente\n4. Para tras\n\n--- Movimentos na diagonal: ---\n5. Para frente e direita (diagonal)\n6. Para frente e esquerda (diagonal)\n7. Para tras e direita (diagonal)\n8. Para tras e direita (diagonal)\n\nInsira sua escolha (numero da opcao): ");
			scanf("%i", &menu_escolha_tipo_movimento);
			
			switch(menu_escolha_tipo_movimento){
				case 1:
					direcao_movimento = "Para direita";
					break;
				
				case 2:
					direcao_movimento = "Para esquerda";
					break;
					
				case 3:
					direcao_movimento = "Para frente";
					break;
					
				case 4:
					direcao_movimento = "Para tras";
					break;
					
				case 5:
					direcao_movimento = "Para frente e direita (diagonal)";
					break;
				
				case 6:
					direcao_movimento = "Para frente e esquerda (diagonal)";
					break;
					
				case 7:
					direcao_movimento = "Para tras e esquerda (diagonal)";
					break;
					
				case 8:
					direcao_movimento = "Para tras e direita (diagonal)";
					break;
						
				default:
					printf("Movimento invalido, programa em finalizacao. Tente novamente mais tarde.");
					exit(0);
					break;
			}
			
			break;
		
		default:
			printf("\n### Entrada invalida, tente novamente mais tarde. ###");
			exit(0);
			break;
	}
	
	printf("Insira a quantidade de vezes que o movimento sera feito: ");
	scanf("%i", &menu_escolha_quantidade_movimento);
	
	// codigo para mostrar a movimentação:
	for (i = 0; i < menu_escolha_quantidade_movimento; i++){
		if(contagem_quantidade_movimentos == 1){
			printf("\n%i comando: %s.\n", contagem_quantidade_movimentos, direcao_movimento);
		} else {
			printf("%i comando: %s.\n", contagem_quantidade_movimentos, direcao_movimento);	
		}
		
		contagem_quantidade_movimentos++;
	}
		
	return 0;
}