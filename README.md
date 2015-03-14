# linux-process-self-monitoring

Code for article: (http://vadimgenkin.blogspot.com/2015/02/a-very-simple-self-monitoringwatchdog.html)

### Intro ###

A very simple Linux process self-monitoring implementation.

### Instructions ###

To compile/run/test this code use:

$ gcc -o main main.c

$ ./main

The output that you will see will be similar to the following:

start monitoring for pid: 2178

working...

working...

working...

Now, try to kill this process by running:

$ kill 2178

The output that you wil see will be similar to the following:

start monitoring for pid: 2222

working...

working...

working...

That is, the parent process forked another child and the same code is running. 

