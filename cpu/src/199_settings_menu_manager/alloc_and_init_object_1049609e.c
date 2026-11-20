/* @k10d alloc_and_init_object_1049609e @ 0x1049609e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b4ad4 * alloc_and_init_object_1049609e(uint32_t param_x0)

{
  cls_105b4ad4 *pcVar1;
  
  pcVar1 = (cls_105b4ad4 *)heap_alloc((void *)0x4c);
  if (pcVar1 == (cls_105b4ad4 *)0x0) {
    pcVar1 = (cls_105b4ad4 *)0x0;
  }
  else {
    cls_105b4ad4_new(pcVar1);
  }
  return pcVar1;
}
