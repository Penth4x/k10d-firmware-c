/* @k10d allocate_two_object_pair @ 0x104917a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_two_object_pair(uint32_t *param_1)

{
  cls_105b4160 *pcVar1;
  cls_105b4130 *pcVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (cls_105b4160 *)heap_alloc((void *)0x1c);
    if (pcVar1 == (cls_105b4160 *)0x0) {
      *param_1 = 0;
    }
    else {
      cls_105b4160_new(pcVar1);
      *param_1 = (uint32_t)(uintptr_t)pcVar1;
    }
    pcVar2 = (cls_105b4130 *)heap_alloc((void *)0x1c);
    if (pcVar2 == (cls_105b4130 *)0x0) {
      pcVar2 = (cls_105b4130 *)0x0;
    }
    else {
      cls_105b4130_new(pcVar2);
    }
    param_1[1] = (uint32_t)(uintptr_t)pcVar2;
  }
  return param_1;
}
