#include <stdio.h>

int print(int space_num);

main(){
    int c;
    int pc, len;
    pc = EOF, len = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++len;
        }else if(pc == ' ' && c != ' '){
            print(len);
            putchar(c);
            len = 0;
        }else{
            putchar(c);
        }
        
        pc = c;
    }
}

int print(int space_num){

    int i ;
    int tab_width, tab_num;
    tab_width = 4;
    //printf("totals:%d\n", space_num);
    tab_num = space_num / (tab_width - 1);
    space_num = space_num % (tab_width - 1);
    
    //printf("tabs:%d\n", tab_num);
    //printf("spaces:%d\n", space_num);
    for(i = 0; i < tab_num; i++)
        putchar('\t');
        
    for(i = 0; i < space_num; i++)
        putchar(' ');
}