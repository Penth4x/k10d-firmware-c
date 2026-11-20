/* @k10d dispatch_three_flagged_actions @ 0x104427fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks three bit-pair conditions on object fields and calls a virtual method plus a
 *   specific handler for each matched pair.
 * summary:
 *   The function reads two 16-bit fields from an object at offsets 0x14 and 0x18. It tests
 *   three distinct combinations of bits in these fields. For each matching combination, it
 *   invokes virtual slot 2 of the object (via dispatch_single_subobj) and then calls one of
 *   three distinct handlers (set_field_at_offset_0x18_to_six,
 *   set_field_at_offset_0x18_to_10, or set_field_at_offset_0x18_to_0xc). The return value
 *   is the result of the last virtual call made, or 0 if no conditions matched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_flagged_actions(cls_105a0d5c *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  uVar1 = *(ushort *)param_1->field_0x18;
  uVar2 = *(ushort *)param_1->field_0x14;
  if (((uVar2 & 0x1000) != 0) && ((uVar1 & 8) != 0)) {
    uVar3 = dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
    set_field_at_offset_0x18_to_six((int)(param_1));
  }
  if (((uVar2 & 0x800) != 0) && ((uVar1 & 4) != 0)) {
    uVar3 = dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
    set_field_at_offset_0x18_to_10((int)(param_1));
  }
  if (((uVar2 & 0x400) != 0) && ((uVar1 & 2) != 0)) {
    uVar3 = dispatch_single_subobj((cls_1059e408 *)&param_1->field_0x8);
    set_field_at_offset_0x18_to_0xc((int)(param_1));
  }
  return uVar3;
}
