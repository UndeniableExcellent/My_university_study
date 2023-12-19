#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
// int main()
// {
//     int i = 0;
//     char *s = "a\041#041\\b";
//     printf("%s\n", s);
//     while (*s++)
//         i++;
//     printf("%d\n", i);
//     return 0;
// }

// int main()
// {
//     int len = strlen("b\013c\xac\\abc\n");
//     char *s = "b\013c\xac\\abc\n";
//     printf("%s\n", s);
//     printf("%d\n", len);
//     return 0;
// }

// int main()
// {
//     char a[10];
//     char*p;
//     p=a;
//     //a="abcdef";//错误  表达式必须是可修改的左值
//     printf("%s\n",p);
//     printf("%s\n",a);
//     return 0;
// }

// int main()
// {
//     char b[] = "Hello, you!";
//     b[5] = 0;
//     printf("%s\n", b);
//     return 0;
// }
// int main()
// {
//     // char s[] = "123", t[] = "abcd";
//     // if (*s > *t)
//     //     printf("%s\n", s);
//     // else
//     //     printf("%s\n", t);
//     // return 0;

//     char *p = "abcdefghijklmnopq";
//     while (*p++ != 'e')
//         ;
//     printf("%c\n", *p);
// }

// int main()
// {
//     char*str;
//     char**s=&str;
//     str="hello";//正确
//     s="world";
//     *s="world";//正确
//     *s='A';
//     **s="world";
//     printf("%s\n",str);
//     return 0;
// }

// int main()
// {
//     char s[20]="programming", *ps=s;
//     printf("%c\n", ps+2);
//     printf("%c\n", ps[2]);
//     //printf("%c\n", *(ps+2));
//     printf("%c\n", s[2]);
//     ps+=2;
//     printf("%c\n", *ps);
//     return 0;
// }
// #include <iostream>
// int main()
// {
//    char s[20] = "programming";
//    char *ps = s;
//    std::cout << ps + 2 << std::endl; // ogamming
//    std::cout << ps[2] << std::endl; // o
//    std::cout << s[2] << std::endl;
//    ps += 2;
//    std::cout << *ps << std::endl;
//    return 0;
// }

// int main()
// {
//     // int n=strlen("ab\022\x12\\ab\a");
//     // printf("%d\n",n);
//     char s1[] = "I Like Pizza!";
//     strupr(s1);
//     puts(s1);
//     return 0;
// }

// int main()
// {
//     // char s1[] = "Basic", s2[] = "Base";
//     // if (strcmp(s1, s2))
//     //     strcpy(s1, s2);
//     // puts(s1);
//     cout<<strlen("ab\045+045\'b")<<endl;
//     return 0;
// }

int main()
{
    char a[7] = "abcdef", b[4] = "ABC";
    strcpy(a, b);
    cout<<a[5]<<endl;
    return 0;
}