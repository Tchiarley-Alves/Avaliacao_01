#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    char palavra_entrada[51] = "internet da oi";
    
    for(int i = 0; palavra_entrada[i] != '\0'; i++)
    {
        if(palavra_entrada[i] == 'a')
        {
            printf("#2=1\n");
        }
        else if(palavra_entrada[i] == 'b')
        {
            printf("#2=2\n");
        }
       
    }
    
}
