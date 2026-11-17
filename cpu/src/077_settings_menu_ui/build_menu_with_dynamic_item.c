/* @k10d build_menu_with_dynamic_item @ 0x103d679a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values derived from an object field into two fixed offsets of the
 *   object.
 * summary:
 *   The function reads a 16-bit value from offset 0x2a of the object pointed to by param_1.
 *   It calls menu_item_register with the object's first word and menu_list_build to write 2
 *   bytes to offsets 0x2a and 0xb. It then computes a second 16-bit value based on the
 *   original field (0xc if zero, the value if less than 0xc, or value minus 0xc if greater)
 *   and writes it to offset 0xb. The callees menu_item_register and menu_list_build are
 *   unnamed, so the specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_with_dynamic_item(int *param_1)

{
  ushort uVar1;
  uint32_t uVar2;
  short *psVar3;
  uintptr_t sp;
  short sStack_c;
  short sStack_a;
  
  uVar2 = menu_item_register(*param_1);
  psVar3 = (short *)((int)param_1 + 0x2a);
  menu_list_build((void *)uVar2,psVar3,2,0);
  uVar2 = menu_item_register(*param_1);
  menu_list_build((void *)uVar2,(void *)(param_1 + 0xb),2,0);
  uVar1 = *(ushort *)((int)param_1 + 0x2a);
  if (uVar1 == 0) {
    sStack_c = 0xc;
    uVar2 = menu_item_register(*param_1);
    psVar3 = &sStack_c;
  }
  else if (uVar1 < 0xc) {
    uVar2 = menu_item_register(*param_1);
  }
  else if (uVar1 == 0xc) {
    uVar2 = menu_item_register(*param_1);
  }
  else {
    sStack_a = uVar1 - 0xc;
    uVar2 = menu_item_register(*param_1);
    psVar3 = &sStack_a;
  }
  menu_list_build((void *)uVar2,psVar3,2,0);
  uVar2 = menu_item_register(*param_1);
  menu_list_build((void *)uVar2,(void *)(param_1 + 0xb),2,0);
  return;
}
