/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.c                                                               */
/*  PRINCIPAL AUTHOR      :  YangXuan                                                             */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  Interface of the menu                                                */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by YangXuan, 2014/09/22
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "linktable.h"


#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

/* data struct and its operations */
typedef struct DataNode
{
    tLinkTableNode * pNext;
    char*   cmd;
    char*   desc;
    int     (*handler)();
} tDataNode;

typedef struct MenuNode
{
    struct    MenuNode *next;
    char      *cmd;
    char      *desc; 
    int       (*handler)(); 
} tMenuNode;

/* Search cmd */
tDataNode* FindCmd(char * cmd);

/* show all cmd in listlist */
int ShowAllCmd();

/* Inite menu date */ 
int InitMenuData(tMenuNode * data);

/* Add menu Node */ 
int AddMenuNode(tMenuNode * menuNode);

/* Delete menu node */
int DeleteMenuNode(char * cmd);


