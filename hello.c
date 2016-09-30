#include <stdio.h>
#include <hello.h>
#include <stdlib.h>

void my_hello(char name[50]) {

  printf("Hello %s!\n", name); 

  char jname[50] = "Jessie";

  if(!strcmp(name, jname)){
    printf("   I LOVE YOU!!!!\n");
  }

  return; 

}

void get_name(char name[50]){

  printf("What is your name?\n");
  scanf("%s", name);

  return;

}
