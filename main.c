#include <stdio.h>
#include "Lab.h"

int main() {
    int task, add;
    scanf("%d", &add); 
    if (add == 1)
         return lab1();
    else if (add == 2) 
        return lab2(); 
    else if (add == 3) 
        return lab3();
    else if (add == 4)
        return lab4();
    else if (add ==5)
        return lab5();
    else if (add==6)
        return lab6();
    else if (add==7)
        return lab7();
        printf("can't show task"); 
        return 1; 
    }