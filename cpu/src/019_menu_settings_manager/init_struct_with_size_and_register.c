/* @k10d init_struct_with_size_and_register @ 0x1036be3a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a size field to 0x1000, calls an init helper with a fixed address, and registers
 *   the struct.
 * summary:
 *   The function writes the constant 0x1000 to offset 0xc of the structure pointed to by
 *   param_1. It then calls eventflag_clr_flg with the fixed address 0x80018088 and the
 *   value 0x1000. Finally, it calls init_object_with_flag_and_callback passing the global
 *   _DAT_8000439c and the param_1 structure. The specific roles of the callees and the
 *   global are unknown, but the mechanical operation is initializing a structure field and
 *   registering it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_with_size_and_register(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0xc) = 0x1000;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x1000);
  init_object_with_flag_and_callback(_DAT_8000439c/*SDRAM*/,param_1);
  return;
}
