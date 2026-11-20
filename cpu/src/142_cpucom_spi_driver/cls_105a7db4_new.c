/* @k10d cls_105a7db4_new @ 0x10466990
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a7db4; returns param_1)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7db4 (vtable 0x105a7db4, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a7db4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e380 * cls_105a7db4_new(cls_105a7db4 *param_1)

{
  if ((param_1 != (cls_105a7db4 *)0x0) ||
     (param_1 = (cls_105a7db4 *)heap_alloc((void *)0x1c), (cls_1059e380 *)param_1 != (cls_1059e380 *)0x0)) {
    cls_1059e380_new((cls_1059e380 *)param_1);
    ((cls_1059e380 *)param_1)->field_0x0 = (uint32_t)&DAT_105a7db4/*ROM*/;
    ((cls_1059e380 *)param_1)->field1_0x4 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field2_0x8 = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field3_0xc = (uint32_t)(void *)0x0;
    ((cls_1059e380 *)param_1)->field4_0x10 = (uint32_t)(void *)0x0;
    cls_105a2be0_new((cls_105a2be0 *)&((cls_1059e380 *)param_1)->field5_0x14);
  }
  return (cls_1059e380 *)param_1;
}
