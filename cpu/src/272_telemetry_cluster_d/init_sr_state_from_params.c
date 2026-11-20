/* @k10d init_sr_state_from_params @ 0x10511bc2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Initializes a Shake Reduction state object by reading SR-related parameters and storing
 *   computed values.
 * summary:
 *   Allocates a cls_1059e05c object on the stack. Reads two bytes from offsets 0x53 and
 *   0x52 of a parameter block (param_1 + 0x2ac). Calls lookup_table_entry and
 *   lookup_table_value_minus_offset with these bytes to compute values stored at
 *   param_1+300 and param_1+0x130. Finally calls virtual slot 1 of the object with argument
 *   2. The repeated use of 'SR' offsets and the specific class structure suggest
 *   initialization of Shake Reduction (sensor-shift) state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_sr_state_from_params(int param_1)

{
  byte bVar2;
  byte bVar3;
  uint32_t uVar1;
  int iVar4;
  uintptr_t sp;
  cls_1059e05c cStack_c;
  
  cls_1059e05c_new(&cStack_c);
  iVar4 = param_1 + 0x2ac;
  bVar2 = settings_getter(iVar4,0x53);
  bVar3 = settings_getter(iVar4,0x52);
  uVar1 = lookup_table_entry(&cStack_c,(uint)bVar2,(uint)bVar3);
  *(uint32_t *)(param_1 + 300) = uVar1;
  bVar2 = settings_getter(iVar4,0x53);
  bVar3 = settings_getter(iVar4,0x52);
  iVar4 = lookup_table_value_minus_offset(&cStack_c,(uint)bVar2,(uint)bVar3);
  *(int *)(param_1 + 0x130) = iVar4;
  virtual_destructor_free_104266ce(&cStack_c,2);
  return;
}
