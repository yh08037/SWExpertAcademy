#include <stdio.h>

int main(void) {
    int t; scanf("%d", &t);
    int table[9][9];
    int tmp;

    for(int n=1; n<=t; n++){

        /* suppose table is valid */
        int isValid = 1;

        /* take input values */
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                scanf("%d", table[i]+j);
            }
        }

        /* row direction */
        for(int i=0; isValid && i<9; i++){
            int validation[9] ={0,};
            for(int j=0; j<9; j++){
                validation[table[i][j]-1]++;
            }
            for(int j=0; j<9; j++){
                if(validation[j]!=1){
                    isValid = 0;
                    break;
                }
            }
        }

        /* column direction */
        for(int i=0; isValid && i<9; i++){
            int validation[9] ={0,};
            for(int j=0; j<9; j++){
                validation[table[j][i]-1]++;
            }
            for(int j=0; j<9; j++){
                if(validation[j]!=1){
                    isValid = 0;
                    break;
                }
            }
        }

        /* 3X3 boxes */
        for(int i=0; isValid && i<3; i++){
            for(int j=0; isValid && j<3; j++){
                int validation[9] = {0, };
                for(int a=0; a<3; a++){
                    for(int b=0; b<3; b++){
                        validation[table[a+3*i][b+3*j]-1]++;
                    }
                }
                for(int k=0; k<9; k++){
                    if(validation[k]!=1){
                        isValid = 0;
                        break;
                    }
                }
            }
        }

        printf("#%d %d\n", n, isValid);

    }

    return 0;
}
