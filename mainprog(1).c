#include <stdio.h>
#include "playfair.h"
#include "hill.h"

int main()
{
int x;

printf("\n############### Comparative Study on Ciphers ################");
printf("\n############### M I N O R  P R O J E C T ################");
printf("\n############### By: Mansha Ranjan & Piyush Sharma ################\n");
while(1)
{
printf("\n__________________________________________________________\n");	
printf("Press '1' for Playfair Cipher\n");
printf("Press '2' for Hill Cipher\n");
printf("Press '3' for Affine Cipher\n");
printf("Press '4' for Polybius-Square Cipher\n");
printf("Press '5' for Railfence Cipher\n");
printf("Press '6' for Reset\n");
printf("Press '0' for Exit\n");
printf("__________________________________________________________\n");
scanf("%d",&x);
printf("__________________________________________________________\n");
if(x==1)
{
printf("Play Fair Cypher\n");
printf("__________________________________________________________\n");
playfaircypher();
}
else if(x==2)
{
printf("Hill Cypher\n");
printf("__________________________________________________________\n");
hillcypher();
}
else if(x==3)
{
}
else if(x==4)
{
}
else if(x==5)
{
}
else if(x==6)
{
}
else if(x==0)
{
printf("__________________________________________________________\n");
printf("Thank you for using program!\n");
printf("__________________________________________________________\n");
break;
}
else
{
printf("__________________________________________________________\n");
printf("Invalid Input!\n");
printf("__________________________________________________________\n");
}
}
return 0;
}
