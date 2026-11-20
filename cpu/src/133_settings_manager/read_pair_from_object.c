/* @k10d read_pair_from_object @ 0x1045fb20
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a 16-bit value from one of two byte pairs in an object based on an index and
 *   passes it to a helper.
 * summary:
 *   The function branches on param_2: if 0 it reads bytes at offsets 4 and 5 of param_1, if
 *   1 it reads bytes at offsets 6 and 7, otherwise it returns 0. The high and low bytes are
 *   passed to pack_two_byte_value_10496952 along with the object pointer, and the 16-bit
 *   result is returned. It is virtual slot 2 of a small 8-byte class, suggesting it exposes
 *   one of two stored 16-bit fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_pair_from_object(cls_105a6cb4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = 0;
  if (param_2 == 0) {
    bVar1 = param_1->field_0x5;
    bVar2 = param_1->field_0x4;
  }
  else {
    if (param_2 != 1) goto LAB_1045fb56;
    bVar1 = param_1->field_0x7;
    bVar2 = param_1->field_0x6;
  }
  uVar3 = pack_two_byte_value_10496952(param_1,(ushort)bVar1,(ushort)bVar2);
LAB_1045fb56:
  return (int)(short)uVar3;
}
