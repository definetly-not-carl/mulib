# µLIB
This is a library of things. I will implement things if I think that they will be useful for me.

## Inspiration
The name of this library has been inspired by the library [lambdalib](https://davideborra.github.io/informatica/).

## Compilation
In order to compile your program with the library, you will need to execute the following command:
```
cc -o <executable_name> <c_file.c> mulib.c -lm
```

If you want to compile the graph project, you will have to get raylib and then you can compile with this command (on UNIX):
```
cc -o graph graph.c mulib.c -lpthread -lraylib -ldl -lm
```
