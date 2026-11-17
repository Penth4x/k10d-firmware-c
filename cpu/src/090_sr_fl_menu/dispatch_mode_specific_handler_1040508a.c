/* @k10d dispatch_mode_specific_handler_1040508a @ 0x1040508a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Selects one of four indexed handlers based on param_2 and invokes a shared setup
 *   routine followed by a per-mode action.
 * summary:
 *   Maps param_2 values 0xc-0xf to indices 0-3, computes a pointer into a 7-byte-stride
 *   table, and calls format_string_to_buffer_10545140 with that pointer and params 3/4. For
 *   valid indices it calls menu_item_register(param_1) to obtain an object pointer, then
 *   passes it and the table pointer to glyph_draw. The specific camera subsystem is not
 *   identifiable from the provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_specific_handler_1040508a(int param_1,int param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar3 = 4;
  if (param_2 == 0xc) {
    iVar3 = 0;
LAB_104050b6:
    bVar5 = SBORROW4(iVar3,4);
    iVar1 = iVar3 + -4;
  }
  else {
    if (param_2 == 0xd) {
      iVar3 = 1;
      goto LAB_104050b6;
    }
    if (param_2 == 0xe) {
      iVar3 = 2;
      goto LAB_104050b6;
    }
    if (param_2 == 0xf) {
      iVar3 = 3;
      goto LAB_104050ba;
    }
    bVar5 = false;
    iVar1 = 0;
  }
  if (bVar5 == iVar1 < 0) {
    return;
  }
LAB_104050ba:
  pbVar4 = (byte *)(iVar3 * 7 + -0x7ffe31ac);
  format_string_to_buffer_10545140(pbVar4,(void *)&DAT_10598608/*ROM*/,param_3,param_4);
  pvVar2 = (void *)0x0;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || (iVar3 == 3)) {
    pvVar2 = (void *)menu_item_register(param_1);
    bVar5 = pvVar2 == (void *)0x0;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    glyph_draw(pvVar2,pbVar4);
  }
  return;
}
