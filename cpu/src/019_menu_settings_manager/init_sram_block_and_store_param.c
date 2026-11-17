/* @k10d init_sram_block_and_store_param @ 0x1036bc26
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x100-byte SDRAM block at 0x80018088 and stores param_1 into a global.
 * summary:
 *   Calls eventflag_clr_flg twice with address 0x80018088 and size 0x100, likely clearing
 *   or initializing the memory region. Calls init_object_with_three_fields_104c475e to
 *   store param_1 into global _DAT_8000439c. Calls eventflag_wai_flg with the SDRAM
 *   address, size, null pointer, and a ROM constant _DAT_105a2af0, possibly copying or
 *   configuring data. Returns the value at param_1 + 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t init_sram_block_and_store_param(void *param_1)

{
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x100);
  init_object_with_three_fields_104c475e(_DAT_8000439c/*SDRAM*/,(int)param_1);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x100,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x100);
  return *(uint32_t *)((int)param_1 + 8);
}
