/* @k10d initialize_object_with_callbacks @ 0x1040a4e2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by setting up callback pointers and calling helper
 *   functions on its fields.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization steps.
 *   It calls eventflag_clr_flg on the field at offset 0x18, then calls
 *   init_object_with_three_params_104c4638 with the field at offset 0x28, the object
 *   pointer, and the constant 3. It then calls eventflag_wai_flg on the field at offset
 *   0x18 with arguments 4, NULL, and a global data pointer. Finally, it calls
 *   eventflag_clr_flg again on the field at offset 0x18 and returns the value stored at
 *   offset 0x44 of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_object_with_callbacks(void *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)((int)param_1 + 0x18);
  eventflag_clr_flg(puVar1,4);
  init_object_with_three_params_104c4638(*(int *)((int)param_1 + 0x28),(int)param_1,3);
  eventflag_wai_flg(puVar1,4,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,4);
  return *(uint32_t *)((int)param_1 + 0x44);
}
