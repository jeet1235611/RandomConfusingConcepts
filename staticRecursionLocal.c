As per my understanding, each called function has some memory allocated to it in the program stack, and this holds true even if the same function calls itself recursively (i.e, each invocation has it's own memory in program stack). Please answer the following two questions arising from my program below:

If a variable is declared static in a function, will the same variable/same copy be used for all recursive calls of that function?

If the variable is not declared static (e.g, simply "int x"), will each recursive call to the function have its own copy of that variable? If yes, is that the way it normally happens when a function is called from other function, including the recursive calls?

#include<stdio.h>
#include<stdlib.h>

int main()
{
    static int x=0;
    x++;
    printf("Team %d\n",x);
    if(x<10)
        main();
    else
        exit;
}
Output:

Team 1
Team 2
Team 3
Team 4
Team 5
Team 6
Team 7
Team 8
Team 9
