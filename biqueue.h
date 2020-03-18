#ifndef BIQUEUE_H
#define BIQUEUE_H
#include"list.h"

typedef list* biqueue;

bool add_bq(biqueue b,DATA d, bool f);//f si es verdadero al inicio, falso al final
DATA remove_bq(biqueue b, bool f);


#endif