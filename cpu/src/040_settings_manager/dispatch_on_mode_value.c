/* @k10d dispatch_on_mode_value @ 0x10397502
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value at offset 8 of param_1 and dispatches to one of three handlers based on
 *   whether it is 1, 2, or other.
 * summary:
 *   Calls an indirect function at 0x1039c3fc with param_1+8 to obtain a mode/state value.
 *   If the value is 1, calls get_or_init_singleton_1039201c; if 2, calls
 *   init_singleton_object_1039291c; otherwise (including 0 or other values) calls
 *   get_or_init_global_object_103964f8. Returns the result of the selected handler. The
 *   callees are unnamed, so the specific subsystem role is not determinable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_mode_value(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x1039c3fc/*ROM*/)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = get_or_init_singleton_1039201c();
      return uVar2;
    }
    if (iVar1 == 2) {
      uVar2 = init_singleton_object_1039291c();
      return uVar2;
    }
  }
  uVar2 = get_or_init_global_object_103964f8();
  return uVar2;
}
