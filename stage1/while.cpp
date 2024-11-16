#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// int main()
// {
//     srand((unsigned int)time(NULL));
//     int num=rand()%100+1;
//     cout<<num<<endl;
//     int guess=0;
//     while(1)
//     {
//         cin>>guess;
//         if(guess>num)
//         {
//             cout<<"猜大了"<<endl;
//         }
//         else if(guess<num)
//         {
//             cout<<"猜小了"<<endl;
//         }
//         else
//         {
//             cout<<"猜对了"<<endl;
//             break;
//         }
//     }
//     return 0;
// }

int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";//\t打印对齐
        }
        cout<<endl;
    }
    cin.get();
    return 0;
}