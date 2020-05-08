#include <stdio.h>

int main()
{
    int matricnum, credhour, x, i=0; //x is number of courses
    char code;
    /*
    do{
        
        printf("Enter your matric number: ");
        scanf("%d", &matricnum);
        
        if(matricnum/100000<1){
            printf("Not enough\n");
        }
        
        else if(matricnum/100000>10){
            printf("Too much\n");
        }
    }while(matricnum/100000<1 || matricnum/100000>10);*/
    
    // printf("\n");
    // printf("A- Accounting      B- Business      C- Computing\n");
    // printf("E- Engineering     M- Medicine      P- Pharmacy\n\n");
    
  do{
      printf("Enter your number of courses to be taken: ");
      scanf("%d", &x);
      printf("Value of X is %d\n",x);
	}while(x>6);
    
    int totalCred =0;
    
		for(i=0; i<x; i++){

			printf("Enter your code course(s): ");
    	scanf(" %c", &code);

        if(code=='A'||code=='a'){
					credhour+=4;
				}
				
        else if(code=='B'||code=='b'){
					credhour+=4;
				}

				else if(code=='C'||code=='c'){
					credhour+=5;
				}

				else if(code=='E'||code=='e'){
					credhour+=5;
				}

				else if(code=='M'||code=='m'){
					credhour+=5;
				}

				else if(code=='P'||code=='p'){
					credhour+=5;
				}

				else{
					printf("Invalid code!\n");
          i--;
				}

    };
    
		// totalCred += credhour;


    printf("Total cred hours is :%d", totalCred);

    return 0;
}




