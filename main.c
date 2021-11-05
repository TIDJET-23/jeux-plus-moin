#include <stdio.h>
#include <stdlib.h>

int main()
{
    //les variable a utiliser dans notre programme
    int choixnbr , choixniv; //pour choisir le nombre de joueur et le niveux
    char ch1[50],ch2[50]; //pour les noms des joueur
    int max ,min;
    int nbr_a_trouver; //nombre cacher
    int nbr_entre; //le nombre de joueur
    int i=0; //compteur de joueur N:01
    int j=0; //compteur de joueur N:01

    //introduction
     printf("\t     ----------------------------------\n");
     printf("****************    bienvenue dans mon jeux   ********************\n");
     printf("\t     ----------------------------------\n");
    //nombre de joueur
     printf("\n");
     printf("\t \t   ===========================\n");
     printf("\t \t   >entre le nombre de joueur<\n");
     printf("\t \t   ===========================\n");
     printf("\n");
     printf("\t \t   1/- un joueur \n");
     printf("\t \t   2/- deux joueurs \n");
     printf("\n");
     printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      do{
      printf("\t \t   choisire '1' ou  '2' svp  \t");
      scanf("%d",&choixnbr);
      printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


      printf("\n");
      printf("\n");
     }while(choixnbr<1|| choixnbr>2);
     printf("******************************************************************\n");
     printf("******************************************************************\n");
     printf("\n");
     //pour le niveau
     printf("\t \t   ==========================\n");
     printf("\t \t        >entre le niveau<\n");
     printf("\t \t   ==========================\n");
     printf("\n");
     printf("\t \t   1/- facil\n");
     printf("\t \t   2/- moyen \n");
     printf("\t \t   3/- deficile\n");
     printf("\n");
     do{
      printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("\t \t   choisire 1 ou 2 ou 3 \t");
      scanf("%d",&choixniv);
      printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


      printf("\n");
      printf("\n");
     }while(choixniv<1|| choixniv>3);
      printf("******************************************************************\n");
      printf("******************************************************************\n");
      printf("\n");
      printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

     //le jeux commance ici
     switch(choixnbr){
    //111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
    case 1://si on a un  seul joueur
            printf("\t \t   entre votre nom svp :");
            scanf("%s",&ch1);
            printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("\n");
            printf("******************************************************************\n");
            printf("******************************************************************\n");
            printf("\n");
            printf("\t \t   ==========================\n");
            printf("\t \t      >cest parte %s \n",ch1);
            printf("\t \t   ==========================\n");
            printf("\n");

                    switch(choixniv){
                    case 1: //niveu facile
                                max=100;
                                min=0;
                                srand(time(NULL));
                                nbr_a_trouver=(rand() % (max - min + 1)) +min;
                                do{
                                        printf("\t \t   __________________________\n");
                                        printf("\t \t   entre votre nombre svp : ");
                                        scanf("%d",&nbr_entre);
                                        printf("\t \t   __________________________\n");
                                        if(nbr_entre!=nbr_a_trouver){
                                        if(nbr_entre<nbr_a_trouver){
                                         printf("\t \t   ==========================\n");
                                         printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                        }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                        }
                                        i++;
                                        }else{
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        i++;
                                        }
                                }while(nbr_a_trouver!=nbr_entre);
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("   bravo %s vous avais trouver le nombre '%d' en %d coups: \n",ch1,nbr_a_trouver ,i);

                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    break;
//------------------------------fin de niveau 01
                    case 2: //niveu moyn
                                max=1000;
                                min=0;
                                srand(time(NULL));
                                nbr_a_trouver=(rand() % (max - min + 1)) +min;
                                do{
                                        printf("\t \t   __________________________\n");
                                        printf("\t \t   entre votre nombre svp : ");
                                        scanf("%d",&nbr_entre);
                                        printf("\t \t   __________________________\n");
                                        if(nbr_entre!=nbr_a_trouver){
                                        if(nbr_entre<nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                        }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                        }
                                        i++;
                                        }else{
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        i++;
                                        }
                                }while(nbr_a_trouver!=nbr_entre);

                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("   bravo %s vous avais trouver le nombre '%d' en %d coups: \n",ch1,nbr_a_trouver ,i);

                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    break;
//-------fin de niveau 2-----------------------------------------------------
                    case 3: //niveu defcil
                            max=10000;
                            min=0;
                            srand(time(NULL));
                            nbr_a_trouver=(rand() % (max - min + 1)) +min;
                            do{
                                    printf("\t \t   __________________________\n");
                                    printf("\t \t   entre votre nombre svp : ");
                                    scanf("%d",&nbr_entre);
                                    printf("\t \t   __________________________\n");
                                    if(nbr_entre!=nbr_a_trouver){
                                    if(nbr_entre<nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                    }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                    }
                                    i++;
                                    }else{
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    i++;
                                    }
                            }while(nbr_a_trouver!=nbr_entre);
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("   bravo %s vous avais trouver le nombre '%d' en %d coups: \n",ch1,nbr_a_trouver ,i);

                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    break;
//-------------------fin niveau 3
                    }
    break;
    case 2://222222222222222222222222222222222222222222222222222222222222222222222222
             printf("\t \t   entre le nom de jouer 01:");
             scanf("%s",&ch1);
             printf("\t \t   entre le nom de jouer 02:");
             scanf("%s",&ch2);
             printf("\t \t   ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
             printf("\n");
             printf("******************************************************************\n");
             printf("******************************************************************\n");
             printf("\n");
             printf("\t \t   ==========================\n");
             printf("\t \t   c'est parte %s et %s\n",ch1,ch2);
             printf("\t \t   ==========================\n");
             printf("\n");
             printf("\n");
                        switch(choixniv){
//----pour niveau 1-----------------------------------
                       case 1: //niveau facile
                            max=100;
                            min=0;
                            printf("\t \t   ==========================\n");
                            printf("\t \t   votre tour %s \n",ch1);
                            printf("\t \t   ==========================\n");
                            printf("\n");
                            srand(time(NULL));
                            nbr_a_trouver=(rand() % (max - min + 1)) +min;
//joueur1
                            do{

                                    printf("\t \t   __________________________\n");
                                    printf("\t \t   entre votre nombre svp : ");
                                    scanf("%d",&nbr_entre);
                                    printf("\t \t   __________________________\n");
                                    if(nbr_entre!=nbr_a_trouver){
                                    if(nbr_entre<nbr_a_trouver){
                                    printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                    i++;

                                    }else if(nbr_entre>nbr_a_trouver){
                                                                            printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                    }
                                     i++;
                                     }else{
                                    i++;
                                    printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    }
                            }while(nbr_a_trouver!=nbr_entre);
//jorur 2:
                            printf("\t \t   ==========================\n");
                            printf("\t \t   votre tour %s \n",ch2);
                            printf("\t \t   ==========================\n");
                            printf("\n");
                            srand(time(NULL));
                            nbr_a_trouver=(rand() % (max - min + 1)) +min;
                            do{
                                    printf("\t \t   _________________________\n");
                                    printf("\t \t   entre votre nombre svp : ");
                                    scanf("%d",&nbr_entre);
                                    printf("\t \t   _________________________\n");
                                    if(nbr_entre!=nbr_a_trouver){
                                    if(nbr_entre<nbr_a_trouver){
                                    printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                    }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                    }
                                    j++;
                                    }else{
                                    j++;
                                    printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    }
                            }while(nbr_a_trouver!=nbr_entre);
    //resultat
                            printf("             ****%s   :   ''%d'' -- ''%d'' :   %s**** \n",ch1,i,j,ch2 );
                            if(i<j){
                            printf("                                                           %s est gagnat\n",ch1);
                            }else if(i>j){
                            printf("                                                           %s est gagnant\n",ch2);
                            }else{
                            printf("                                                             egalete \n");
                            }
                    break;
//----------------------pour niveau 2
                    case 2:
                            max=1000;
                            min=0;
                            printf("\t \t   ==========================\n");
                            printf("\t \t   votre tour %s \n",ch1);
                            printf("\t \t   ==========================\n");
                            printf("\n");
                            srand(time(NULL));
                            nbr_a_trouver=(rand() % (max - min + 1)) +min;
                            do{
                                    printf("\t \t   _________________________\n");
                                    printf("\t \t   entre votre nombre svp : ");
                                    scanf("%d",&nbr_entre);
                                    printf("\t \t   _________________________\n");
                                    if(nbr_entre!=nbr_a_trouver){
                                    if(nbr_entre<nbr_a_trouver){
                                    printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                    }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                    }
                                    i++;
                                    }else{
                                    printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    i++;
                                    };
                            }while(nbr_a_trouver!=nbr_entre);
    //jour 2:
                            printf("\t \t   ==========================\n");
                            printf("\t \t   votre tour %s \n",ch2);
                            printf("\t \t   ==========================\n");
                            printf("\n");
                            srand(time(NULL));
                            nbr_a_trouver=(rand() % (max - min + 1)) +min;
                            do{
                                    printf("\t \t   _________________________\n");
                                    printf("\t \t   entre votre nombre svp : ");
                                    scanf("%d",&nbr_entre);
                                    printf("\t \t   _________________________\n");

                                    if(nbr_entre!=nbr_a_trouver){
                                    if(nbr_entre<nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                    }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                    }
                                    j++;
                                    }else{
                                    printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    j++;
                                    };
                            }while(nbr_a_trouver!=nbr_entre);
//resultat
                            printf("%s :%d -- %d : %s \n",ch1,i,j,ch2 );
                            if(i<j){
                            printf("%s est gagnat\n",ch1);
                            }else if(i>j){
                            printf("%s est gagnant\n",ch2);
                            }else{
                            printf("egalete \n");
                            }
                        break;
//-------------pour niveau 3
                        case 3:
                        max=10000;
                        min=0;
                        srand(time(NULL));
                        nbr_a_trouver=(rand() % (max - min + 1)) +min;
                        printf("\t \t   ==========================\n");
                        printf("\t \t   votre tour %s \n",ch1);
                        printf("\t \t   ==========================\n");
                        printf("\n");
                        do{
                                printf("\t \t   _________________________\n");
                                printf("\t \t   entre votre nombre svp : ");
                                scanf("%d",&nbr_entre);
                                printf("\t \t   _________________________\n");

                                if(nbr_entre!=nbr_a_trouver){
                                if(nbr_entre<nbr_a_trouver){
                                printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                }else if(nbr_entre>nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                }
                                i++;
                                }else{
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                i++;
                                };
                        }while(nbr_a_trouver!=nbr_entre);
    //jour 2:
                            printf("\t \t   ==========================\n");
                            printf("\t \t   votre tour %s \n",ch2);
                            printf("\t \t   ==========================\n");
                            printf("\n");
                        srand(time(NULL));
                        nbr_a_trouver=(rand() % (max - min + 1)) +min;
                        do{
                                printf("\t \t   _________________________\n");
                                printf("\t \t   entre votre nombre svp : ");
                                scanf("%d",&nbr_entre);
                                printf("\t \t   _________________________\n");

                                if(nbr_entre!=nbr_a_trouver){
                                if(nbr_entre<nbr_a_trouver){
                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est petit < \n");
                                         printf("\t \t   ==========================\n");
                                }else if(nbr_entre>nbr_a_trouver){
                                                                        printf("\t \t   ==========================\n");
                                        printf("\t \t   > votre nombre est grand < \n");
                                        printf("\t \t   ==========================\n");
                                        j++;
                                }

                                }else{
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                        printf("\t \t    bravoooooooooooooooooooo \n");
                                        printf("\t \t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                j++;
                                };
                        }while(nbr_a_trouver!=nbr_entre);
    //resultat
                        printf("%s :%d -- %d : %s \n",ch1,i,j,ch2 );
                        if(i<j){
                        printf("%s est gagnat\n",ch1);
                        }else if(i>j){
                        printf("%s est gagnant\n",ch2);
                        }else{
                        printf("egalete \n");
                        }
                break;
                }
    break;
    }
//footer
    printf("\n");
    printf("\n");
     printf("\t     --------------------------------------\n");
     printf("****************    merci davoir jouer mon jeux   ********************\n");
     printf("\t     --------------------------------------\n");
}

