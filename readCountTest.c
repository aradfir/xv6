#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    printf(1,"There have %d read calls since kernel power on\n",readcount());
    exit();
}