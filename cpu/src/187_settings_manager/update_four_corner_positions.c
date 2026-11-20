/* @k10d update_four_corner_positions @ 0x1048cd80
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper four times to update position fields at the corners of a rectangular
 *   region defined by the object's fields.
 * summary:
 *   The function checks that two fields (param_1+2 and param_1[0x16]) are non-zero before
 *   proceeding. It then calls fill_bayer_pattern_region four times, passing combinations of
 *   the object's fields (indices 0, 1, 0x13, 0x14, 0x16) as arguments. The arguments
 *   include computed values like (field1 + field0x14 - field0x16) and (field0 + field0x13 -
 *   field0x16), suggesting it is calculating and setting coordinates for the four corners
 *   of a rectangle or region. The object is a 0x30-byte class instance, and this is virtual
 *   slot 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_four_corner_positions(cls_105b3cfc *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStackY_c [2];
  
  puVar6 = auStackY_c;
  if ((param_1->field_0x4 != 0) && (param_1->field_0x2c != 0)) {
    fill_bayer_pattern_region((int)param_1,(uint)param_1->field_0x0,(uint)param_1->field_0x2,
                 (uint)param_1->field_0x26,param_1->field_0x2c);
    uVar2 = param_1->field_0x2;
    uVar3 = param_1->field_0x28;
    uVar4 = param_1->field_0x2c;
    uVar5 = param_1->field_0x26;
    uVar1 = param_1->field_0x0;
    *(ushort *)(puVar6 + 2) = uVar4;
    fill_bayer_pattern_region((int)param_1,(uint)uVar1,((uint)uVar2 + (uint)uVar3) - (uint)uVar4 & 0xffff,
                 (uint)uVar5,*(ushort *)(puVar6 + 2));
    uVar2 = param_1->field_0x2;
    uVar3 = param_1->field_0x2c;
    uVar1 = param_1->field_0x0;
    *(ushort *)(puVar6 + 2) = param_1->field_0x28;
    fill_bayer_pattern_region((int)param_1,(uint)uVar1,(uint)uVar2,(uint)uVar3,*(ushort *)(puVar6 + 2));
    uVar2 = param_1->field_0x26;
    uVar3 = param_1->field_0x2c;
    uVar4 = param_1->field_0x2;
    uVar1 = param_1->field_0x0;
    *(ushort *)(puVar6 + 2) = param_1->field_0x28;
    fill_bayer_pattern_region((int)param_1,((uint)uVar1 + (uint)uVar2) - (uint)uVar3 & 0xffff,(uint)uVar4,
                 (uint)uVar3,*(ushort *)(puVar6 + 2));
  }
  return;
}
