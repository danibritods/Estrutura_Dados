#include<stdio.h>
#include<ctype.h>

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "queues.h" 

void main(){
    QUEUE* q_a;
    q_a  = createQueue();
    //q_analise = createQueue()

    int classe = 0;
    int c;
    int c_anterior = 0;


    FILE *file;
    file = fopen("texto.txt", "r");
    if (file) {
        classe = tolower(getc(file));
        while((c = tolower(getc(file))) != EOF){
            if (c_anterior==" ")    
            {
                switch (classe)
                    {
                    case 'a': enqueue(q_a,','); 
                        break;
                    }

                classe = c;
            };
        
            c_anterior = tolower(c);
            putchar(c);
        };
        fclose(file);
    };
};