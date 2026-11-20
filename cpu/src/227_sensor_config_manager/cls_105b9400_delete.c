/* @k10d cls_105b9400_delete @ 0x104c24f6
 * name: verified (structural evidence: stores vtable 0x105b9400 to *this; heap_free(this) under (param_2 & 1))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9400 (vtable 0x105b9400): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9400 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9400_delete(cls_105b9400 *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t local_14 [8];
  
  puVar1 = (uint32_t *)local_14;
  if (param_1 != (cls_105b9400 *)0x0) {
    param_1->field_0x1d8 = (uintptr_t)(&DAT_105b9400/*ROM*/);
    free_heap_if_flag_set_1045c56c(&param_1->field_0x1cc,2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    free_heap_if_flag_set_1045c56c(&param_1->field_0x20,2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
