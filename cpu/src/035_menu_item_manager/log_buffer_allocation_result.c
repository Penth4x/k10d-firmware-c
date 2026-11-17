/* @k10d log_buffer_allocation_result @ 0x1038e498
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats and logs the result of a buffer allocation attempt with size and pointer
 *   details.
 * summary:
 *   The function calls compute_division_quotient_remainder to perform an allocation or
 *   query, then branches based on the resulting pointer value to select a specific error or
 *   status string. It uses format_string_to_buffer_10545140 to format these messages and
 *   copy_string_with_limit to write them to a log buffer at 0x80019823. Finally, it invokes
 *   a virtual method on an object obtained via menu_item_register, likely to update state
 *   or trigger a callback.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void log_buffer_allocation_result(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  void **ppvVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_34 [4];
  char acStack_19 [8];
  uint8_t uStack_11;
  void *pvStack_10;
  void **ppvStack_c;
  
  piVar5 = (int *)auStack_34;
  alloc_one_byte_if_null_10409cf6(&uStack_11);
  pvStack_10 = (void *)0x0;
  ppvStack_c = (void **)0x0;
  ppvVar4 = &pvStack_10;
  *piVar5 = (int)&ppvStack_c;
  pvVar2 = param_3;
  compute_division_quotient_remainder(&uStack_11,param_2,(uint)param_3,(uint *)ppvVar4,(uint *)*piVar5);
  if (param_3 == (void *)0x0) {
    pcVar3 = (char *)0x10559f8c/*ROM*/;
  }
  else {
    pvVar2 = pvStack_10;
    if ((pvStack_10 == (void *)0x0) && (ppvStack_c == (void **)0x0)) {
      pcVar3 = (char *)0x10559f94/*ROM*/;
    }
    else if (pvStack_10 < (void *)0xa) {
      pcVar3 = (char *)0x10559f9c/*ROM*/;
      ppvVar4 = ppvStack_c;
    }
    else if (pvStack_10 < (void *)0x3e8) {
      pcVar3 = (char *)0x10559fb0/*ROM*/;
    }
    else {
      pcVar3 = (char *)0x10559fa8/*ROM*/;
    }
  }
  format_string_to_buffer_10545140(acStack_19,pcVar3,pvVar2,ppvVar4);
  format_string_to_buffer_10545140((uint8_t *)0x80019823/*SDRAM*/,(char *)0x10559fb4/*ROM*/,pvVar2,ppvVar4);
  iVar1 = count_string_bytes(acStack_19);
  copy_string_with_limit((char *)0x80019823/*SDRAM*/,acStack_19,iVar1);
  iVar1 = count_string_bytes(acStack_19);
  copy_string_with_limit((char *)0x80019823/*SDRAM*/,(void *)0x10559fb8/*ROM*/,4 - iVar1);
  pvVar2 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar2,(byte *)0x80019823/*SDRAM*/);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8),1);
  free_heap_if_flagged_10409d0a(&uStack_11,2);
  return;
}
