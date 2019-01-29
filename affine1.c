#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int CalcGCD(int);
int GetMultiplicativeInverse(int);
main()
{
 int i,j,k,gcd,alpha,beta,numstr[100],numcipher[100],alphaInverse;
 char str[100],cipher[100];
 printf("Enter a string\n");
 gets(str);
 //converting entered string to Capital letters
 for(i=0,j=0;i<strlen(str);i++)
 {
  if(str[i]!=' ')
  {
   str[j]=toupper(str[i]);   
   j++;
  }
  else
  {
   str[j]=' ';
   j++;
  }
 }
 str[j]='\0';
 printf("Entered string is : %s \n",str);
 printf("Enter Alpha value and must be between 1 and 25 both included\n");
 scanf("%d",&alpha); 
 //Checking conditions
 if(alpha<1 || alpha>25)
 {
  printf("Alpha should lie in between 1 and 25\nSorry Try again !\n");
  exit(0);
 } 
 gcd=CalcGCD(alpha);
 if(gcd!=1)
 {
  printf("gcd(alpha,26)=1 but \n gcd(%d,26)=%d\nSorry Try again !\n",alpha,gcd);
  exit(0);
 }
 printf("Enter Beta value and must be between 0 and 25 both included\n");
 scanf("%d",&beta);
 if(beta<0 || beta>25)
 {
  printf("Beta value should lie between 0 and 25\nSorry Try again !\n");
  exit(0);
 }
 //Conditions Over
 //Program Starts
 //Storing string in terms of ascii and to restore spaces I used -20
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]!=' ')
  numstr[i]=str[i]-'A';
  else
  numstr[i]=-20;
 }
 //For Decryption we need to find multiplicative inverse of  Alpha
 alphaInverse=GetMultiplicativeInverse(alpha);
 printf("MI=%d\n",alphaInverse);
     //Deciphering Process
    //If numcipher is more than 25 .We need to convert and ensure that lie in between 0 and 25.(indicating Alphabets)
   //A-0,B-1,C-2,.....Y-24,Z-25
    printf("Affine Cipher text is\n");   
    for(i=0;i<strlen(str);i++)
    {
     if(numstr[i]!=-20)
     {
     numcipher[i]=(alphaInverse*(numstr[i]-beta))%26;
     if(numcipher[i]<0)
     {
      numcipher[i]=numcipher[i]+26;//To avoid negative numbers
     }
          printf("%c",(numcipher[i]+'A'));         
     }
     else
     {
          printf(" ");      
     }
    }
printf("\n");
 
}

int CalcGCD(int alpha)
{
 int x;
   int temp1=alpha;
   int temp2=26;

     while(temp2!=0)
      {
        x=temp2;
        temp2=temp1%temp2;
        temp1=x;
      }
     return(temp1);
}
int GetMultiplicativeInverse(int alpha)
{
    int i,MI;
 for(i=1;i<=alpha;i++)
 {
  MI=((i*26)+1);
  if(MI%alpha==0)
  {
   break;
  }
 }
 MI=MI/alpha;
 return(MI);
}
