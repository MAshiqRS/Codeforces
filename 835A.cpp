#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    int a,b,c,d;

    scanf("%d%d%d%d%d",&s, &v1, &v2, &t1, &t2);

    a=s*v1+(2*t1);
    b=s*v2+(2*t2);
    if(a<b)
    {
        printf("First\n");
    }
    else if ( b<a)
    {
        printf("Second\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}
