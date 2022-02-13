#include <stdio.h>
int main (){

    float nota[5];
    float media;
    int i, temp = 0;
    
    // lendo as 4 primeiras notas
    for( i = 0; i < 4; i++){
        scanf(" %f", & nota[i]);
    }

    nota[0] *= 2;
    nota[1] *= 3;
    nota[2] *= 4;
    media = nota[0] + nota[1] + nota[2] + nota[3];    
    media /= 10;

    printf("Media: %.1f\n", media);
    
    if ( media >= 7 ){
        printf("Aluno aprovado.\n");
    } else if ( media < 5 ){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf(" %f", &nota[4]);
        printf("Nota do exame: %.1f\n", nota[4]);

        media = (media + nota[4]) / 2 ;

        if( media >= 5){ 
            printf("Aluno aprovado.\n");
        } else { 
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media);
    }

    return 0;
}