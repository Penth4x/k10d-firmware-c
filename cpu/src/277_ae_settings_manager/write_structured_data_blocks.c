/* @k10d write_structured_data_blocks @ 0x1051d870
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of 4-byte values and three 0x80-byte blocks to a target object via
 *   helper functions.
 * summary:
 *   The function takes a pointer to a structure, extracts a base pointer from offset 8, and
 *   calls copy_structured_field_array 12 times with incrementing offsets (0xc to 0x4c) and
 *   varying control parameters. It then calls copy_rgb_triplets_from_struct three times
 *   with offsets 0x54, 0xd4, and 0x154, each writing 0x80 bytes. The specific role of the
 *   target object and the helper functions is not determinable from the provided pseudocode
 *   and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_structured_data_blocks(void *param_1)

{
  void *pvVar1;
  uintptr_t sp;
  int *piVar2;
  
  piVar2 = (int *)&stack0xffffffec;
  copy_structured_field_array(*(void **)((int)param_1 + 8),0,(void *)((int)param_1 + 0xc),4,0);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 0;
  copy_structured_field_array(pvVar1,1,(void *)((int)param_1 + 0x14),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 0;
  copy_structured_field_array(pvVar1,2,(void *)((int)param_1 + 0x1c),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 1;
  copy_structured_field_array(pvVar1,0,(void *)((int)param_1 + 0x24),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 1;
  copy_structured_field_array(pvVar1,1,(void *)((int)param_1 + 0x2c),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 1;
  copy_structured_field_array(pvVar1,2,(void *)((int)param_1 + 0x34),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 2;
  copy_structured_field_array(pvVar1,0,(void *)((int)param_1 + 0x3c),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 2;
  copy_structured_field_array(pvVar1,1,(void *)((int)param_1 + 0x44),4,*piVar2);
  pvVar1 = *(void **)((int)param_1 + 8);
  *piVar2 = 2;
  copy_structured_field_array(pvVar1,2,(void *)((int)param_1 + 0x4c),4,*piVar2);
  copy_rgb_triplets_from_struct(*(void **)((int)param_1 + 8),(void *)((int)param_1 + 0x54),0x80,0);
  copy_rgb_triplets_from_struct(*(void **)((int)param_1 + 8),(void *)((int)param_1 + 0xd4),0x80,1);
  copy_rgb_triplets_from_struct(*(void **)((int)param_1 + 8),(void *)((int)param_1 + 0x154),0x80,2);
  return;
}
