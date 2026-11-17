/* @k10d call_virtual_slot_2_with_offset @ 0x1050157e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 of an object pointed to by param_1, passing a pointer offset by
 *   0x11.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the vtable pointer
 *   at offset 0x14 of the object in param_1, retrieves the function pointer for slot 2
 *   (offset 0x10 in the vtable), and calls it with the object pointer adjusted by the this-
 *   adjustment value stored at offset 0x10 (0x14 - 4). The return value of the virtual call
 *   is returned directly. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_2_with_offset(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x1045365a/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
  return uVar1;
}
