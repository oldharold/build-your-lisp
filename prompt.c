// 实现一个简单Lispy终端
// cc -std=c99 -Wall prompt.c -ledit -o prompt

#include <stdio.h>
#include <stdlib.h>

//可移植性(portability)

// #define MAX 300

// Windows
#ifdef _WIN32   //
#include <string.h>

static char buffer[2048];
/* Fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

/* Fake add_history function */
void add_history(char* unused) {}

/* Otherwise include the editline headers */
#else  //

#ifdef __linux__
#include <editline/readline.h>
#include <editline/history.h>
#endif

#ifdef __MACH__
#include <editline/readline.h>
#endif

#endif //

/*
**  #ifdef
**  #else
**  #endif
*/

int main(int argc, char const *argv[])
{
    while (1){
        puts("Lispy version 0.0.0.0.1");
        puts("Press ctrl+c to exit\n");

        char* input = readline("lispy> ");     //动态分配内存 ---> readline 申请一块新的内存，所以需要手动释放

        add_history(input);    //将用户输入添加到编辑库的历史记录中，以便用户可以使用向上箭头键来访问之前输入的命令

        printf("No you're a %s\n", input);

        free(input);           //释放之前用于存储用户输入的内存空间，以防止内存泄漏

    }

    return 0;
}

