/* @k10d allocate_and_construct_object @ 0x10495dc6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b44b4 * allocate_and_construct_object(uint32_t param_x0)

{
  cls_105b44b4 *pcVar1;
  
  pcVar1 = (cls_105b44b4 *)heap_alloc((void *)0x68);
  if (pcVar1 == (cls_105b44b4 *)0x0) {
    pcVar1 = (cls_105b44b4 *)0x0;
  }
  else {
    cls_105b44b4_new(pcVar1);
  }
  return pcVar1;
}
