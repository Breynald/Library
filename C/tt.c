#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float function(float x)
{
	return x*x*x;
}

float Integral(float (*f)(float), float a, float b)
{
    float s, h;
    int n = 100, i;
    s = ((*f)(a) + (*f)(b)) / 2;
    h = (b - a) / n;
     
    for (i=1; i<n; i++)
    {
       s += (*f)(a + i * h);
    }
    return s * h ;
}


int main()
{
    
	printf("%f", Integral(function, 1, 2));
	return 0;
}