/* @k10d read_field_at_offset_eight_1036ba06 @ 0x1036ba06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads and returns the 32-bit value at offset 8 of the object pointed to by param_1.
 * summary:
 *   The function performs a sequence of calls to eventflag_clr_flg and eventflag_wai_flg
 *   using the fixed SDRAM address 0x80018088 and the constant 4, likely managing a lock or
 *   buffer state. It also calls init_object_with_three_params_104c4638 with param_1 and
 *   param_2. Finally, it dereferences the pointer at param_1 + 8 and returns that value.
 *   The specific roles of the helper functions are unknown, but the primary observable
 *   behavior is the retrieval of a field from the input structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_field_at_offset_eight_1036ba06(void *param_1,uint32_t param_2)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(4));
  init_object_with_three_params_104c4638(_DAT_8000439c/*SDRAM*/,(int)param_1,param_2);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(4));
  return *(uint32_t *)((int)param_1 + 8);
}
