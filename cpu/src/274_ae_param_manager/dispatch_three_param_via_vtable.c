/* @k10d dispatch_three_param_via_vtable @ 0x1051639e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of three helper functions based on param_3 and invokes a virtual method on
 *   an object at param_2+0x8d4 with the helper's return value.
 * summary:
 *   The function branches on param_3 (1, 2, or 3) to call read_field_at_offset_0x78,
 *   read_field_at_offset_248, or read_field_at_offset_0x178 respectively, passing param_1.
 *   It then performs a virtual call on the object pointer stored at param_2+0x8d4, using
 *   vtable offsets 0x24, 0x4c, or 0x54 depending on the branch. The return value is true if
 *   the helper function returned non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_three_param_via_vtable(int param_1,void *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  if (param_3 == 1) {
    iVar1 = read_field_at_offset_0x78(param_1);
    (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x24))
              ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x20) + (int)param_2,iVar1);
    bVar2 = iVar1 == 0;
  }
  else if (param_3 == 2) {
    iVar1 = read_field_at_offset_248(param_1);
    (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x4c))
              ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x48) + (int)param_2,iVar1);
    bVar2 = iVar1 == 0;
  }
  else {
    if (param_3 == 3) {
      iVar1 = read_field_at_offset_0x178(param_1);
      (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x54))
                ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x50) + (int)param_2,iVar1);
    }
    bVar2 = iVar1 == 0;
  }
  return !bVar2;
}
