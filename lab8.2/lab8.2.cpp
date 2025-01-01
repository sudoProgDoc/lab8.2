#include <iostream>

int main()
{
    struct pel { int s; struct pel* p; };
    struct pel *p1, *p2;
    p1 = new struct pel;
    p2 = p1;
    for (int i = 0; i < 10; i++)
    {
        p2->s = i;
        p2->p = new struct pel;
        p2 = p2->p;
    }
    p2->p = NULL;

    p2 = p1;
    while (p2->p != NULL)
    {
        printf("%d", p2->s);
        printf("%s", " ");
        p2 = p2->p;
    }
}