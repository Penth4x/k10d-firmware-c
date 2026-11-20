/* @k10d allocate_and_init_buffer_1036bd76 @ 0x1036bd76
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x800-byte buffer, initializes it via a helper, and returns a pointer from
 *   the input structure.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   0x800, likely to allocate or clear memory. It then calls
 *   init_object_with_two_pointers_104c4868 passing the input parameters, followed by
 *   eventflag_wai_flg which appears to perform further initialization or setup on the
 *   allocated block. Finally, it returns the value at offset 8 of the first parameter
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t allocate_and_init_buffer_1036bd76(void *param_1,uint32_t param_2,void *param_3)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x800));
  init_object_with_two_pointers_104c4868(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2,param_3);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x800,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x800));
  return *(uint32_t *)((int)param_1 + 8);
}
