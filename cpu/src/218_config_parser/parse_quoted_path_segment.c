/* @k10d parse_quoted_path_segment @ 0x104b607a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Extracts a quoted string from param_2 and calls a handler with the extracted segment
 *   and a computed offset.
 * summary:
 *   The function scans param_2 for a substring enclosed in double quotes, copying it to a
 *   local buffer. It then calculates an offset based on the position of the closing quote
 *   and checks for specific delimiters like '%' or '/'. Finally, it calls
 *   format_string_to_buffer_10545140 with the extracted string and a pointer derived from
 *   either a constant or a call to parse_numeric_expression.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_quoted_path_segment(uint32_t *param_1,int param_2,uint8_t *param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uintptr_t sp;
  char acStack_58 [80];
  
  iVar3 = 0;
  if (*(char *)(param_2 + 1) != '\"') {
    iVar2 = iVar3;
    do {
      iVar3 = iVar2 + 1;
      acStack_58[iVar2] = *(char *)(param_2 + iVar3);
      iVar2 = iVar3;
    } while (*(char *)(param_2 + 1 + iVar3) != '\"');
  }
  acStack_58[iVar3] = '\0';
  cVar1 = *(char *)(param_2 + iVar3);
  pvVar4 = (void *)0x25;
  if ((((cVar1 != '%') && (cVar1 != '\0')) && (cVar1 != '/')) &&
     (iVar2 = iVar3 + 1, *(char *)(param_2 + iVar2) != '/')) {
    while( true ) {
      iVar3 = iVar3 + 1;
      cVar1 = *(char *)(param_2 + iVar3);
      iVar2 = iVar2 + 1;
      if ((cVar1 == '%') || (cVar1 == '\0')) break;
      if ((cVar1 == '/') || (*(char *)(param_2 + iVar2) == '/')) break;
    }
  }
  if (*(char *)(param_2 + iVar3) == '%') {
    pvVar4 = (void *)parse_numeric_expression(param_1,iVar3,(char *)param_2,param_4);
  }
  format_string_to_buffer_10545140(param_3,acStack_58,pvVar4,param_4);
  return;
}
