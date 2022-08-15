#include<stdio.h>
int main(){

    float kg,total=0,Ttotal=0;
    int fish[4]={0,0,0,0},Afish[4]={0,0,0,0},menu;
    int customer=0,end1,end2;

    do{
        printf("Hello customer #%d , what would you like ? : ",customer+1);
        customer++;
        do{
            printf("Type of fish :\n");
            printf(" 0.8 - 1.0 kg 150 Baht\n");
            printf(" 1.0 - 1.5 kg 200 Baht\n");
            printf(" 1.5 - 2.0 kg 250 Baht\n");
            printf(" 3.0+ kg 300 Baht\n");
            printf("0. calculate money\n");
            printf("Enter fish's weight : ");
            scanf("%f",&kg);
            if((kg>=8/10)&&(kg<1)){
                fish[0]++;
                Afish[0]=kg*150;
            }
            else
                if((kg>=1)&&(kg<15/10)){
                    fish[1]++;
                    Afish[1]=kg*200;
                }
                else
                    if((kg>=15/10)&&(kg<2)){
                        fish[2]++;
                        Afish[2]=kg*250;
                    }
                    else
                        if(kg>=3){
                            fish[3]++;
                            Afish[3]=kg*300;
                        }
                        else    
                            if(menu==0)
                                break;
                            else
                                printf("== ERROR == ");

            printf("Do you want more ? (1 for yes): ");
            scanf("%d",&end1);

        }while(end1==1);

        printf("ORDER #%d :\n");
        printf("Type 1 have %d : %.2f Baht",fish[0],Afish[0]);
        printf("Type 2 have %d : %.2f Baht",fish[1],Afish[1]);
        printf("Type 3 have %d : %.2f Baht",fish[2],Afish[2]);
        printf("Type 4 have %d : %.2f Baht",fish[3],Afish[3]);

    }while(end2==1);

    printf("END");

    return 0;
}