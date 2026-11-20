/* @k10d cls_105b55bc_new @ 0x10498616
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b55bc; returns param_1)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b55bc (vtable 0x105b55bc, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b55bc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b55bc_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x105b55bc/*ROM*/;
    param_1[1] = param_2;
    cls_105a2af8_new((void *)(param_1 + 2));
    cls_105a2bf8_new((void *)(param_1 + 4));
    cls_105a2bf8_new((void *)(param_1 + 6));
    wait_flg_obj(param_1 + 2,0);
    forward_three_args_to_helper_10459edc(param_1 + 4,1,1);
    forward_three_args_to_helper_10459edc(param_1 + 6,1,1);
  }
  return param_1;
}
