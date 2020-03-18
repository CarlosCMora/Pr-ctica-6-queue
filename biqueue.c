#include<stdlib.h>
#include<stdio.h>
#include"biqueue.h"

bool add_bq(biqueue b,DATA d, bool f){

    if(f){
        add_head(b,d);
        return true;
    }
    else{
        add_tail(b,d);
        return true;
    }
    return false;
}

DATA remove_bq(biqueue b, bool f){
    DATA x;
    if(f){
        x=remove_head(b);
        return x;
    }
    else{
        x=remove_tail(b);
        return x;
    }
    return x;
    
}