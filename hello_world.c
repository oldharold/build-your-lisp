//git test1
//git test2
//git test3

#include <stdio.h>
void Hello ( int n );

int main( int agrc, char **argv){

    int n;
    puts("Input n: ");
    scanf("%d",&n);

//if

    if ( n<=0 || n>=15 ){
        puts("The number you typed is out of range.");
    }else{
        Hello(n);
    }

//for

    for ( int i=0; i<5; i++){
        puts("Hello World!_f");
    }

//while

    int count=5;
    while (count > 0){
        puts("Hello World!_w");
        count--;
    }

//do while

    int cnt = 2;
    do{
        puts("Keep on working.");
        cnt--;
    }while( cnt > 0);

//switch,break 

    int number = 2;

    switch (number)
    {
    case 1:
        printf("H\n");
        break;
    case 2:
        printf("B\n");
        break;
    default:
        break;
    }

//contine

for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue; // 当 i == 2 时，跳过本次迭代，执行下一次迭代
    }
    printf("i = %d\n", i);
}


//typedef

    typedef struct
    {
        char **name;
        char **category;
        float price;
    } book;

    book onelostbook;
    onelostbook.name = "old man and sea";
    onelostbook.category = "novel";
    onelostbook.price = 28;
    

    return 0;    
}

//function

void Hello ( int n ){
    while (n > 0){
        puts("Hello World!_h");
        n--;
    }
}
