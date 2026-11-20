/* @k10d init_object_with_vcall_and_state @ 0x10515a22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by setting specific fields and invoking a virtual
 *   method with a computed boolean flag.
 * summary:
 *   The function performs a virtual call on an object pointed to by param_2, using a vtable
 *   pointer at offset 0x8d4. It passes a boolean derived from a byte at param_1+0x29c and a
 *   bit check on a value at param_2+0x20/0x24. It then writes constants and pointers to
 *   offsets 0x10, 0x8, 0xc, and 0x14 of param_2, and finally calls reg_framework_send with
 *   an argument derived from param_1+0x3c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_vcall_and_state(int param_1,void *param_2)

{
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[29].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[29].adj + (int)param_2,
             *(char *)(param_1 + 0x29c) != '\0' &&
             (*(ushort *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2)
             & 1) != 0);
  *(uint32_t *)((int)param_2 + 0x10) = 0x700003;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x7fc);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x3c) + 8);
  return;
}
