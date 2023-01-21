# Drivers Linux : TP3
TP3 for course of Drivers Linux in 4th years of ECE

by Eric Chen

## Source
Me

## Installation / Preparation
### Create library 1
```
gcc -c myprintf1.c -fPIC
gcc myprintf1.o -shared -o libmyprintf1.so
```
### Create library 2
```
gcc -c myprintf2.c -fPIC
gcc myprintf2.o -shared -o libmyprintf2.so
```
### Main
```
gcc -c tp3.c
gcc tp3.o -ldl
```

## How to use it
- ```./a.out``` to see how to use it

OR

```
./a.out lib1
./a.out lib2
```
