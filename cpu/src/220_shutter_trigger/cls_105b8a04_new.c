/* @k10d cls_105b8a04_new @ 0x104b761c
 * name: verified (structural evidence: heap_alloc(0x874) when NULL; stores vtable 0x105b8a04; returns param_1)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8a04 (vtable 0x105b8a04, 0x874 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x874) when NULL; stores vtable 0x105b8a04; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b8a04_new(uint32_t *param_1)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x874), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x105b8a04/*ROM*/;
    cls_105a2af8_new(param_1 + 1);
    param_1[3] = 0;
    alloc_and_zero_struct_1046c686(param_1 + 4);
    param_1[0x21b] = 0;
    param_1[0x21c] = 0;
    iVar1 = get_or_create_singleton_object_1046c502();
    param_1[3] = *(uint32_t *)(iVar1 + 4);
    wait_flg_obj(param_1 + 1,0);
  }
  return param_1;
}
