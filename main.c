#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matricnum, x, decide=1; //x is number of courses
    int i=0, credhour=0, totalCred=0, art=0, sci=0;
    char code;
		bool _acc=false, _bus=false, _com=false, _eng=false, _med=false, _pha=false;
    
    do{
        
        printf("Enter your matric number: ");
        scanf("%d", &matricnum);
        
        if(matricnum/100000<1){
            printf("Not enough\n");
        }
        
        else if(matricnum/100000>10){
            printf("Too much\n");
        }
    }while(matricnum/100000<1 || matricnum/100000>10);
    
    printf("\n");
    printf("A- Accounting      B- Business      C- Computing\n");
    printf("E- Engineering     M- Medicine      P- Pharmacy\n\n");
    
  do{
      printf("Enter your number of courses to be taken: ");
      scanf("%d", &x);
      // printf("Value of X is %d\n",x);
	}while(x>6);

	
		if(decide==1){
			for(i=0; i<x; i++){

			printf("Enter your code course(s) #%d: ",i+1);
    	scanf(" %c", &code);

        if(code=='A'||code=='a'){
					credhour+=4;
					_acc = true;
				}
				
        else if(code=='B'||code=='b'){
					credhour+=4;
          _bus = true;
				}

				else if(code=='C'||code=='c'){
					credhour+=5;
					_com = true;
				}

				else if(code=='E'||code=='e'){
					credhour+=5;
					_eng = true;
				}

				else if(code=='M'||code=='m'){
					credhour+=5;
					_med = true;
				}

				else if(code=='P'||code=='p'){
					credhour+=5;
					_pha = true;
				}

				else{
					printf("Invalid code!\n");
          i--;
				}
        // printf("\nCummulative cred hours: %d\n\n",credhour);
			
    }
    printf("\nWould you like to reset OR submit this course registration? \n(1-Reset 2-Submit)\n");
			scanf("%d", &decide);
		// else{ printf("Bye!");}
    
		totalCred += credhour;


    // printf("\nTotal credit hours is :%d", totalCred);


// Art -> A - Accounting, B - Business            
// Science ->C - Computing, E - Engineering, M - Medicine, P - Pharmacy

    if(_acc==true) { art++;}
    if(_bus==true) { art++;}
    if(_com==true) { sci++;}
    if(_eng==true) { sci++;}
    if(_med==true) { sci++;}
    if(_pha==true) { sci++;}

    printf("\n\n%d, you have registered %d Art course(s) and %d Science course(s). \nTotal credit hours is %d.", matricnum, art, sci, totalCred);

    return 0;
  }
}