#ifndef __test_H__
#define __test_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>



extern int IC, DC, L;

static const char *cmd_names[] = {/*0*/"mov", /*1*/"cmp", /*2*/"add", /*3*/"sub", /*4*/"not", /*5*/"clr", /*6*/"lea", /*7*/"inc",
					 /*8*/"dec", /*9*/"jmp", /*10*/"bne", /*11*/"red", /*12*/"prn", /*13*/"jsr", /*14*/"rts", /*15*/"stop", NULL};

static const char *cmd_opcode[] = {/*0*/"....", /*1*/".../", /*2*/"../.", /*3*/"..//", /*4*/"./..", /*5*/"././", /*6*/".//.", /*7*/".///",
					 /*8*/"/...", /*9*/"/../", /*10*/"/./.", /*11*/"/.//", /*12*/"//..", /*13*/"//./", /*14*/"///.", /*15*/"////", NULL};

typedef enum {A, E, R} A.R.E_INDEX;
static const char *A.R.E_opcode[] = {/*Absolute*/"..", /*External*/"./", /*Relocatable*/"/."};

typedef enum {instant, dir, jump, dirRegi, defult} typeMethod;/*addressing type method*/
static const char *addressing_opcode[] = {/*instant*/"..", /*direct*/"./", /*jumping with parmaeters*/"/.", /*direct register*/"//", /*defult*/ ".."};


#endif /* __test_H__ */

