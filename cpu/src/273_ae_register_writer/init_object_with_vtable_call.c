/* @k10d init_object_with_vtable_call @ 0x10515a9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object struct by calling a virtual method and setting several fields
 *   from a source pointer.
 * summary:
 *   The function first performs a virtual call on an object pointed to by *(param_2 +
 *   0x8d4), using slot offset 0xf4. It then writes a constant 0xc00003 to param_2+0x10,
 *   sets param_2+8 to param_1+4, copies a value from param_2+0x800 to param_2+0xc, and sets
 *   param_2+0x14 to param_2 itself. Finally, it calls reg_framework_send with an argument
 *   derived from param_1+0x40. The role of the specific subsystem is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_vtable_call(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0xf4))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0xf0) + (int)param_2);
  *(uint32_t *)((int)param_2 + 0x10) = 0xc00003;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x800);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x40) + 8);
  return;
}
