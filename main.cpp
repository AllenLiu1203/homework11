//
//  main.cpp
//  homework11
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a,b,c;
    printf("請輸入三個整數數字\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
        if(a>c)
            if(b>c)
                printf("三數由小到大=%d%d%d\n",c,b,a);
            else
                printf("三數由小到大=%d%d%d\n",b,c,a);
            else
                printf("三數由小到大=%d%d%d\n",b,a,c);
            else
                if (b>c)
                    if (a>c)
                        printf("三數由小到大=%d%d%d\n",c,a,b);
                    else
                        printf("三數由小到大=%d%d%d\n",a,c,b);
                    else
                        printf("三數由小到大=%d%d%d\n",a,b,c);
    system("PAUSE");
    return 0;
}
