/* @k10d format_and_render_menu_item_10389774 @ 0x10389774
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Formats a status message based on two integer parameters and sends it to a fixed SDRAM
 *   buffer.
 * summary:
 *   The function initializes a local structure, calls compute_aspect_ratio_components to
 *   compute two values (ppuStack_c and ppuStack_10) from param_2 and param_3. It then
 *   selects a string pointer from a table at 0x10559830 based on the values of these two
 *   computed integers. The selected string and the computed values are passed to
 *   format_string_to_buffer_10545140 to write into a buffer at 0x800197a4. Finally, it
 *   calls menu_item_register and glyph_draw to process the buffer, likely for transmission
 *   or display.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_and_render_menu_item_10389774(int param_1,uint param_2,uint ***param_3)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  uint ***pppuVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_28 [4];
  uint8_t uStack_11;
  uint **ppuStack_10;
  uint **ppuStack_c;
  
  piVar5 = (int *)auStack_28;
  alloc_one_byte_if_null_10409cf6(&uStack_11);
  ppuStack_10 = (uint **)0x0;
  ppuStack_c = (uint **)0x0;
  pppuVar4 = &ppuStack_10;
  *piVar5 = (int)&ppuStack_c;
  compute_aspect_ratio_components(&uStack_11,param_2,(uint)param_3,(uint *)pppuVar4,(uint *)*piVar5);
  if (((uint ***)ppuStack_c == (uint ***)0x0) ||
     (pppuVar4 = (uint ***)ppuStack_10, (uint ***)ppuStack_10 == (uint ***)0x0)) {
    pcVar3 = (char *)0x10559830/*ROM*/;
  }
  else if ((uint ***)ppuStack_c == (uint ***)0x1) {
    if (ppuStack_10 < (uint ***)0x186a0) {
      pcVar3 = (char *)0x10559840/*ROM*/;
      param_3 = (uint ***)ppuStack_10;
    }
    else {
      pcVar3 = (char *)0x10559838/*ROM*/;
    }
  }
  else if ((uint ***)ppuStack_c == (uint ***)0xa) {
    if ((uint ***)ppuStack_10 == (uint ***)0x1) {
      pcVar3 = (char *)0x10559844/*ROM*/;
    }
    else {
      pcVar3 = (char *)0x1055984c/*ROM*/;
      param_3 = (uint ***)((uint)ppuStack_10 / 10);
      pppuVar4 = (uint ***)((uint)ppuStack_10 % 10);
    }
  }
  else {
    if ((uint ***)ppuStack_10 != (uint ***)0x1) goto LAB_10389882;
    if (ppuStack_c < (uint ***)0x2710) {
      pcVar3 = (char *)0x1055985c/*ROM*/;
      param_3 = (uint ***)ppuStack_c;
    }
    else {
      pcVar3 = (char *)0x10559854/*ROM*/;
    }
  }
  format_string_to_buffer_10545140((uint8_t *)0x800197a4/*SDRAM*/,pcVar3,param_3,pppuVar4);
LAB_10389882:
  iVar1 = count_string_bytes((char *)0x800197a4/*SDRAM*/);
  copy_string_with_limit((char *)0x800197a4/*SDRAM*/,(void *)0x10559864/*ROM*/,6 - iVar1);
  pvVar2 = (void *)menu_item_register(param_1);
  glyph_draw(pvVar2,(byte *)0x800197a4/*SDRAM*/);
  free_heap_if_flagged_10409d0a(&uStack_11,2);
  return;
}
