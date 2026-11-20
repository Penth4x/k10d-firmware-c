/* @k10d get_or_create_singleton_object_103d32fc @ 0x103d32fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_or_create_singleton_object_103d32fc(uint32_t param_x0)

{
  if (iRam8001c194 == 0) {
    iRam8001c194 = 1;
    cls_105961e8_new((cls_105961e8 *)0x8001c170/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000f790/*SDRAM*/);
  }
  return 0x8001c170/*SDRAM*/;
}
