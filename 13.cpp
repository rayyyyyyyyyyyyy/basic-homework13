#include<stdio.h>  

#include<iostream> 

int main()

{

int age,gender; 



printf("請輸入性別和年齡(男性請輸入1,女性請輸入2)：");

scanf("%d%d",&gender,&age); 

if( gender==1 && age>=18 )  

{

printf("你可以結婚\n");

}

if( gender==1 && age<18 )

{

printf("你還不能結婚\n");

}

if( gender==2 && age>=16 )

{

printf("妳可以結婚\n");

}

if( gender==2 && age<16 )

{

printf("妳還不能結婚\n");

}

return 0; 

}
