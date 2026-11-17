/* @k10d call_vtable_slot_two @ 0x104810fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Invokes the second virtual method of an object via its vtable pointer.
 * summary:
 *   Reads the vtable pointer from offset 8 of the object passed in param_1. It then calls
 *   the function pointer located at offset 8 of that vtable (virtual slot 2), passing the
 *   object as the first argument. The return value from the callee is returned directly.
 *   This is a standard Cfront virtual call idiom.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_vtable_slot_two(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = call_helper_with_second_field_10480096(*(void **)((int)param_1 + 8));
  return uVar1;
}
