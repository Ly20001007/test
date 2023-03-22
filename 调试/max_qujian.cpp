#include<iostream>
using namespace std;

int main(){
    int N, min = 0x7fffffff, max = -1;
    int li,ri;
    int dist = 0;
    int left,right;
    int index;

    cin>>N;
    int i = 0;

    while (i++ < N)
    {
        scanf("%d%d",&li,&ri);
        if (min>li)
        {
            min = li;
        }
        if (max < ri)
        {
            max = ri;
        }
        if((ri-li)>dist){
            left = li;
            right = ri;
            dist = ri - li;
            index = i;
        }
    }
        if (left==min&&right==max)
        {
            printf("%d",index);
        }else
        printf("-1");
        


    return 0;
}