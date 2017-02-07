#include <stdio.h>
#include <stdlib.h>

#define NPOS 5

void tirage(int []) ;

int main()
{
    int i;
    int tir[NPOS];

    /* initialisation */
    tirage(tir);
    for (i=0; i<NPOS ; i++) printf("%d", tir[i]);


    return 0;
}

void tirage(int t[])
{

}
