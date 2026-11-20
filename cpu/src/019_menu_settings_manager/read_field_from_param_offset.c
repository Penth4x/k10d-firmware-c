/* @k10d read_field_from_param_offset @ 0x1036bb18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs memory operations on a fixed SDRAM buffer and returns a value from param_1+8.
 * summary:
 *   The function calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and size
 *   0x20, then calls init_object_with_two_ids_104c46ce with a global and param_1. It
 *   subsequently calls eventflag_wai_flg with the same SDRAM address, size, NULL, and a ROM
 *   constant, followed by another call to eventflag_clr_flg. Finally, it returns the 32-bit
 *   value located at offset 8 of param_1. The specific roles of the callees are unknown,
 *   but the mechanical behavior is a sequence of buffer operations and a field extraction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_field_from_param_offset(void *param_1)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x20));
  init_object_with_two_ids_104c46ce(_DAT_8000439c/*SDRAM*/,param_1);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x20,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x20));
  return *(uint32_t *)((int)param_1 + 8);
}
