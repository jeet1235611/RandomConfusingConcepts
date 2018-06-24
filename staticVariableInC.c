Static variable inside of a function in C

What will be printed out? 6 6 or 6 7? And why?

void foo()
{
    static int x = 5;
    x++;
    printf("%d", x);
}

int main()
{
    foo();
    foo();
    return 0;
}


There are two issues here, lifetime and scope.

The scope of variable is where the variable name can be seen. Here, x is visible only inside function foo().

The lifetime of a variable is the period over which it exists. If x were defined without the keyword static, the lifetime would be from the entry into foo() to the return from foo(); so it would be re-initialized to 5 on every call.

The keyword static acts to extend the lifetime of a variable to the lifetime of the programme; e.g. initialization occurs once and once only and then the variable retains its value - whatever it has come to be - over all future calls to foo().
