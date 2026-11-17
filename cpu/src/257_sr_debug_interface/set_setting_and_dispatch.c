/* @k10d set_setting_and_dispatch @ 0x104f2de2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Writes a setting value if enabled, then calls a handler with the clamped value.
 * summary:
 *   Checks a flag at offset 0x48 of the object. If set, calls setting_set to store param_2
 *   into setting ID 0xa0. It then calls initialize_singleton_object_1045d6a0 to get a
 *   pointer, and invokes a function at 0x104630b2 with a field from that pointer and a
 *   clamped version of param_2 (0-3). Returns the result of that final call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_setting_and_dispatch(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar1 = 0;
  }
  else {
    setting_set(*(int *)(param_1 + 0xc),0xa0,param_2);
    uVar1 = 0;
    iVar2 = initialize_singleton_object_1045d6a0();
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else if (param_2 == 1) {
      uVar1 = 1;
    }
    else if (param_2 == 2) {
      uVar1 = 2;
    }
    else if (param_2 == 3) {
      uVar1 = 3;
    }
    uVar1 = (*(code *)0x104630b2/*ROM*/)(*(uint32_t *)(iVar2 + 0x28),uVar1);
  }
  return uVar1;
}
