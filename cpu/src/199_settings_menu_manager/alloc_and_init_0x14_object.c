/* @k10d alloc_and_init_0x14_object @ 0x104960ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1061e4c0 * alloc_and_init_0x14_object(uint32_t param_x0)

{
  cls_1061e4c0 *pcVar1;
  
  pcVar1 = (cls_1061e4c0 *)heap_alloc((void *)0x14);
  if (pcVar1 == (cls_1061e4c0 *)0x0) {
    pcVar1 = (cls_1061e4c0 *)0x0;
  }
  else {
    cls_1061e4c0_new(pcVar1);
  }
  return pcVar1;
}
