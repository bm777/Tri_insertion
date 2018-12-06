#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]){
int* M = NULL;
int i;
int t, a, b;
int j;
int n; n = 1;

     printf("[infos] >: INITIALISATION______________________\n");
    printf("[infos] >: Triage de tableau___________________\n");
    printf("[infos] >: I est la l'intervale de nbr aleaoire \n");
    printf("[infos] >: Entrez la taille du tableau : ");

    scanf("%d", &n);
    M = malloc(n *sizeof(int));
    printf("[infos] >: Entrez la 1ere Val de I : [ * , * ] >: ");
    scanf("%d", &a);
    printf("[infos] >: Entrez la 2e Val de I : [ %d , * ] >: ", a);
    scanf("%d", &b);
    printf("[infos] >: L'intervalle I : [ %d , %d ] >: ", a, b);
    for(i = 0; i < n; i++){
        M[i] = rand() % (b-a) + a;
        printf("\nValeur de M[%d] >: %d", i, M[i]);

        }
    printf("\n[infos] >: Computing....\n");
    for(i = 1; i < n; i++){
        t = M[i];
        j=i;
        while(j > 0 && M[j-1]>t){
            M[j] = M[j-1];
            j-=1;
        }M[j] = t;
        }

    printf("\n[infos] >: Tableau trié\n\n");
    printf("[ ");
    for(i = 0; i < n; i++){
        printf("%d ", M[i]);
        }
    printf(" ]");

    return 0;
}
