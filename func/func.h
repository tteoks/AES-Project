#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdlib.h>

void convertor(char *string, uint8_t (*out)[4]);

char *padding(char *string);

void inv_convertor(uint8_t (*in)[4], char *string);
