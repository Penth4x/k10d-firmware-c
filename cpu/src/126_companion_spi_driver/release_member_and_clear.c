/* @k10d release_member_and_clear @ 0x104402a0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases a member object via virtual calls and nulls the pointer field.
 * summary:
 *   This is virtual slot 4 of cls_105a0adc. It checks if the member pointer at offset 4 is
 *   non-null, then makes two virtual calls on that member (slots 3 and 1) with adjusted
 *   this pointers, and finally sets the member pointer to zero. The virtual calls likely
 *   perform cleanup or release operations on the member object before it is detached from
 *   the parent.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_member_and_clear(cls_105a0adc *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x4 != 0) &&
     (iVar1 = *(int *)(param_1->field_0x4 + 4),
     (((vtbl_entry*)(iVar1))[4].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[4].adj),
     param_1->field_0x4 != 0)) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x4 + *(short *)(iVar1 + 8),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
