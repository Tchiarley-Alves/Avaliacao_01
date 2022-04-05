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
        else if(palavra_entrada[i] == 'c')
        {
            printf("#2=3\n");
        }
        else if(palavra_entrada[i] == 'd')
        {
            printf("#3=1\n");
        }
        else if(palavra_entrada[i] == 'e')
        {
            printf("#3=2\n");
        }
        else if(palavra_entrada[i] == 'f')
        {
            printf("#3=3\n");
        }
        else if(palavra_entrada[i] == 'g')
        {
            printf("#4=1\n");
        }
        else if(palavra_entrada[i] == 'h')
        {
            printf("#4=2\n");
        }
        else if(palavra_entrada[i] == 'i')
        {
            printf("#4=3\n");
        }
        else if(palavra_entrada[i] == 'j')
        {
            printf("#5=1\n");
        }
        else if(palavra_entrada[i] == 'k')
        {
            printf("#5=2\n");
        }
        else if(palavra_entrada[i] == 'l')
        {
            printf("#5=3\n");
        }
        else if(palavra_entrada[i] == 'm')
        {
            printf("#6=1\n");
        }
        else if(palavra_entrada[i] == 'n')
        {
            printf("#6=2\n");
        }
        else if(palavra_entrada[i] == 'o')
        {
            printf("#6=3\n");
        }
        else if(palavra_entrada[i] == 'p')
        {
            printf("#7=1\n");
        }
        else if(palavra_entrada[i] == 'q')
        {
            printf("#7=2\n");
        }
        else if(palavra_entrada[i] == 'r')
        {
            printf("#7=3\n");
        }
        else if(palavra_entrada[i] == 's')
        {
            printf("#7=4\n");
        }
        else if(palavra_entrada[i] == 't')
        {
            printf("#8=1\n");
        }
        else if(palavra_entrada[i] == 'u')
        {
            printf("#8=2\n");
        }
        else if(palavra_entrada[i] == 'v')
        {
            printf("#8=3\n");
        }
        else if(palavra_entrada[i] == 'w')
        {
            printf("#9=1\n");
        }
        else if(palavra_entrada[i] == 'x')
        {
            printf("#9=2\n");
        }
        else if(palavra_entrada[i] == 'y')
        {
            printf("#9=3\n");
        }
        else if(palavra_entrada[i] == 'z')
        {
            printf("#9=4\n");
        }
        else if(palavra_entrada[i] = ' ')
        {
            printf("#0=1\n");
        }
        else
        {
            printf("Caracter nao reconhecido!");
        }
    }
    
}
