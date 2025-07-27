// if-else Statements

#include<stdio.h>
int main()
{
int   a;
printf ( "Enter either 0, 1 or 2 \n" ) ; 
scanf ( "%d", &a ) ;
 if ( a == 1 )
 { 
 printf ( "Number 1 is entered!" ) ;  
 }
 else if(a == 2)
 {
    printf ( "Number 2 is entered!" ) ; 
 }
else  { 
if ( a == 0 ){   
printf ( "Number 0 is entered" ) ;}  
else {  
printf ( "Wrong Input" ) ;  }
}
    return 0;
}
