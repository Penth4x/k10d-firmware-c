/* @k10d debug_mode_wrapper @ 0x104f2456
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed query_debug_mode_flag)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Retrieves a boolean flag from a singleton object after initializing a specific sub-
 *   component.
 * summary:
 *   Calls sr_driver_singleton to obtain a pointer to a singleton or context object. It then
 *   calls module_array_getter on the second field of that object with an argument of 3,
 *   likely initializing or resetting a specific state. Finally, it calls
 *   return_sram_address_10435ae4 to get another object and debug_flag_reader_0x1c to read a
 *   boolean value from it, which is returned. The caller context suggests this checks a
 *   debug or system parameter flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* DEBUG_MODE query wrapper: singleton->array[3]->transform 0x10435ae4->reader; RETURN = reader's
   return. Gate behind all 8 debug gate sites. */

uint debug_mode_wrapper(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),3);
  iVar1 = return_sram_address_10435ae4();
  bVar2 = debug_flag_reader_0x1c(iVar1);
  return (uint)bVar2;
}
