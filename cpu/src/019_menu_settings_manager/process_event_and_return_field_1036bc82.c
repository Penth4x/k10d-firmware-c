/* @k10d process_event_and_return_field_1036bc82 @ 0x1036bc82
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x200-byte buffer, processes an event via a helper, finalizes the buffer,
 *   and returns a field from the input structure.
 * summary:
 *   The function calls eventflag_clr_flg to initialize a buffer at 0x80018088 with size
 *   0x200. It then calls init_object_with_two_ids_104c478a with the input parameters,
 *   followed by eventflag_wai_flg which appears to finalize or process the buffer using a
 *   constant pointer. Finally, it re-initializes the buffer and returns the value at offset
 *   8 of the first parameter. The specific roles of the callees are unknown, but the
 *   pattern suggests a setup-process-teardown sequence for a fixed-size data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_event_and_return_field_1036bc82(void *param_1,uint32_t param_2,void *param_3)

{
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x200));
  init_object_with_two_ids_104c478a(_DAT_8000439c/*SDRAM*/,(int)param_1,((uint16_t)param_2),param_3);
  eventflag_wai_flg((uint32_t *)0x80018088/*SDRAM*/,0x200,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80018088/*SDRAM*/),(uint)(0x200));
  return *(uint32_t *)((int)param_1 + 8);
}
