# gdb-for-noobs
If you have never even heard what a debugger is you've come to the right place. If you thought debuggers were useless, then you definitely try this tutorial out...
## Why use a debugger? 
most of us tend to have bugs in our code. We could use printing commands to test our code, or we could use a debugger. Many times our code might seem to work correctly, because we didn't test it under enough scenarios. Other times we know there's a bug, but by just reading the code we don't notice it is there. Thus, we should develop a habit of launching a debugger when we get into trouble. 

## Walkthrough
1. for compiling your code to make it suitable for debugging using gdb:
```sh 
 g++ -g "buggy_factorial.cpp" 
```
