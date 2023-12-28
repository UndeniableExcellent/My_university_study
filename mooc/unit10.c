// #include <stdio.h>
// struct date
// {
//     int year, month, day;
// };
// struct worklist
// {
//     char sex;
//     struct date birthday;
// } person;
// int main()
// {

//     person.birthday.year = 2014;
//     printf("%d", person.birthday.year);
//     return 0;
// }

// #include <stdio.h>
// struct st
// {
//     int x, y;
// } data[2] = {1, 10, 2, 20};
// int main()
// {
//     struct st *p = data;
//     printf("%d,", p->y);
//     printf("%d\n", (++p)->x);
//     return 0;
// }

// #include <stdio.h>
// struct stru
// {
//     int x;
//     char c;
// };
// void func(struct stru b)
// {
//     b.x = 20;
//     b.c = 'y';
// }
// int main()
// {
//     struct stru a = {10, 'x'};
//     func(a);
//     printf("%d,%c\n", a.x, a.c);
//     return 0;
// }

// #include <stdio.h>
// struct stru
// {
//     int x;
//     char c;
// };
// void func(struct stru *b)
// {
//     b->x = 20;
//     b->c = 'y';
// }
// int main()
// {
//     struct stru a = {10, 'x'}, *p = &a;
//     func(p);
//     printf("%d,%c\n", a.x, a.c);
//     return 0;
// }

// struct stud
// {
//     long id[2];
//     double ave;
// } a, *p;
// int main()
// {
//     printf("%d", sizeof(a));
//     return 0;
// }

struct
{
    int x;
    char *y;
} sa[2] = {{1, "ab"}, {2, "cd"}}, *p = sa;
int main()
{
    //printf("%d\n", ++p->x);
    //printf("%d\n",(p+1)->x);
    printf("%s",(++p)->y);
    return 0;
}