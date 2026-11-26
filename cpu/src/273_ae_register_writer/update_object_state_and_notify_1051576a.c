/* @k10d update_object_state_and_notify_1051576a @ 0x1051576a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Updates state fields in a struct based on a flag, calls a virtual method if needed, and
 *   notifies a linked object.
 * summary:
 *   The function checks a byte at offset 0x29 in the object pointed to by param_2. If zero,
 *   it sets offset 0x10 to 0xa00009 and offset 0x8 to param_1+4. Otherwise, it invokes a
 *   virtual method (slot 17) on an object at offset 0x8d4, passing a boolean derived from a
 *   lookup, then sets offset 0x10 to 0xa00005 and offset 0x8 to param_1+4. It stores a
 *   value from offset 0x7ec (or 0) into offset 0xc, sets offset 0x14 to param_2, and
 *   finally calls reg_framework_send with a pointer derived from param_1+0x48.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_state_and_notify_1051576a(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  if (*(char *)((int)param_2 + 0x29) == '\0') {
    *(uint32_t *)((int)param_2 + 0x10) = 0xa00009;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = 0;
  }
  else {
    (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[21].fn)
              ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[21].adj + (int)param_2,
               *(short *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2)
               == 1);
    *(uint32_t *)((int)param_2 + 0x10) = 0xa00005;
    *(int *)((int)param_2 + 8) = param_1 + 4;
    uVar1 = *(uint32_t *)((int)param_2 + 0x7ec);
  }
  *(uint32_t *)((int)param_2 + 0xc) = uVar1;
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x48) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
