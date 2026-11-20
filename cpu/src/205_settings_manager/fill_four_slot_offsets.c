/* @k10d fill_four_slot_offsets @ 0x104a10e2
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes computed 32-bit values into offset 0x30 of four objects obtained via
 *   read_struct_field_by_index_104a2a78.
 * summary:
 *   Calls read_struct_field_by_index_104a2a78(param_2, idx) for indices 0,1,3,2 to obtain
 *   four object pointers, then stores a value at each object's +0x30. The values are
 *   derived from *param_1, a field at param_1[0x4e]+8, a virtual call
 *   sum_two_helper_results(param_1+0x3b), and the +0x18 fields of the previously fetched
 *   objects (with a +3 & 0xfffffffc alignment). No camera-specific subsystem is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_four_slot_offsets(int *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = read_struct_field_by_index_104a2a78(param_2,0);
  *(int *)(iVar1 + 0x30) = *param_1;
  iVar2 = read_struct_field_by_index_104a2a78(param_2,1);
  iVar4 = *(int *)(param_1[0x4e] + 8);
  iVar3 = sum_two_helper_results((cls_105b6aa0 *)(param_1 + 0x3b));
  *(int *)(iVar2 + 0x30) = iVar4 + iVar3;
  iVar2 = read_struct_field_by_index_104a2a78(param_2,3);
  *(uint *)(iVar2 + 0x30) = *param_1 + (*(int *)(iVar1 + 0x18) + 3U & 0xfffffffc);
  iVar1 = read_struct_field_by_index_104a2a78(param_2,2);
  *(uint *)(iVar1 + 0x30) = *(int *)(iVar2 + 0x30) + (*(int *)(iVar2 + 0x18) + 3U & 0xfffffffc);
  return;
}
