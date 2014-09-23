/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  test.c                                                               */
/*  PRINCIPAL AUTHOR      :  Mengning                                                             */
/*  SUBSYSTEM NAME        :  test                                                                 */
/*  MODULE NAME           :  test                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/08/31                                                           */
/*  DESCRIPTION           :  This is a test program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Mengning, 2014/08/31
 *
 */
 
#define MAX_MENU_LEN 100
#define MAX_CMD_LEN 50

#include<stdio.h>
#include<stdlib.h>
#include"menu.h"

/* test begins*/
int Help();
int Quit();
int Yes();
static tMenuNode data[] =
{
    {&data[1], "help", "Menu List:", Help},
    {&data[2], "version", "Menu Program V1.0", NULL},
    {NULL, "quit", "Quit from Menu Program V1.0", Quit}
};   

tMenuNode * head = NULL;

main()
{
    InitMenuData(data); 
    /* cmd line begins */
    char  cmd[MAX_CMD_LEN];
    char desc[MAX_MENU_LEN];
    char tmp[MAX_CMD_LEN];
    /* Search cmd */
    printf("Input a cmd number > ");
    scanf("%s", cmd);
    tDataNode *p = FindCmd(cmd);
    if( p == NULL)
    {
        printf("This is a wrong cmd!\n");
    }
    printf("%s - %s\n", p->cmd, p->desc); 
    if(p->handler != NULL) 
    { 
        p->handler();
    }
    /* Add menu */
    printf("Add a new Menu!\n");
    printf("Input cmd and desc\n");
    scanf("%s", cmd);
    gets(desc);
    tMenuNode * menuNode = (tMenuNode*)malloc(sizeof(tMenuNode));
    menuNode->cmd = cmd;
    menuNode->desc = desc;
    menuNode->handler = Yes; 
    AddMenuNode(menuNode);
    /* Test Add Result */
    printf("Show add menu result!\n");
    ShowAllCmd();
    /* Delete menu */
    printf("Delete a new Menu!\n");
    printf("Input the Deleted cmd\n");
    scanf("%s", tmp);
    DeleteMenuNode(tmp);
    /* Test Add Result */
    printf("Show delete menu result\n");
    ShowAllCmd();
}

int Help()
{
    ShowAllCmd(head);
    return 0; 
}

int Quit()
{
    exit(0);
}

int Yes()
{
 	printf("Yes, You are right");
}
