/* @k10d extract_field_from_byte_array @ 0x10460770
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a numeric field from a byte array based on a selector index.
 * summary:
 *   The function takes a pointer to a byte array and a selector (param_2). Depending on the
 *   selector, it reads one or two bytes from specific offsets (4-11) and either returns
 *   them directly, extracts bit fields (e.g., bits 5-7 or 0-4 of byte 10), or passes them
 *   to helper functions pack_two_byte_value_10496952 and pack_bytes_into_uint32. It acts as
 *   a getter for various fields within a 12-byte structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_field_from_byte_array(void *param_1,uint32_t param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar2 = (ushort)*(byte *)((int)param_1 + 5);
    uVar3 = (ushort)*(byte *)((int)param_1 + 4);
    goto LAB_104607ce;
  case 1:
    uVar2 = (ushort)*(byte *)((int)param_1 + 7);
    uVar3 = (ushort)*(byte *)((int)param_1 + 6);
    goto LAB_104607ce;
  case 2:
    uVar1 = pack_bytes_into_uint32(param_1,(uint)*(byte *)((int)param_1 + 7),(uint)*(byte *)((int)param_1 + 6)
                         ,(uint)*(byte *)((int)param_1 + 5),*(byte *)((int)param_1 + 4));
    break;
  case 3:
    uVar2 = (ushort)*(byte *)((int)param_1 + 9);
    uVar3 = (ushort)*(byte *)((int)param_1 + 8);
LAB_104607ce:
    uVar2 = pack_two_byte_value_10496952(param_1,uVar2,uVar3);
    uVar1 = (uint)uVar2;
    break;
  case 4:
    uVar1 = (int)(*(byte *)((int)param_1 + 10) & 0xe0) >> 5;
    break;
  case 5:
    uVar1 = *(byte *)((int)param_1 + 10) & 0x1f;
    break;
  case 6:
    uVar1 = (uint)*(byte *)((int)param_1 + 10);
    break;
  case 7:
    uVar1 = (uint)*(byte *)((int)param_1 + 0xb);
  }
  return uVar1;
}
