/* @k10d init_object_and_check_field @ 0x104340f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x38 and conditionally calls twai_flg_obj based on a
 *   check of offset 0x20.
 * summary:
 *   The function takes a pointer to an object and calls eventflag_clr_flg on the field at
 *   offset 0x38 with argument 4. It then calls execute_cpucom_transaction using the field
 *   at offset 0x20 and the address at offset 4. If the result is non-zero, it calls
 *   twai_flg_obj on the field at offset 0x38 with arguments 4, 0, and _DAT_105a2af0. The
 *   specific roles of the object fields and the callees are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_object_and_check_field(void *param_1)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x38),4);
  iVar1 = execute_cpucom_transaction((void *)(*(uint32_t *)((int)param_1 + 0x20)),(void *)((int)param_1 + 4));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)((int)param_1 + 0x38),4,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return;
}
