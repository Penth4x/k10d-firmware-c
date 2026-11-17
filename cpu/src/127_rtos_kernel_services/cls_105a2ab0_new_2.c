/* @k10d cls_105a2ab0_new_2 @ 0x1045948c
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105a2ab0; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2ab0 (vtable 0x105a2ab0, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105a2ab0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * cls_105a2ab0_new_2(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) || (param_1 = (int *)heap_alloc((void *)0xc), param_1 != (int *)0x0)) {
    param_1[2] = (int)&DAT_105a2ab0/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    create_message_box_104594ea(param_1,param_2);
  }
  return param_1;
}
