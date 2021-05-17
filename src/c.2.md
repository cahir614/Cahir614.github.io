# Pointers and Addresses

## Access an address of a variable with &

```c
int a = 3;

printf("%d", a); 	/* prints 3 */
printf("%d", &a); 	/* prints e.g. 0x0034 */
```
when 0x0034 would be the address of in which 3 is stored

## Access the variable which is stored in an address with *

```c
int a = 3;
int *p;

p = &a;
printf("%d\n", *p); /* 3 */
```

in p the address of a is stored.
\*p is the value of the variable which is stored in p.

with 
```c
*p = 12;
```
you would also change the content of the variable a
```c
printf("%d", a); 
``` 
prints 12 







			
