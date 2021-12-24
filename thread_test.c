//
// Created by aradf on 12/24/2021.
//

#include "types.h"
#include "stat.h"
#include "user.h"
int x=0;
void count_up(void){
    while(1){
        x++;
        sleep(1000);
    }
}
int main(void){
    thread_creator(count_up);
    while (1){
        printf(1,"Value of x:%d",x);
        sleep(1000);
    }
    exit();
}