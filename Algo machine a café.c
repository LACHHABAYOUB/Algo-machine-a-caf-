#include <stdio.h>
int main(){

    int argent,np1,nb1,np2,nb5,nb10,recu,recu1;
     
    printf("Veuillez entrez la somme d'argent: \n",argent);
    scanf("%d", &argent);
    	 if(argent<3){
    	 	printf("il te manque %d dh ",3-argent);
        ;}
        
		else{
		argent=argent-3;
		nb10 = argent/10;
		argent = argent%10;
		nb5 = argent/5;
		argent = argent%5;
		np2 = argent/2;
		argent = argent%2;
		np1 = argent;
		printf("Il faut rendre  %d piece de 10 DH\n", nb10);
		printf("Il faut rendre  %d piece de 5 DH\n", nb5);
		printf("Il faut rendre  %d piece de 2 DH\n", np2);
		printf("Il faut rendre  %d piece de 1 DH\n", np1);
			}
				}

		
	
		
		
		
		
		
		
		
		
		
