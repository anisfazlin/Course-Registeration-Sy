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
    
     }while(x>6);
    
    printf("Enter your code course(s): ");
    scanf("%s", &code);
    
    int totalCred =0;
    fflush(stdout);

    while(i<x){
			
        switch(code) {
        
        case 'A' : credhour = credhour+4; break;
        case 'B' : credhour = credhour+4; break;
        case 'C' : credhour = credhour+5; break;
        case 'E' : credhour = credhour+5; break;
        case 'M' : credhour = credhour+5; break;
        case 'P' : credhour = credhour+5; break;
        
        default : printf("Invalid code!\n");
        // break;
        fflush(stdin);
				
        }
        totalCred += credhour;
				
				i++;
    }
    
    printf("Total cred hours is :%d", totalCred);

    return 0;
}




