/* @k10d irq_dispatch_broadcast32 @ 0x10427e1c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed broadcast_virtual_slot_two)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over 32 object pointers and invokes virtual slot 2 on each non-null object.
 * summary:
 *   The function loops 7 times, processing 4 object pointers per iteration (32 total)
 *   starting at param_1 + 4. For each non-null pointer, it performs a virtual call to slot
 *   2 (offset 0x14) with a this-adjustment derived from the object's vtable. It passes
 *   param_2 and param_3 as the method arguments. No specific camera subsystem is
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void irq_dispatch_broadcast32(cls_1059e430 *param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  int iStack_c;
  
  iStack_c = 7;
  iVar2 = 0;
  do {
    piVar1 = *(int **)((int)&param_1->field_0x4 + iVar2);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    piVar1 = *(int **)((int)&param_1[1].field_0x0 + iVar2);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    piVar1 = *(int **)((int)&param_1[1].field_0x4 + iVar2);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    piVar1 = *(int **)((int)&param_1[2].field_0x0 + iVar2);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    iStack_c = iStack_c + -1;
    iVar2 = iVar2 + 0x10;
  } while (-1 < iStack_c);
  return;
}
