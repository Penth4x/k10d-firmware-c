/* @k10d init_object_and_call_virtual @ 0x105156fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object struct with specific fields and calls a virtual method on a
 *   related object.
 * summary:
 *   The function first performs a virtual call on an object pointed to by *(param_2 +
 *   0x8d4), passing a boolean derived from a lookup in a table at *(param_2 + 0x20). It
 *   then initializes several fields of the object at param_2: sets a constant at offset
 *   0x10, stores param_1+4 at offset 8, copies a value from offset 0x7e8 to 0xc, and sets a
 *   self-pointer at 0x14. Finally, it calls reg_framework_send with a value derived from
 *   param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_call_virtual(int param_1,void *param_2)

{
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[20].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[20].adj + (int)param_2,
             *(short *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2) ==
             1);
  *(uint32_t *)((int)param_2 + 0x10) = 0xa0000a;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x7e8);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x48) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
