// Fábio Souto 
// MATRÍCULA: 11621EAU019
#include <stdio.h>

void fun(int dec)
{
    int o, c;
    for(o=31; o>=0; o--)
    {
        if(dec>>o&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
int main()
{
    int x, b, c, d;
    printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\n");
    scanf("%d", &x);
    switch (x)
    {
        case 1:
            scanf("%d", &b);
            d= ~b;
            printf("NOT %d (", b);
            fun(b);
            printf(") :");
            printf(" %d (", d);
            fun(d);
            printf(")\n");
            break;
        case 2:
            scanf("%d %d", &b, &c);
            d = b & c;
            printf("%d (", b);
            fun(b);
            printf(") AND %d (",c);
            fun(c);
            printf(") : ");
            printf("%d (", d);
            fun(d);
            printf(")\n");
            break;
        case 3:
            scanf("%d %d", &b, &c);
            d = b | c;
            printf("%d (", b);
            fun(b);
            printf(") OR %d (",c);
            fun(c);
            printf(") : ");
            printf("%d (", d);
            fun(d);
            printf(")\n");
            break;
        case 4:
            scanf("%d %d", &b, &c);
            d = b ^ c;
            printf("%d (", b);
            fun(b);
            printf(") XOR %d (",c);
            fun(c);
            printf(") : ");
            printf("%d (", d);
            fun(d);
            printf(")\n");
            break;
        case 5:
            scanf("%d %d", &b, &c);
            d = b >> c;
            printf("%d (", b);
            fun(b);
            printf(") >> %d (",c);
            fun(c);
            printf(") : ");
            printf("%d (", d);
            fun(d);
            printf(")\n");
            break;
        case 6:
            scanf("%d %d", &b, &c);
            d = b << c;
            printf("%d (", b);
            fun(b);
            printf(") << %d (",c);
            fun(c);
            printf(") : ");
            printf("%d (", d);
            fun(d);
            printf(")\n");
            break;

    }
    return 0;
}
