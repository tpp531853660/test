#include<stdio.h>
int main()
{
	char str[128];
	char *p;   
	gets(str);   
	p=str;   
	while( *p++ ) ;   
	while ( p != str )  
	{      
		if ( *p == ' ' )       
		{           
			*p=0 ;       
			printf("%s " , p );    
    }      
		p-- ;  
  }  
	printf("%s\n",p ) ;  
	return 0;
}