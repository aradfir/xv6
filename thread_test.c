//
// Created by aradf on 12/24/2021.
//

#include "types.h"
#include "stat.h"
#include "user.h"
int x=0;
void count_up(){
    int i;
    for(i=0;i<10;i++){
        x++;
        sleep(100);
    }
    printf(1,"Thread function: DONE\n");
}
int main(void){
    thread_creator(&count_up,0);
    int i=0;
    for(i=0;i<5;i++){
        printf(1,"Value of x:%d\n",x);
        sleep(100);
    }
    printf(1,"Waiting on thread to finish\n");
    thread_wait();
    printf(1,"Thread is done.\n");
    exit();
}