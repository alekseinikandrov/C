#include <stdio.h>

int main(int argc, char *argv[]) {
    
    printf("if-else\n");
    
	int c;
	int i;

    for (c = 1; c < 16; ++c)
        {
            for (i = 0; i < 16; ++i)
            {
                if (i < c)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
                
            }
        printf("\n");
    }
    
    printf("Only for\n");
    
    for (c = 0; c < 15; c++) { 
    		
		for(i = c; i >= 0; i--) { 
			printf("#"); 
		} 
		
        printf(" ");
        
		for (i = c; i < 15; i++) {
			printf("*"); 
		} 
		printf("\n");
	}
    
    return 0;
}
