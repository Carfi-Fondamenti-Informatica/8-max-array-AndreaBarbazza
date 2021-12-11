#include "lib.h"
#include <iostream>


float Massimo (float numeri[], int dimensione){

    float max=numeri[0];
    for (int i=0; i<dimensione; i++){
        if(numeri[i]>max){
            max=numeri[i];
        }
    }
    return max;
}
