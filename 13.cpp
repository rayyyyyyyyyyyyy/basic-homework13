#include<stdio.h>  

#include<iostream> 

int main()

{

int age,gender; 



printf("�п�J�ʧO�M�~��(�k�ʽп�J1,�k�ʽп�J2)�G");

scanf("%d%d",&gender,&age); 

if( gender==1 && age>=18 )  

{

printf("�A�i�H���B\n");

}

if( gender==1 && age<18 )

{

printf("�A�٤��൲�B\n");

}

if( gender==2 && age>=16 )

{

printf("�p�i�H���B\n");

}

if( gender==2 && age<16 )

{

printf("�p�٤��൲�B\n");

}

return 0; 

}
