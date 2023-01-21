#include <dlfcn.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char ** argv)
{
    if(argc < 2)
    {
        printf("Mettez en argument lib1 ou lib2\n");
    }
    else
    {
        if(strcmp(argv[1], "lib1") == 0)
        {
            void *dH = dlopen("./libmyprintf1.so", RTLD_LAZY);
            void (*myprintf1)(const char*);
            *(void**)(&myprintf1) = dlsym(dH, "myprintf1");
            myprintf1("Hello World 1");
            dlclose(dH);
        }
        if(strcmp(argv[1], "lib2") == 0)
        {
            void *dH = dlopen("./libmyprintf2.so", RTLD_LAZY);
            void (*myprintf2)(const char*);
            *(void**)(&myprintf2) = dlsym(dH, "myprintf2");
            myprintf2("Hello World 2");
            dlclose(dH);
        }
    }
    return 0;
}