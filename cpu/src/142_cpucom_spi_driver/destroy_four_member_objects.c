/* @k10d destroy_four_member_objects @ 0x10466872
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Destroys the four object pointers stored at offsets 4, 8, 0xc, and 0x10 of the class
 *   instance.
 * summary:
 *   Iterates over four member pointers in the cls_105a7db4 object. For each non-null
 *   pointer, it invokes virtual slot 3 (offset 0x24) and then virtual slot 1 (offset 0xc)
 *   with an argument of 3, before nulling the member pointer. This pattern is consistent
 *   with a cleanup or destructor routine for a container of four sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_four_member_objects(cls_105a7db4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0x4;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0x8;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  piVar1 = (int *)param_1->field_0xc;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0xc;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  piVar1 = (int *)param_1->field_0x10;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0x10;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x10 = (uintptr_t)((void *)0x0);
  return;
}
