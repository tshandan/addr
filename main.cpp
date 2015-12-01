//
//  main.cpp
//  addr
//
//  Created by shandan on 15/12/1.
//  Copyright (c) 2015年 shandan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int *p,*q;
    p=(int *)malloc(16*4);
    q=(int *)malloc(16*4);
    for(int i=0;i<16;i++)
        p[i]=i*10;
    for(int i=0;i<16;i++)
        q[i]=i*100;
    for(int j=0;j<16;j++)
        printf("p[%d]=%d\n",j,p[j]);
    for(int j=0;j<16;j++)
        printf("q[%d]=%d\n",j,q[j]);
    printf("%x  %x\n",p,q);
    free(p);
    free(q);
    return 0;
}
