#include <stdio.h>
#include <stdlib.h>
#include "TList.h"

int main () {
    
    //dados:
    
    Lista *alunos;
    Lista *alunosOrd;
    aluno consulta;

    aluno A[4] = {
        {1000, "Pedro Henrique ", 10,10,10}, 
        {1121, "Victor Hugo ", 10,10,10 },
        {1432, "Pabllo Emilio ", 8,7,10 },
        {1765, "Benjamin Tennyson", 2,8,6 }   
    };
    aluno B[4] = {
        {1236, "Sergio Prado", 8,10,10}, 
        {1224, "Mick Jagger", 10,6,4 },
        {1170, "Vanessa da Cidade", 10,6,9 },
        {1680, "Silvio Santos Junior", 7,9,9 }   
    };
    
    //cria a lista:
    alunos =cria_lista();
    alunosOrd =cria_lista();

    // insere aluno no final:

    for (int i = 0; i < 4; i++)
    {
        insere_lista_final(alunos,A[i]);
        
    }
    // insere aluno no inicio:
    for (int i = 0; i < 4; i++)
    {
        insere_lista_inicio(alunos,B[i]);
        
    }

    // consulta aluno na posição:
    int pos;
    printf("qual posicao deve ser acessado: ");
    
    scanf("%i",&pos);

    consulta_lista_pos(alunos,pos,&consulta);

    printf("\n\n%i - %s\n\n| nota1 : %.1f | nota2 : %.1f | nota3 : %.1f |\n\n",consulta.matricula,consulta.nome,consulta.nota1,consulta.nota2,consulta.nota3);
    
    // consulta aluno a partir da matricula:
    int mat;
    

    printf("qual matricula deve ser acessada: ");
    
    scanf("%i",&mat);

    consulta_lista_mat(alunos,mat,&consulta);

    printf("\n\n%i - %s\n\n| nota1 : %.1f | nota2 : %.1f | nota3 : %.1f |\n\n",consulta.matricula,consulta.nome,consulta.nota1,consulta.nota2,consulta.nota3);
    
    //insere lista ordenada:
    for (int i = 0; i < 4; i++)
    {
        insere_lista_ordenada(alunosOrd,B[i]);       
    }
    //remove o primeiro registro:

    remove_lista_inicio(alunosOrd);

    //remove o ultimo registro:

    remove_lista_final(alunos);

    //remove elemento a partir da matricula:
    
    printf("qual matricula deseja remover da segunda lista: ");
    
    scanf("%i",&mat);
    printf("\n");
    remove_lista(alunos,mat);

    //remove elemento a partir da matricula OTIMIZADO:

    printf("OTIMIZADO - qual matricula deseja remover da segunda lista: ");
    
    scanf("%i",&mat);
    printf("\n");
    remove_lista_otimizado(alunos,mat);

    //tamanho da lista:
    int tamanho;

    tamanho = tamanho_lista(alunosOrd);
    printf("O tamanho da segunda lista eh: %i\n\n ",tamanho);
    
    //verifica se a lista esta cheia :

    tamanho = lista_cheia(alunos);
    if (tamanho == 1)
    {
        printf("A segunda lista esta cheia\n\n ");

    }else
    {
        printf("A segunda lista NAO esta cheia\n\n ");

    }

    //verifica se a lista está vazia :

    tamanho = lista_vazia(alunosOrd);
    if (tamanho == 1)
    {
        printf("A segunda lista esta vazia\n\n ");

    }else
    {
        printf("A segunda lista NAO esta vazia\n\n ");

    }


    //imprime lista:
    printf("\n");
    imprime_lista(alunos);
    printf("\n");
    printf("\n");
    imprime_lista(alunosOrd);





    //libera a memoria.
    libera_lista(alunos);
    libera_lista(alunosOrd);
}