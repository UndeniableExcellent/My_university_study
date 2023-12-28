// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("abc.txt", "r+");
//     while (!feof(fp))
//         if (fgetc(fp) == '*')
//         {
//             fseek(fp, -1, 1);
//             fputc('$', fp);
//             fflush(fp);
//         }
//     fclose(fp);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, n;
//     FILE *fp;
//     if ((fp = fopen("temp", "w+")) == NULL)
//     {
//         printf("不能建立temp文件\n");
//         exit(0);
//     }
//     for (i = 1; i <= 10; i++)
//         fprintf(fp, "%3d", i);
//     for (i = 0; i < 10; i++)
//     {
//         fseek(fp, i * 3L, SEEK_SET);
//         fscanf(fp, "%d", &n);
//         fseek(fp, i * 3L, 0);
//         fprintf(fp, "%3d", n + 10);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         fseek(fp, i * 6L, 0);
//         fscanf(fp, "%d", &n);
//         printf("%d,", n);
//     }
//     fclose(fp);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     FILE *pf;
//     char *s1 = "China", *s2 = "Beijing";
//     pf = fopen("abc.dat", "wb+");
//     fwrite(s2, 7, 1, pf);
//     rewind(pf);
//     fwrite(s1, 5, 1, pf);
//     fclose(pf);
//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *fp;
    int k, n, i, a[6] = {10, 20, 30, 40, 50, 60};
    fp = fopen("d2.txt", "w");
    for (i = 0; i < 6; i++)
        fprintf(fp, "%d,%d\n", i, a[i]);
    fclose(fp);
    fp = fopen("d2.txt", "r");
    for (i = 0; i < 3; i++)
    {
        fscanf(fp, "%d,%d", &k, &n);
        printf("%d,%d\n", k, n);
    }
    fclose(fp);
    return 0;
}