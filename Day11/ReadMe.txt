If we don't use the refrence main() string object will be copied to fun() string,so in that case two copies of string will be created.

So,Function didn't get copied here,in the main function the string variable pass the copy of string 's',to solve the problem.