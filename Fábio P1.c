
  /*    
      Fábio Souto Santos
      11621EAU019
  */

#include <stdio.h>
#include <conio.h>

int main()
{
	
  int EST;
  char bts[256];
  EST = 0;
  scanf("%s",&bts);

    for(int i=0; bts[i] != '\0'; i++ )
	{
    
	    if(EST == 0 && bts[i] == '0')
	
		{
    
	    EST = 0;
    
	    }
    
	    else
		{
			
        EST = 1;
        	
		}

    }
    
      printf("Estado = %d \n", EST);
      printf("Seguimento originario = %s  ", bts);
      if(EST == 0)
	  {
      
	  printf("E' multiplo de 3!");

      }
	
	  else
	
	  {
    
	  printf("Nao e' multiplo");
    
   	  }

  }
