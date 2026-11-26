/* @k10d init_object_with_virtual_call_10515968 @ 0x10515968
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by calling a virtual method and setting several fields
 *   from a source parameter.
 * summary:
 *   The function performs a virtual call on an object pointed to by param_2 using a vtable
 *   entry at offset 0x8d4. It then writes specific values to offsets 0x10, 0x8, 0xc, and
 *   0x14 of the object, copying data from param_1 and the object's own memory. Finally, it
 *   calls reg_framework_send with a value derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_virtual_call_10515968(int param_1,void *param_2)

{
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[27].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[27].adj + (int)param_2);
  *(uint32_t *)((int)param_2 + 0x10) = 0x10f0003;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x830);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x4c) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
