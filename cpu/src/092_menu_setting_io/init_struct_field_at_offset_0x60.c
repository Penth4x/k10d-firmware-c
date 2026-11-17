/* @k10d init_struct_field_at_offset_0x60 @ 0x1040ad66
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes a field at offset 0x60 of the object pointed to by param_1 by calling a
 *   helper with a zero value.
 * summary:
 *   The function sets a local variable to 0 and passes it, along with a pointer to param_1
 *   + 0x60 and a global data pointer, to eventflag_wai_flg. It appears to be a small
 *   wrapper that initializes or resets a specific member of a larger structure. The exact
 *   nature of the structure and the helper's behavior are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_struct_field_at_offset_0x60(int param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 0x60),2,&uStack_c,_DAT_105a2af0/*ROM*/);
  return;
}
