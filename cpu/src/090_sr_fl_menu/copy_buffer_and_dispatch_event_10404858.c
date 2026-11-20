/* @k10d copy_buffer_and_dispatch_event_10404858 @ 0x10404858
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a fixed global buffer if param_2 is non-zero, then
 *   dispatches a virtual call with a flag.
 * summary:
 *   The function first calls menu_item_register with param_1 to obtain an object pointer.
 *   If param_2 is 0, it immediately invokes a virtual method (slot 2) on the object with
 *   argument 0. If param_2 is non-zero, it copies 16 bytes (4 words) from param_3 to the
 *   global address 0x00000000 (calculated as 0x10 - 0x7ffe31c0), calls
 *   call_helper_and_set_flag_10494b88 with the object, and then invokes the same virtual
 *   method with argument 1. The virtual call idiom `(**(code **)(puVar1[3] + 0xc))`
 *   indicates a call to virtual slot 2 of the object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_buffer_and_dispatch_event_10404858(cls_10598538 *param_1,int param_2,void *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint32_t *)menu_item_register((int)param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    iVar3 = 0x10;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)(iVar3 + -0x7ffe31c0) = *(uint32_t *)(iVar2 + (int)param_3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    call_helper_and_set_flag_10494b88(puVar1);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
