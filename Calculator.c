#include <stdio.h>
#include <ctype.h>
#include <math.h>

double d;	// result
long e;    	//result decor
long f=10;    	//result decor counter
short g=0;	// stops program if ERROR ocurrs

void UI(int n,char str,char mid,char end,int s);	// lenght :: starting char :: middle char :: end char :: n° of spaces after the print
void BC();
void box();

int main(void)
{
    
double a;	// input numb.1
double b;	// input numb.2
int c;	// switch...case action



UI (64,'#','=','#',1);

	printf ("  This is a calculator of 2 numbers\n\t\t Please follow the instructions of the program!\n\n");
	printf ("  The limit of this calculator is between 999999999 and -999999999999999\n  If the result surpasses the designated border you will recieve an [ ERROR ]\n\n");

UI (64,'#','=','#',2);



	printf ("-> Insert your first number: ");
scanf ("%lf", &a);

	printf ("\n-> Insert your second number: ");
scanf ("%lf", &b);
    printf ("\n\n");



UI (64,'+','-','+',0);

	printf ("|  Choose a operation(n°) that will ocurr between the numbers!   |\n");

UI (64,'+','-','+',0);

	printf("|\t\t\t[1] -> Operation > + <\t\t\t  |");
    
	printf("\n|\t\t\t\t\t\t\t\t  |");
	printf("\n|\t\t\t[2] -> Operation > - <\t\t\t  |");
    
	printf("\n|\t\t\t\t\t\t\t\t  |");
	printf("\n|\t\t\t[3] -> Operation > * <\t\t\t  |");
    
	printf("\n|\t\t\t\t\t\t\t\t  |");
	printf("\n|\t\t\t[4] -> Operation > / <\t\t\t  |\n");

UI (64,'+','-','+',0);



printf("|  Your choice: ");
scanf ("%d", &c);
printf("+-----------------+\n\n\n");



switch (c)
{
    	case 1:  	  //--------------------------Case 1--------------------------
				d=a+b;
				e=d;
			 
			 
     		   BC();
     		 
  	  if (g!=1)
  	  {
     		   box();
  	  }
      
			break;


    	case 2:  	  //--------------------------Case 2--------------------------
				d=a-b;
				e=d;
			 
			 
     		   BC();
			 
  	  if (g!=1)
  	  {
     		   box();
  	  }
    
			break;

    	case 3:  	  //--------------------------Case 3--------------------------
				d=a*b;
				e=d;
			 
			 
     		   BC();
			 
  	  if (g!=1)
  	  {
     		   box();
  	  }

			break;

    	case 4:  	  //--------------------------Case 4--------------------------
				d=a/b;
  			d=roundf(d * 100) / 100;
				e=d;
			 
			 
     		   BC();
							 
  	  if (g!=1)
  	  {
     		   box();
  	  }

			break;

    	default:
			printf ("[ ERROR ]");
}
    
	return 0;
}

void UI(int n,char str,char mid,char end, int s)
{
			printf("%c", str);
	for (int i=0;i<=n;i++)
    	{
			printf("%c", mid);
    	}
			printf("%c", end);

       	for (int i=0;i<=s;i++)
    	{
			printf("\n");
    	}
}

void BC()	// Limiter
{
    if (d>999999999999999 || d<-999999999999999)
    {
	printf ("[ ERROR ] Your result is too big for the calculator!");
	g = 1;
	}
}

void box()	// box for result & result
{
			 
			if(e<0)
				{
					e=e/-1;
				}
			 
				printf("#");
			 
			while (e/f >= 1)
				{
						printf("=");
						e=e/f;
				}
				e=d;
			 
			if(d<0)
				{
					printf("=");;
				}
			 
			for (int i=0;i<=20;i++)
				{
					printf("=");
				}
				printf("#\n");
			    
//-----------------------------------------------------------------------------
			    
				printf ("| Result..:\t%.3lf |\n", d);
			    
//-----------------------------------------------------------------------------
			    
					f = 10;
				printf("#");
			 
			while (e/f >= 1)
				{
						printf("=");
						f=f*10;
				}
			 
			if(d<0)
				{
					printf("=");;
				}
			 
			for (int i=0;i<=20;i++)
				{
					printf("=");
				}
				printf("#\n");	 
}


