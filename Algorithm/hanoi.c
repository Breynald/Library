#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, char one, char two, char three)
{
    if(n==1) printf("%c->%c\n", one, three);
    else
    {
        Hanoi(n-1, one, three, two);
        printf("%c->%c\n", one, three);
        Hanoi(n-1, two, one, three);
    }
    return;
}


int main()
{
    Hanoi(3, 'A', 'B', 'C');
    return 0;
}