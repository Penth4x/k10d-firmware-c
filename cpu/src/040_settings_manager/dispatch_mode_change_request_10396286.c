/* @k10d dispatch_mode_change_request_10396286 @ 0x10396286
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a mode index (1-3) to a specific sub-operation and invokes a handler function.
 * summary:
 *   The function takes a mode selector (param_2) and a context pointer (param_3). It first
 *   calls an unknown function at 0x104d6594 with the context. If the mode is non-zero, it
 *   maps the value 1, 2, or 3 to arguments 3, 1, or 2 respectively, and calls
 *   read_byte_from_struct_offset_104d5308 with the result of the first call and the mapped
 *   argument. It returns 0 if the handler returns 0, otherwise 1. The specific camera
 *   subsystem (e.g., exposure mode, AF mode) is not determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_change_request_10396286(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 1;
  uVar1 = (*(code *)0x104d6594/*ROM*/)(param_3);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar2 = read_byte_from_struct_offset_104d5308(uVar1,3);
    }
    else if (param_2 == 2) {
      iVar2 = read_byte_from_struct_offset_104d5308(uVar1,1);
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      iVar2 = read_byte_from_struct_offset_104d5308(uVar1,2);
    }
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
