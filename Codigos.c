#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int (sintomas), (contato), (resultado), (resultado2);

int main()
{
	char nome [50], endereco[100], cpf[12];
	int rg[7];
	
	printf ("Sistema para diagnostico COVID-19\n");
	
	printf ("\nNome do paciente: "); 
    fgets(nome, 50, stdin);
	
	printf ("RG: ");
	scanf ("%s",&rg);
	
	printf("Numero do CPF: ");
    scanf("%s",&cpf);
    
    printf("Endereco do paciente: ");
    gets(endereco);
    fgets(endereco, 50, stdin);
    
    printf("\nFinalizar Cadastro");
    printf("\n1 - Salvar");
    printf("\n2 - Cancelar\n");

    char sopcao[5];
    fgets(sopcao, 5, stdin);
    int opcao = atoi(sopcao);

    if (opcao == 1) {
        printf("Cadastro realizado com sucesso!\n");
    } else if (opcao == 2) {
        printf("Cadastro cancelado.\n");
    } else {
        printf("Opcao desconhecida %d.\n", opcao);
    }

    printf("Nome: %s", nome);
    printf("RG: %s\n", rg);
    printf("CPF: %s\n", cpf);
    printf("Endereco: %s\n", endereco);
    
    printf("\nSintomas:");
    printf("\n1 - Dor de cabeca");
    printf("\n2 - Dor de cabeca e dor no corpo");
    printf("\n3 - Dor de cabeca e febre");
    printf("\n4 - Dor de cabeca e tosse seca");
    printf("\n5 - Dor de cabeca e falta de ar");
    printf("\n6 - Dor de cabeca e perda de paladar");
    printf("\n7 - Dor de cabeca e perda de olfato");
    printf("\n8 - Dor de cabeca, dor no corpo e febre");
    printf("\n9 - Dor de cabeca, dor no corpo, febre e tosse seca");
    printf("\n10 - Dor de cabeca, dor no corpo, febre, tosse seca, falta de ar");
    printf("\n11 - Dor de cabeca, dor no corpo, febre, tosse seca, falta de ar e perda de paladar");
    printf("\n12 - Dor de cabeca, dor no corpo, febre, tosse seca, falta de ar e perda de paladar e perda de olfato");
    printf("\n13 - Dor no corpo");
    printf("\n14 - Dor no corpo e febre");
    printf("\n15 - Dor no corpo e falta de ar");
    printf("\n16 - Dor no corpo e tosse seca");
    printf("\n17 - Dor no corpo e perda de paladar");
    printf("\n18 - Dor no corpo e perda de olfato");
    printf("\n19 - Dor no corpo, febre, tosse seca");
    printf("\n20 - Dor no corpo, febre, tosse seca e falta de ar");
    printf("\n21 - Dor no corpo, febre, tosse seca, falta de ar e perda de paladar");
    printf("\n22 - Dor no corpo, febre, tosse seca, falta de ar, perda de paladar e perda de olfato");
    printf("\n23 - Febre");
    printf("\n24 - Febre e tosse seca");
    printf("\n25 - Febre e falta de ar");
    printf("\n26 - Febre e falta de ar");  
    printf("\n27- Febre, tosse seca e falta de ar ");
    printf("\n28 - Febre, tosse seca, falta de ar e perda de paladar ");
    printf("\n29 - Febre, tosse seca, falta de ar, perda de paladar e perda de olfato ");
    printf("\n30 - Tosse seca");
    printf("\n31 - Tosse seca e falta de ar");
    printf("\n32 - Tosse seca e perda de paladar");
    printf("\n33 - Tosse seca e perda de olfato");
    printf("\n34 - Tosse seca, falta de ar e perda de paladar");
    printf("\n35 - Tosse seca, falta de ar, perda de paladar e perda de olfato");
    printf("\n36 - Falta de ar");
    printf("\n37 - Falta de ar e perda de paladar");
    printf("\n38 - Falta de ar e perda de olfato");
    printf("\n39 - Falta de ar, perda de paladar e perda de olfato");
    printf("\n40 - Perda de paladar");
    printf("\n41 - Perda de olfato");
    printf("\n42 - Nenhum sintoma\n");
    
    printf("\nQuais sintomas o paciente esta sentindo?\n");
    scanf ("%d",&sintomas);
    switch(sintomas)
    {
        case 1:
    	    printf("\nTeve contato com algum infectado?");
    	    printf("\n1 - Sim");
            printf("\n3 - Nao\n");
            scanf ("%d",&contato);
            switch(contato)
            {
            	case 1:
            		printf("\nSuspeito de COVID-19, dirija-se ate o laboratorio para fazer o teste rapido.\n");
            		printf("\nResultado do teste:");
            		printf("\n2 - Positivo");
					printf("\n3 - Negativo\n");
            		scanf ("%d", &resultado);
            		switch(resultado) 
					{
						case 2:
						printf("\nDiagnostico:");
						printf("\nPaciente devera ficar dez dias em isolamento e em caso de piora retornar.");
						break;
						
						case 3:
						printf("\nDiagnostico:");
						printf("Receitar um remedio para dor de cabeca e liberar paciente.");
						break;
					}	
            }

    }
return 0;
}    
