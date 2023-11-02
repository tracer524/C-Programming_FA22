//
//  main.c
//  qcy
//
//  Created by 崔士强 on 2022/12/28.
//

#include <stdio.h>
struct customer{
    int id;
    char name[20];
    float amount;
};
int main(){
    struct customer cust;
    cust.id=234;
    cust.name[0]='T';
    cust.name[1]='i';
    cust.name[2]='g';
    cust.name[3]='e';
    cust.name[4]='r';
    cust.amount=500.00;
    printf("%s",cust.name);
    return 0;
}
