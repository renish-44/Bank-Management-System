	# include<stdio.h>

int main()

{

int pin_code,pin__code,j,choice;

float amount,withdrawal,amount_a,deposit;

printf("// Out side of ATM Machine:\n");

printf("// As a manager of a bank, Enter the customer's bank amount(already given money by customer) :\n");

scanf("%f",& amount);

printf("customer's bank amount is:%f\n",amount);

printf("// As a customer\n");

for(int i=0;i<3;i++){

printf("Enter your first and final pin_code\n");

printf("(Enter your pin_code in 4 digit)\n");

printf("(only 1000 to 9999 is valide):\n");

scanf("%d",& pin_code);

if(pin_code>999 && pin_code<10000){

printf("your first and final saved pin_code is:%d\n",pin_code);

printf("Thank you\n");

printf("// Action with ATM Machine:\n");

printf("Enter your pin__code:\n");

scanf("%d",& pin__code);

if(pin_code==pin__code)

{

do{

printf("first\n");

printf("Check current amount: Enter 1\n");

printf("If you withdrawal money: Enter 2\n");

printf("If you deposit money: Enter 3\n");

printf("When your task is done so enter 0\n");

printf("Enter your choice:\n");

scanf("%d",& choice);

if(choice>=0 && choice<4){

switch(choice){

case 1 :

printf("//for check your current amount\n");

printf("Your current amount=%f\n", amount);

break;



case 2 :

printf("// For your withdrawal money\n");

printf("Enter withdrawal money:\n");

scanf("%f",& withdrawal);

if(withdrawal<=amount){

amount_a=amount-withdrawal;

printf("your amount_a=%f\n",amount_a);



}

else

{

printf("sorry\n");

printf("You can't withdrawal your money because\n");

printf("your withdrawal is greater than your current amount\n");

}

break;



case 3 :

printf("// For you deposit money:\n");

printf("Enter deposit money:\n");

scanf("%f",& deposit);

amount_a=amount+deposit;

printf("your amount_a=%f\n",amount_a);

break;



}

}

else

{

printf("");

}

}

while(choice!=0);

}

else

{

printf("Invalid pin_code\n");

printf("Enter your valid pin_code:\n");

printf("Thank you");

}

}

else

{

printf("Invalid pin_code\n");

printf("Enter your valid pin_code:\n");

printf("Thank you\n");

}

if(i==2)

{

printf("so many invalid attempts,Exiting.....\n");

}

else if (pin_code==pin__code)

{

break;

}

}

return 0;

}



    
