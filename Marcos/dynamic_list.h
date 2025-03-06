/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: ***************************** LOGIN 1: **********
 * AUTHOR 2: ***************************** LOGIN 2: **********
 * GROUP: *.*
 * DATE: ** / ** / **
 */

#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H

#include "types.h"
#include <stdbool.h>
#define LNULL -1
typedef int *tPosL;
typedef struct {
    tItemL data;
    tPosL lastPos;
}tList;

void  createEmptyList(tList* r);
//______________________________________________________________________________________________________________________
bool isEmptyList(tList r);
//______________________________________________________________________________________________________________________
tPosL first(tList r);
//______________________________________________________________________________________________________________________
tPosL last(tList r);
//______________________________________________________________________________________________________________________
tPosL previous(tPosL a,tList r);
//______________________________________________________________________________________________________________________
tPosL next(tPosL a,tList r);
//______________________________________________________________________________________________________________________
void updateItem (tItemL i, tPosL p, tList* r);
//______________________________________________________________________________________________________________________
void deleteaPosicion(tPosL a, tList* r);
//______________________________________________________________________________________________________________________
bool insertItem(tItemL i,tPosL p,tList* r);
//______________________________________________________________________________________________________________________
tItemL getItem(tList r,tPosL a);
//______________________________________________________________________________________________________________________
tPosL findItem(tConsoleId c,tList r);
//______________________________________________________________________________________________________________________
#endif