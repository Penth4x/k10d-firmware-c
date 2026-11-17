/* @k10d init_struct_and_notify_1036bf0e @ 0x1036bf0e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0xc to 0x4000, calls an SDRAM writer, and forwards parameters to
 *   a helper.
 * summary:
 *   The function writes the constant 0x4000 to the memory location param_1 + 0xc. It then
 *   calls eventflag_clr_flg with a fixed SDRAM address (0x80018088) and the same constant
 *   0x4000. Finally, it calls init_object_with_two_ids_104c4980 passing a global pointer
 *   (_DAT_8000439c) and the original arguments param_1, param_2, and param_3. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_and_notify_1036bf0e(void *param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)((int)param_1 + 0xc) = 0x4000;
  eventflag_clr_flg((void *)0x80018088/*SDRAM*/,0x4000);
  init_object_with_two_ids_104c4980(_DAT_8000439c/*SDRAM*/,param_1,param_2,param_3);
  return;
}
