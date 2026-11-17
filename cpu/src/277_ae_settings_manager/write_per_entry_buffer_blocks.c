/* @k10d write_per_entry_buffer_blocks @ 0x1051d992
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes three 4-byte fields and one 0x80-byte block from a per-entry region into a
 *   destination buffer.
 * summary:
 *   The function computes a per-entry offset (param_2 * 0x18) within param_1 and calls
 *   copy_structured_field_array three times with indices 0, 1, and 2 to copy 4-byte values
 *   from offsets +0xc, +0x14, and +0x1c of the entry into the destination pointed to by
 *   *(param_1+8). It then calls copy_rgb_triplets_from_struct to copy a 0x80-byte block
 *   from param_1+0x54+param_2*0x80. The callees are unnamed, so the specific data semantics
 *   (e.g., camera subsystem) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_per_entry_buffer_blocks(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  uintptr_t sp;
  int *piVar3;
  
  piVar3 = (int *)&stack0xffffffec;
  pvVar2 = (void *)(param_1 + 0xc + param_2 * 0x18);
  copy_structured_field_array(*(void **)(param_1 + 8),0,pvVar2,4,param_2);
  pvVar1 = *(void **)(param_1 + 8);
  *piVar3 = param_2;
  copy_structured_field_array(pvVar1,1,(void *)((int)pvVar2 + 8),4,*piVar3);
  pvVar1 = *(void **)(param_1 + 8);
  *piVar3 = param_2;
  copy_structured_field_array(pvVar1,2,(void *)((int)pvVar2 + 0x10),4,*piVar3);
  copy_rgb_triplets_from_struct(*(void **)(param_1 + 8),(void *)(param_1 + 0x54 + param_2 * 0x80),0x80,param_2);
  return;
}
