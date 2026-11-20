/* @k10d invoke_virtual_slot_with_zero @ 0x104b03a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers then invokes virtual slot 3 of an object with argument 0.
 * summary:
 *   The function first calls get_or_init_sram_buffer_104af136 and
 *   call_three_init_routines_104af1dc. It then loads a pointer from offset 0x10 of the
 *   object in param_1 and performs a virtual call to slot 3 (offset 0x24) with a this-
 *   adjustment from offset 0x20 and a single argument of 0. The specific subsystem is not
 *   identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_with_zero(int *param_1, uint32_t param_x1)

{
  int iVar1;
  
  get_or_init_sram_buffer_104af136();
  call_three_init_routines_104af1dc((uint32_t *)__frv_reg_unset(4));
  iVar1 = *(int *)(*param_1 + 0x10);
  (((vtbl_entry*)(iVar1))[4].fn)(*param_1 + (int)((vtbl_entry*)(iVar1))[4].adj,0);
  return;
}
