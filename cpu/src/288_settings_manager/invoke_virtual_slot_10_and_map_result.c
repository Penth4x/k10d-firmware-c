/* @k10d invoke_virtual_slot_10_and_map_result @ 0x1052c984
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 10 of an object and maps the result to 0x2001 or 0x2019.
 * summary:
 *   Dereferences param_1+4 to get an object pointer, then invokes virtual slot 10 (offset
 *   0x6c) with a this-adjustment from offset 0x68. If the virtual call returns 1, the
 *   function returns 0x2001; otherwise it returns 0x2019. No other side effects or memory
 *   writes are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_10_and_map_result(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)((int)param_1 + 4);
  iVar2 = (**(code **)(iVar2 + 0x6c))
                    ((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x68));
  if (iVar2 == 1) {
    uVar1 = 0x2001;
  }
  else {
    uVar1 = 0x2019;
  }
  return uVar1;
}
