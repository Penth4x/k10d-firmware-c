/* @k10d format_and_log_buffer_state @ 0x10389a84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats a status message based on buffer pointers and logs it to a fixed SDRAM
 *   location.
 * summary:
 *   The function initializes a local structure and calls
 *   compute_division_quotient_remainder to populate it with data from param_3. It then
 *   selects a string pointer from a set of constants (0x105598a0-0x105598c8) based on the
 *   values of the populated pointers. It calls format_string_to_buffer_10545140 to write
 *   this message to the SDRAM address 0x800197b2, followed by copy_string_with_limit to
 *   append a length or terminator. Finally, it retrieves an object via menu_item_register
 *   and passes the SDRAM buffer to glyph_draw, likely for further processing or
 *   transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_log_buffer_state(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  void **ppvVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_28 [4];
  uint8_t uStack_11;
  void *pvStack_10;
  void **ppvStack_c;
  
  piVar5 = (int *)auStack_28;
  alloc_one_byte_if_null_10409cf6(&uStack_11);
  pvStack_10 = (void *)0x0;
  ppvStack_c = (void **)0x0;
  ppvVar4 = &pvStack_10;
  *piVar5 = (int)&ppvStack_c;
  pvVar2 = param_3;
  compute_division_quotient_remainder(&uStack_11,param_2,(uint)param_3,(uint *)ppvVar4,(uint *)*piVar5);
  if (param_3 == 0) {
    pcVar3 = (char *)0x105598a0/*ROM*/;
  }
  else {
    pvVar2 = pvStack_10;
    if ((pvStack_10 == 0) && (ppvStack_c == (void **)0x0)) {
      pcVar3 = (char *)0x105598a8/*ROM*/;
    }
    else if (pvStack_10 < (void *)0xa) {
      pcVar3 = (char *)0x105598b0/*ROM*/;
      ppvVar4 = ppvStack_c;
    }
    else if (pvStack_10 < (void *)0x3e8) {
      pcVar3 = (char *)0x105598c4/*ROM*/;
    }
    else {
      pcVar3 = (char *)0x105598bc/*ROM*/;
    }
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197b2/*SDRAM*/,pcVar3,pvVar2,ppvVar4);
  iVar1 = count_string_bytes((char *)0x800197b2/*SDRAM*/);
  copy_string_with_limit((char *)0x800197b2/*SDRAM*/,(void *)0x105598c8/*ROM*/,4 - iVar1);
  pvVar2 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar2,(byte *)0x800197b2/*SDRAM*/);
  free_heap_if_flagged_10409d0a(&uStack_11,2);
  return;
}
