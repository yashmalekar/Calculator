#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void mult(),cuberoot(),division(),add(),subtract(),sroot(),power(),factorial(),square(),cube();
void mtomm(),mtocm(),mtokm(),cmtom(),cmtokm(),cmtomm(),mmtocm(),mmtom(),mmtokm(),kmtom(),kmtomm(),kmtocm();
void rtod(),rtorg(),rtoe(),dtor(),dtorg(),dtoe(),rgtor(),rgtod(),rgtoe(),etor(),etod(),etorg();
int main()
{
	system("color 64");
	int a,choice3,choice4,choice7,choice9;
	float gram,kg,mg;
	char choice,choice1,choice2,choice5,choice6,choice8,choice10;
	printf("\n\n\t\t\t\t\t*** Welcome to our Calculator and Converter ***\n\n");
	main:printf("\n\n\t\t\t\t\t\tPress 1 for Calculator");
	printf("\n\n\t\t\t\t\t\tPress 2 for Converter");
	printf("\n\n\t\t\t\t\t\tPress 0 to exit");
	printf("\n\n\t\t\t\t\t\tEnter your choice=");
	scanf("%d",&a);
	sleep(1);
	if(a==1)
	{
		system("cls");
		first:printf("\t\t\t\tPress '+' for Addition\n");
		printf("\t\t\t\tPress '-' for Subtraction\n");
		printf("\t\t\t\tPress '*' for Multiplication\n");
		printf("\t\t\t\tPress '/' for Division\n");
		printf("\t\t\t\tPress 's' to calculate square");
		printf("\n\t\t\t\tPress 'S' to calculate square root");
		printf("\n\t\t\t\tPress 'c' to calculate cube");
		printf("\n\t\t\t\tPress 'C' to calculate cube root");
		printf("\n\t\t\t\tPress 'P' for calculating Power\n");
		printf("\t\t\t\tPress 'F' to calculate Factorial");
		printf("\n\t\t\t\tPress '#' to go to main menu");
		printf("\n\t\t\t\tEnter your choice=");
		fflush(stdin);
		scanf("%c",&choice);
		sleep(1);
		switch(choice)
		{
		case '+':add();
		         break;
		case '-':subtract();
		         break;
	    case '*':mult();
	             break;
	    case '/':division();
	             break;
	    case 's':square();
	             break;
	    case 'S':sroot();
	             break;
	    case 'c':cube();
	             break;
	    case 'C':cuberoot();
	             break;
	    case 'P':power();
	             break;
	    case 'F':factorial();
	             break;
	    case '#':system("cls");
		         goto main;
	             break;
	    default:system("cls"); printf("\t\t\t\tInvalid Input"); sleep(1); system("cls"); goto first;
	    }sleep(1);
	    printf("\n\t\t\t\tDo you want to continue using Calculator(y/n)?");
	    fflush(stdin);
	    scanf("%c",&choice1);
	    if(choice1=='y'||choice=='Y')
	    {
	    	system("cls");
	    	goto first;
		}
		else if(choice1=='n'||choice1=='N')
		{sleep(1);
			printf("\t\t\t\tDo you want to use converter(y/n)?");
			fflush(stdin);
			scanf("%c",&choice2);
			if(choice2=='y'||choice2=='Y')
			{
				system("cls");
				goto second;
			}
			else if(choice2=='n'||choice2=='N')
			{
				printf("\n\t\t\t\t\t\t\t******Thank You******");
			}
		}
	}
	else if(a==0)
	{
		exit(0);
	}
	else if(a==2)
	{
		system("cls");
		second:printf("\t\t\t\tPress 0 to go to main menu\n");
		printf("\t\t\t\tPress 1 for length conversion");
		printf("\n\t\t\t\tPress 2 for currency conversion");
		printf("\n\t\t\t\tPress 3 for weight conversion");
		printf("\n\t\t\t\tPress 4 for temperature conversion");
		printf("\n\t\t\t\tPress 5 for area conversion");
		printf("\n\t\t\t\tPress 6 for volume conversion");
		printf("\n\t\t\t\tEnter your choice:");
		scanf("%d",&choice3);
		sleep(1);
		system("cls");
		if(choice3==1)
		{
			seventh:printf("\t\t\t\tPress 1 to convert m to mm\n");
			printf("\t\t\t\tPress 2 to convet m to cm\n");
			printf("\t\t\t\tPress 3 to convert m to km\n");
			printf("\t\t\t\tPress 4 to convert cm to m\n");
			printf("\t\t\t\tPress 5 to convert cm to mm\n");
			printf("\t\t\t\tPress 6 to convert cm to km\n");
			printf("\t\t\t\tPress 7 to convert mm to cm\n");
			printf("\t\t\t\tPress 8 to convert mm to m\n");
			printf("\t\t\t\tPress 9 to convert mm to km\n");
			printf("\t\t\t\tPress 10 to convert km to m\n");
			printf("\t\t\t\tPress 11 to convert km to mm\n");
			printf("\t\t\t\tPress 12 to convert km to cm");
			printf("\n\t\t\t\tPress 0 to go to main menu");
			printf("\n\t\t\t\tEnter your choice:");
			scanf("%d",&choice4);
			sleep(1);
			switch(choice4)
			{
				case 0:system("cls");
				       goto main;
				       break;
				case 1:mtomm();
				       break;
				case 2:mtocm();
				       break;
			    case 3:mtokm();
			           break;
			    case 4:cmtom();
			           break;
			    case 5:cmtomm();
			           break;
			    case 6:cmtokm();
			           break;
			    case 7:mmtocm();
			           break;
			    case 8:mmtom();
			           break;
			    case 9:mmtokm();
			           break;
			    case 10:kmtom();
			            break;
			    case 11:kmtomm();
			            break;
			    case 12:kmtocm();
			            break;
			    default:system("cls"); printf("\t\t\t\tInvalid Input"); sleep(1); system("cls"); goto seventh;
			}sleep(1);
			printf("\n\t\t\t\tDo you want to continue using Length converter(y/n)?");
			fflush(stdin);
			scanf("%c",&choice8);
			if(choice8=='y'||choice8=='Y')
			{
				system("cls");
				goto seventh;
			}
			else if(choice8=='n'||choice8=='N')
			{
				sleep(1);
				goto fifth;
			}
			else
			{
				printf("\t\t\t\tInvalid input");
			}
		}
		else if(choice3==0)
		{
			system("cls");
			goto main;
		}
		else if(choice3==2)
		{
			fourth:printf("\t\t\t\tPress 1 to convert Rupees to Dollars\n");
			printf("\t\t\t\tPress 2 to convert Rupees to Ringgit\n");
			printf("\t\t\t\tPress 3 to convert Rupees to Euro\n");
			printf("\t\t\t\tPress 4 to convert Dollars to Rupees\n");
			printf("\t\t\t\tPress 5 to convert Dollars to Ringgit\n");
			printf("\t\t\t\tPress 6 to convert Dollars to Euro\n");
			printf("\t\t\t\tPress 7 to convert Ringgit to Rupees\n");
			printf("\t\t\t\tPress 8 to convert Ringgit to Dollars\n");
			printf("\t\t\t\tPress 9 to convert Ringgit to Euro\n");
			printf("\t\t\t\tPress 10 to convert Euro to Rupees\n");
			printf("\t\t\t\tPress 11 to convert Euro to Dollars\n");
			printf("\t\t\t\tPress 12 to convert Euro to Ringgit\n");
			printf("\t\t\t\tPress 0 to go to main menu");
			printf("\n\t\t\t\tEnter your choice:");
			scanf("%d",&choice7);
			sleep(1);
			switch(choice7)
			{
				case 0:system("cls");
				       goto main;
				       break;
				case 1:rtod();
				       break;
				case 2:rtorg();
				       break;
				case 3:rtoe();
				       break;
				case 4:dtor();
				       break;
				case 5:dtorg();
				       break;
				case 6:dtoe();
				       break;
				case 7:rgtor();
				       break;
				case 8:rgtod();
				       break;
				case 9:rgtoe();
				       break;
				case 10:etor();
				        break;
				case 11:etod();
				        break;
				case 12:etorg();
				        break;
				default:system("cls"); printf("\t\t\t\tInvalid Input"); sleep(1); system("cls"); goto fourth;
			}sleep(1);
			printf("\n\t\t\t\tDo you want to continue using Currency converter(y/n)?");
			fflush(stdin);
			scanf("%c",&choice8);
			if(choice8=='y'||choice8=='Y')
			{
				system("cls");
				goto fourth;
			}
			else if(choice8=='n'||choice8=='N')
			{
				sleep(1);
				goto fifth;
			}
			else
			{
				printf("\t\t\t\tInvalid input");
			}
		}
		else if(choice3==3)
		{
			eight:printf("\t\t\t\tPress 1 to convert gram to mg\n");
			printf("\t\t\t\tPress 2 to convert gram to kg\n");
			printf("\t\t\t\tPress 3 to convert mg to gram\n");
			printf("\t\t\t\tPress 4 to convert mg to kg\n");
			printf("\t\t\t\tPress 5 to convert kg to gram\n");
			printf("\t\t\t\tPress 6 to convert kg to mg\n");
			printf("\t\t\t\tPress 0 to go to main menu\n");
			printf("\t\t\t\tEnter your choice");
			scanf("%d",&choice9);
			sleep(1);
			 if(choice9==1)
			 {
     printf("\t\t\t\tEnter the weight in gram =");
     scanf("%f",&gram);
     mg=gram*1000;
     printf("\t\t\t\t%f gram=%f mg",gram,mg);
              }
      else if(choice9==2)
	  {
     printf("\t\t\t\tEnter the weight in gram =");
     scanf("%f",&gram);
     kg=gram*0.001;
     printf("\t\t\t\t%f gram=%f kg",gram,kg);
                    }
        else if(choice9==3)
		{
     printf("\t\t\t\tEnter the weight in mg =");
     scanf("%f",&mg);
     gram=mg*0.001;
     printf("\t\t\t\t%f mg=%f gram",mg,gram);
		                   }
		 else if(choice9==4)
		 {
     printf("\t\t\t\tEnter the weight in mg =");
     scanf("%f",&mg);
     kg=mg*0.000001;
     printf("\t\t\t\t%f mg=%f kg",mg,kg);
		               } 
		 else if(choice9==5)
		 {
	 printf("\t\t\t\tEnter the weight in kg =");
     scanf("%f",&kg);
     gram=kg*1000;
     printf("\t\t\t\t%f kg=%f gram",kg,gram);
                  }
     else if(choice9==6)
	 {
     printf("\t\t\t\tEnter the weight in kg =");
     scanf("%f",&kg);
     mg=kg*1000000;
     printf("\t\t\t\t%f kg=%f mg",kg,mg);
                  }
                  else if(choice9==0)
                  {
                  	system("cls");
                  	goto main;
				  }
                  else
                  {
                  	sleep(1);
                  	system("cls");
                  	printf("\t\t\t\tInvalid input");
                  	sleep(1);
                  	system("cls");
                  	goto eight;
				  }
				  sleep(1);
				  printf("\n\t\t\t\tDo you want to continue using Weight calculator(y/n)?");
				  fflush(stdin);
				  scanf("%c",&choice10);
				  if(choice10=='y'||choice10=='Y')
				  {
				  	system("cls");
				  	goto eight;
				  }
				  else if(choice10=='n'||choice10=='N')
				  {
				  	sleep(1);
				  	goto fifth;
				  }
		}
		else if(choice3==4)
		{
			float k,l,m,n,o,p,q,r,s,t,u,v;
 int w;
 char j;
 
twelve:
       system("cls");
       printf("\t\t\t\t\t\t0 for main menu\n");
	   printf("\t\t\t\t\t\t1 For Fahrenheit To Celsius\n");
       printf("\t\t\t\t\t\t2 For Celsius To Fahrenheit\n");
       printf("\t\t\t\t\t\t3 For Fahrenheit To Kelvin\n");
       printf("\t\t\t\t\t\t4 For Kelvin To Fahrenheit\n");
       printf("\t\t\t\t\t\t5 For Celsius To Kelvin\n");
       printf("\t\t\t\t\t\t6 For Kelvin To celsius\n");
       printf("\n\n\t\t\t\t============== ENTER YOUR CHOICE ==============\n\t\t\t\t\t");
       scanf("%d",&w);
       sleep(1);
       system("cls");
switch(w)
 {
 	case 0:system("cls");
 	       goto main;
 	       break;
  case 1:
        printf("\n\t\t\t\t\t\tEnter The Value in Fahrenheit Temperature: ");
        scanf("%f",&k);
        q=(k-32)*5/9;
        sleep(1);
        printf("\n\n\t\t\t\t\t\tCelsius Temperature is: [%f] ",q);
         break;
  case 2:
        printf("\n\t\t\t\t\t\tEnter The Value in Celsius Temperature: ");
        scanf("%f",&l);
        r=(l*9/5)+32;
        sleep(1);
		printf("\n\n\t\t\t\t\t\tFahrenheit Temperature is: [%f]",r);
         break; 
  case 3:
  	    printf("\n\t\t\t\t\t\tEnter The Value in Fahrenheit Temperature: ");
  	    scanf("%f",&m);
  	    s=273.5+((m-32.0)*(5.0/9.0));
  	    sleep(1);
		printf("\n\n\t\t\t\t\t\tKelvin Temperature is: [%f]",s);
  	    break;
  case 4:
        printf("\n\t\t\t\t\t\tEnter The Value in kelvin: ");
  	    scanf("%f",&n);
  	    t=(9.0/5.0)*(n-273.15)+32;
  	    sleep(1);
		printf("\n\n\t\t\t\t\t\tFahrenheit Temperature is: [%f]",t);
		break;
  case 5:
        printf("\n\t\t\t\t\t\tEnter the Value in celsius: ");
  	    scanf("%f",&o);
  	    u=o+273.15;
  	    sleep(1);
		printf("\n\n\t\t\t\t\t\tKelvin Temperature is: [%f]",u);
		break;
  case 6:	    
	    printf("\n\t\t\t\t\t\tEnter The Value in kelvin: ");
  	    scanf("%f",&p);
  	    v=p-273.15;
  	    sleep(1);
		printf("\n\n\t\t\t\t\t\tCelsius Temperture is: [%f]",v);
        break;
  default:
		printf("\n\n\t\t\t\t\t\t Invalid Value... Try Again..!!!\n"); sleep(1); system("cls"); goto twelve;
}       
        printf("\n\n\t\t\t\t\t\tDo you want to continue using Temperature Calculator(y/n)");
        fflush(stdin);
        scanf("%c",&j);
		if(j=='y'||j=='Y')
		{
			sleep(1);
			goto twelve;
		}
		else if(j=='n'||j=='N')
		{
			sleep(1);
			goto fifth;
		}
		else
		{
			printf("\n\n\t\t\t\t\t Invalid Value... Try Again..!!!\n");
		}
	}
	   else if(choice3==5)
	   {
	   	      float x,y,z;
	int i;
	
	 area:printf("\t\t\t\t\tEnter 0 for main menu\n");
	 printf("\t\t\t\t\tEnter 1 for converting in sqmm to sqcm");
	 printf("\n\t\t\t\t\tEnter 2 for converting in sqmm to sqm");
	 printf("\n\t\t\t\t\tEnter 3 for converting in sqmm to sqkm");
	 printf("\n\t\t\t\t\tEnter 4 for converting in sqcm to sqmm");
	 printf("\n\t\t\t\t\tEnter 5 for converting in sqcm to sqm");
	 printf("\n\t\t\t\t\tEnter 6 for converting in sqcm to sqkm");
	 printf("\n\t\t\t\t\tEnter 7 for converting in sqm to sqmm");
	 printf("\n\t\t\t\t\tEnter 8 for converting in sqm to sqcm");
	 printf("\n\t\t\t\t\tEnter 9 for converting in sqm to sqkm");
	 printf("\n\t\t\t\t\tEnter 10 for converting in sqkm to sqmm");
	 printf("\n\t\t\t\t\tEnter 11 for converting in sqkm to sqcm");
	 printf("\n\t\t\t\t\tEnter 12 for converting in sqkm to sqm");
	 
	 printf("\n\t\t\t\t\tEnter your choice");
	 scanf("%d",&i);
	 sleep(1);
	 switch(i)
	 {//millimetre//
	    case 0:system("cls");
	           goto main;
	           break;
	 	case 1:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*0.01;
	 	       printf("\t\t\t\t\tcoversion from squarmillimetre to square centimetre is =%f",x);
		       break;
		       
		case 2:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*0.000001;
	 	       printf("\t\t\t\t\tcoversion from squarmillimetre to square metre is =%f",x);
		       break;
		case 3:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/0.000000000001;
	 	       printf("\t\t\t\t\tcoversion from squarmillimetre to square kilometre is =%f",x);
		       break;       
      //centimetre 
		case 4:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/100;
		       printf("\t\t\t\t\tconversion from square centimetre to square millimetre is=%f",x);
		       break;
	    case 5:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*0.0001;
		       printf("\t\t\t\t\tconversion from square centimetre to square metre is=%f",x);
		       break;
		case 6:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/0.0000000001;
		       printf("\t\t\t\t\tconversion from square centimetre to square kilometre is=%f",x);
		       break;
          //metre//
        case 7:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/1000000;
		       printf("\t\t\t\t\tconversion from square metre to square millimetre is=%f",x);
		       break;	   
		case 8:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/10000;
		       printf("\t\t\t\t\tconversion from square metre to square centiemetre is=%f",x);
		       break;
		case 9:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*0.000001;
		       printf("\t\t\t\t\tconversion from square metre to square kilometre is=%f",x);
		       break;
			//kilometre//	   	   	          
	 	case 10:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	 x=z/1000000000000;
		       printf("\t\t\t\t\tconversion from square kilometre to square millimetre is=%f",x);
	 	       break;
	 	case 11:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	 x=z*10000000000;
		       printf("\t\t\t\t\tconversion from square kilometre to square centimetre is=%f",x);
	 	       break;
	 	case 12:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	 x=z/1000000;
		       printf("\t\t\t\t\tconversion from square kilometre to square metre is=%f",x);
	 	       break;
	    default:system("cls"); printf("\t\t\t\t\tinvalid input"); sleep(1); system("cls"); goto area;
     }
     printf("\t\t\t\tDo you want to continue using Area converter?(y/n)");
     fflush(stdin);
     scanf("%c",&choice10);
     sleep(1);
     if(choice10=='y'||choice10=='Y')
     {
     	system("cls");
     	goto area;
	 }
	 else if(choice10=='n'||choice10=='n')
	 {
	 	goto fifth;
	 }
	   }
	   else if(choice3==6)
	   {
	   	float x,y,z;
	int i;
	volume:printf("\t\t\t\t\tEnter 0 to go to main menu\n");
	printf("\t\t\t\t\t Enter 1 for converting millilitres to litres");
	printf("\n\t\t\t\t\t Enter 2 for converting millilitres to cubic metres");
	printf("\n\t\t\t\t\t Enter 3 for converting litres to cubic metres");
	printf("\n\t\t\t\t\t Enter 4 for converting litres to millilitres");
		printf("\n\t\t\t\t\t Enter 5 to convert cubic metres to millilitres");
	printf("\n\t\t\t\t\t Enter 6 to convert cubic metres to litres");

	
	printf("\n\t\t\t\t\t Enter your choice");
	scanf("%d",&i);
	sleep(1);
	switch(i)
	{
		case 0:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
		system("cls");
		       goto main;
		       break;
		case 1:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
		x=z/1000;
		printf("\t\t\t\t\t conversion from millilitres to litres is =%f litres",x);
		break;
		
		case 2:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z/0.000001;
		printf("\t\t\t\t\t conversion from millilitres to cubic metres is =%f cubic metres",x);
		break;
		
		case 3:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
		x=z/1000;
		printf("\t\t\t\t\t conversion from litres to cubic metres is =%f cubic metres",x);
		break;
		
		case 4:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*1000;
		printf("\t\t\t\t\t conversion from litres to millilitres is =%f millilitres",x);
		break;
		
		case 5:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*1000000;
		printf("\t\t\t\t\t conversion from cubic metres to millilitres is =%f millilitres",x);
		break;
		
		case 6:printf("\n\t\t\t\t\t Enter value to be converted");
	scanf("%f",&z);
	sleep(1);
	x=z*1000;
		printf("\t\t\t\t\t conversion from cubic metres to litres is =%f litres",x);
		break;
		default:system("cls"); printf("\t\t\t\t\t invalid input"); sleep(1); system("cls"); goto volume;
	}
	printf("\t\t\t\tDo you want to continue using volume converter?(y/n)");
	fflush(stdin);
	scanf("%c",&choice10);
	sleep(1);
	if(choice10=='y'||choice10=='Y')
	{
		system("cls");
		goto volume;
	}
	else if(choice10=='n'||choice10=='N')
	{
		goto fifth;
	}
	else
	{
		printf("\t\t\t\tInvalid Input");
	}
	   }
	   
	   else
	   {
	   	printf("\t\t\t\tInvalid Input\n");
	   	sleep(1);
	   	goto second;
	   }
		fifth:printf("\t\t\t\tDo you want to continue using converter(y/n)?");
			fflush(stdin);
			scanf("%c",&choice5);
			if(choice5=='y'||choice5=='Y')
			{
				system("cls");
				goto second;
			}
			else if(choice5=='n'||choice5=='N')
			{sleep(1);
				printf("\t\t\t\tDo you want to use calculator(y/n)?");
				fflush(stdin);
				scanf("%c",&choice6);
				if(choice6=='y'||choice6=='Y')
				{
					system("cls");
					goto first;
				}
				else if(choice6=='n'||choice6=='N')
				{
					printf("\n\t\t\t\t\t\t\t******Thank You******");
				}
			}
	}
	else
	{
		system("cls");
		printf("\t\t\tInvalid Input\n");
		sleep(1);
		system("cls");
		goto main;
	}
	return 0;
}
void add()
{
	int b,c,d;
	printf("\t\t\t\tEnter 1st number=");
	scanf("%d",&b);
	printf("\t\t\t\tEnter 2nd number=");
	scanf("%d",&c);
	d=b+c;
	printf("\t\t\t\t%d + 0%d = %d",b,c,d);
}
void subtract()
{
	int b,c,d;
	printf("\t\t\t\tEnter 1st number=");
	scanf("%d",&b);
	printf("\t\t\t\tEnter 2nd number=");
	scanf("%d",&c);
	d=b-c;
	printf("\t\t\t\t %d - %d = %d",b,c,d);
}
void mult()
{
	int b,c,d;
	printf("\t\t\t\tEnter 1st number=");
	scanf("%d",&b);
	printf("\t\t\t\tEnter 2nd number=");
	scanf("%d",&c);
	d=b*c;
	printf("\t\t\t\t%d * %d = %d",b,c,d);
}
void division()
{
	int b,c,d,e;
	printf("\t\t\t\tEnter Dividend=");
	scanf("%d",&b);
	printf("\t\t\t\tEnter Divisor=");
	scanf("%d",&c);
	if(c==0)
	{
	printf("\t\t\t\tCannot be divided by Zero\n");
	sleep(1);
	system("cls");
	division();
    }
	else
	{
	
	d=b/c;
	e=b%c;
	printf("\t\t\t\t%d / %d = %d and Remainder is %d",b,c,d,e);
}
}
void sroot()
{
	int b,c;
	printf("\t\t\t\tEnter number");
	scanf("%d",&b);
	c=sqrt(b);
	printf("\t\t\t\tThe Squareroot of %d is %d",b,c);
}
void power()
{
	float b,d;
	int c;
	printf("\t\t\t\tEnter number=");
	scanf("%f",&b);
	printf("\t\t\t\tEnter Power=");
	scanf("%d",&c);
	d=pow(b,c);
	printf("\t\t\t\t%f to the power %d is %.1f",b,c,d);
}
void factorial()
{
	int b,fact=1,i;
	printf("\t\t\t\tEnter number=");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		fact=fact*i;
	}
	printf("\t\t\t\tFactorial of %d is %d",b,fact);
}
void square()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*b;
	printf("\t\t\t\tThe square of %d is %d",b,c);
}
void cube()
{
	int b,c;
	printf("\t\t\t\tEnter number");
	scanf("%d",&b);
	c=b*b*b;
	printf("\t\t\t\tThe cube of %d is %d",b,c);
}
void cuberoot()
{
	int b,c;
	printf("\t\t\t\tEnter number");
	scanf("%d",&b);
	c=cbrt(b);
	printf("\t\t\t\tThe cube root of %d is %d",b,c);
}
void mtomm()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*1000;
	printf("\t\t\t\t%dm=%dmm",b,c);
}
void mtocm()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*100;
	printf("\t\t\t\t%dm=%dcm",b,c);
}
void mtokm()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.001;
	printf("\t\t\t\t%.1fm=%fkm",b,c);
}
void cmtom()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.01;
	printf("\t\t\t\t%fcm=%fm",b,c);
}
void cmtomm()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*10;
	printf("\t\t\t\t%dcm=%dmm",b,c);
}
void cmtokm()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.00001;
	printf("\t\t\t\t%.1fcm=%fkm",b,c);
}
void mmtocm()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.1;
	printf("\t\t\t\t%.1fmm=%fcm",b,c);
}
void mmtom()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.001;
	printf("\t\t\t\t%.1fmm=%fm",b,c);
}
void mmtokm()
{
	float b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%f",&b);
	c=b*0.000001;
	printf("\t\t\t\t%.1fmm=%fkm",b,c);
}
void kmtom()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*1000;
	printf("\t\t\t\t%dkm=%dm",b,c);
}
void kmtomm()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*1000000;
	printf("\t\t\t\t%dkm=%dmm",b,c);
}
void kmtocm()
{
	int b,c;
	printf("\t\t\t\tEnter Number");
	scanf("%d",&b);
	c=b*100000;
	printf("\t\t\t\t%dkm=%dcm",b,c);
}
void rtod()
{
	float b,c;
	printf("\t\t\t\tEnter Rupees");
	scanf("%f",&b);
	c=b*0.01;
	if(b==1)
	{
		printf("\t\t\t\t%f Rupee=%f Dollars",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Rupees=%f Dollars",b,c);
	}
}
void rtorg()
{
	float b,c;
	printf("\t\t\t\tEnter Rupees");
	scanf("%f",&b);
	c=b*0.06;
	if(b==1)
	{
		printf("\t\t\t\t%f Rupee=%f Ringgit",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Rupees=%f Ringgit",b,c);
	}
}
void rtoe()
{
	float b,c;
	printf("\t\t\t\tEnter Rupees");
	scanf("%f",&b);
	c=b*0.01;
	if(b==1)
	{
		printf("\t\t\t\t%f Rupee=%f Euro's",b,c);
	}
	else
	{
		printf("\t\t\t\t%f rupees=%f Euro's",b,c);
	}
}
void dtor()
{
	float b,c;
	printf("\t\t\t\tEnter Dollars");
	scanf("%f",&b);
	c=b*71.54;
	if(b==1)
	{
		printf("\t\t\t\t%f Dollar=%f Rupees",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Dollars=%f Rupees",b,c);
	}
}
void dtorg()
{
	float b,c;
	printf("\t\t\t\tEnter Dollars");
	scanf("%f",&b);
	c=b*4.17;
	if(b==1)
	{
		printf("\t\t\t\t%f Dollar=%f Ringgits",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Dollars=%f Ringgits",b,c);
	}
}
void dtoe()
{
	float b,c;
	printf("\t\t\t\tEnter Dollars");
	scanf("%f",&b);
	c=b*0.91;
	if(b==1)
	{
		printf("\t\t\t\t%f Dollar=%f Euros",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Dollars=%f Euros",b,c);
	}
}
void rgtor()
{
	float b,c;
	printf("\t\t\t\tEnter Ringgits");
	scanf("%f",&b);
	c=b*17.15;
	if(b==1)
	{
		printf("\t\t\t\t%f Ringgit=%f Rupees",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Ringgits=%f Rupees",b,c);
	}
}
void rgtod()
{
	float b,c;
	printf("\t\t\t\tEnter Ringgits");
	scanf("%f",&b);
	c=b*0.24;
	if(b==1)
	{
		printf("\t\t\t\t%f Ringgit=%f Dollars",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Ringgits=%f Dollars",b,c);
	}
}
void rgtoe()
{
	float b,c;
	printf("\t\t\t\tEnter Ringgits");
	scanf("%f",&b);
	c=b*0.22;
	if(b==1)
	{
		printf("\t\t\t\t%f Ringgit=%f Euro's",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Ringgits=%f Euro's",b,c);
	}
}
void etor()
{
	float b,c;
	printf("\t\t\t\tEnter Euro's");
	scanf("%f",&b);
	c=b*78.74;
	if(b==1)
	{
		printf("\t\t\t\t%f Euro=%f Rupees",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Euro's=%f Rupees",b,c);
	}
}
void etod()
{
	float b,c;
	printf("\t\t\t\tEnter Euro's");
	scanf("%f",&b);
	c=b*1.10;
	if(b==1)
	{
		printf("\t\t\t\t%f Euro=%f Dollars",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Euro's=%f Dollars",b,c);
	}
}
void etorg()
{
	float b,c;
	printf("\t\t\t\tEnter Euro's");
	scanf("%f",&b);
	c=b*4.59;
	if(b==1)
	{
		printf("\t\t\t\t%f Euro=%f Ringgits",b,c);
	}
	else
	{
		printf("\t\t\t\t%f Euro's=%f Ringgits",b,c);
	}
}
