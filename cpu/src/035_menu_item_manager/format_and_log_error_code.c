/* @k10d format_and_log_error_code @ 0x1038e2ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats a status code into a message string and logs it to a buffer and object.
 * summary:
 *   The function calls compute_aspect_ratio_components to retrieve two status values
 *   (ppuStack_c and ppuStack_10) based on param_2 and param_3. It then selects a specific
 *   error message string from a table (0x10559f4c-0x10559f84) based on the values of these
 *   status codes, using arithmetic (division/modulo by 10) for one case. It formats this
 *   message into a local buffer using format_string_to_buffer_10545140, appends a second
 *   fixed message, and then writes the combined result to a global buffer at 0x8001981c.
 *   Finally, it retrieves an object via menu_item_register, updates it with the buffer
 *   content via glyph_draw, and makes a virtual call on that object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_log_error_code(int param_1,uint param_2,uint ***param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  uint ***pppuVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_34 [4];
  char acStack_1b [10];
  uint8_t uStack_11;
  uint **ppuStack_10;
  uint **ppuStack_c;
  
  piVar5 = (int *)auStack_34;
  alloc_one_byte_if_null_10409cf6(&uStack_11);
  ppuStack_10 = (uint **)0x0;
  ppuStack_c = (uint **)0x0;
  pppuVar4 = &ppuStack_10;
  *piVar5 = (int)&ppuStack_c;
  compute_aspect_ratio_components(&uStack_11,param_2,(uint)param_3,(uint *)pppuVar4,(uint *)*piVar5);
  if (((uint ***)ppuStack_c == (uint ***)0x0) ||
     (pppuVar4 = (uint ***)ppuStack_10, (uint ***)ppuStack_10 == (uint ***)0x0)) {
    pcVar3 = (char *)0x10559f4c/*ROM*/;
  }
  else if ((uint ***)ppuStack_c == (uint ***)0x1) {
    if (ppuStack_10 < (uint ***)0x186a0) {
      pcVar3 = (char *)0x10559f5c/*ROM*/;
      param_3 = (uint ***)ppuStack_10;
    }
    else {
      pcVar3 = (char *)0x10559f54/*ROM*/;
    }
  }
  else if ((uint ***)ppuStack_c == (uint ***)0xa) {
    if ((uint ***)ppuStack_10 == (uint ***)0x1) {
      pcVar3 = (char *)0x10559f60/*ROM*/;
    }
    else {
      pcVar3 = (char *)0x10559f68/*ROM*/;
      param_3 = (uint ***)((uint)ppuStack_10 / 10);
      pppuVar4 = (uint ***)((uint)ppuStack_10 % 10);
    }
  }
  else {
    if ((uint ***)ppuStack_10 != (uint ***)0x1) goto LAB_1038e3fa;
    if (ppuStack_c < (uint ***)0x2710) {
      pcVar3 = (char *)0x10559f78/*ROM*/;
      param_3 = (uint ***)ppuStack_c;
    }
    else {
      pcVar3 = (char *)0x10559f70/*ROM*/;
    }
  }
  format_string_to_buffer_10545140(acStack_1b,pcVar3,param_3,pppuVar4);
LAB_1038e3fa:
  format_string_to_buffer_10545140((uint8_t *)0x8001981c/*SDRAM*/,(char *)0x10559f80/*ROM*/,param_3,pppuVar4);
  iVar1 = count_string_bytes(acStack_1b);
  copy_string_with_limit((char *)0x8001981c/*SDRAM*/,acStack_1b,iVar1);
  iVar1 = count_string_bytes(acStack_1b);
  copy_string_with_limit((char *)0x8001981c/*SDRAM*/,(void *)0x10559f84/*ROM*/,6 - iVar1);
  pvVar2 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar2,(byte *)0x8001981c/*SDRAM*/);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8),1);
  free_heap_if_flagged_10409d0a(&uStack_11,2);
  return;
}
