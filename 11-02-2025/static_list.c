/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: ***************************** LOGIN 1: **********
 * AUTHOR 2: ***************************** LOGIN 2: **********
 * GROUP: *.*
 * DATE: ** / ** / **
 */

#include "static_list.h"

//______________________________________________________________________________________________________________________

void createEmptyList (tList L) {
    L.lastPos = LNULL;
}

//______________________________________________________________________________________________________________________

bool isEmptyList (tList L) {
    return (L.lastPos == LNULL);
}

//______________________________________________________________________________________________________________________

tPosL first (tList L) {
    return 0;
}

//______________________________________________________________________________________________________________________

tPosL last (tList L) {
    return L.lastPos;
}

//______________________________________________________________________________________________________________________

tPosL next (tPosL p, tList L) {
    if (p == L.lastPos) {
        return LNULL;
    }
    else {
        return p++;
    }
}

//______________________________________________________________________________________________________________________

tPosL previous (tPosL p, tList L) {
    if (p == 0) {
        return LNULL;
    }
    else {
        return p--;
    }
}

//______________________________________________________________________________________________________________________

bool insertItem (tItemL i, tPosL p, tList L) {
    if (L.lastPos == MAX - 1) {
        return false;
    }
    else {
        L.lastPos++;
        if (p == LNULL) {
            L.data[L.lastPos] = i;
        }
        else {
            for (tPosL q = L.lastPos; q > p; q--) {
                L.data[q] = L.data[q - 1];
            }
            L.data[p] = i;
        }
        return true;
    }
}

//______________________________________________________________________________________________________________________

void deleteAtPosition(tPosL p, tList L) {
    for (tPosL q = p; q < L.lastPos; q++) {
        L.data[q] = L.data[q + 1];
    }

    L.lastPos--;
}

//______________________________________________________________________________________________________________________

tItemL getItem (tPosL p, tList L) {
    return L.data[p];
}

//______________________________________________________________________________________________________________________

void updateItem (tItemL i, tPosL p, tList L) {
    L.data[p] = i;
}

//______________________________________________________________________________________________________________________

tPosL findItem (tItemL i, tList L) {
    if (L.lastPos == LNULL) {
        return LNULL;
    }
    else {
        for (tPosL q = 0; q < L.lastPos && (L.data[q] != i); q++);
    }
}