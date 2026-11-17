/* @k10d write_two_indexed_values @ 0x10532c8c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from a source at indices 0x10 and 0x11, and writes them to a
 *   destination if associated counts are positive.
 * summary:
 *   The function calls read_byte_from_struct_offset_104a8c54 twice with indices 0x10 and
 *   0x11 to retrieve two byte values. It checks counts via map_mode_index_to_value and
 *   map_mode_index_to_code_10532e66; if positive, it computes a value using
 *   map_index_to_offset_10532eae and writes it via field_setter to an offset derived from
 *   *(param_1 + 0x14) + 0x164. The specific subsystem is not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_indexed_values(int param_1,int param_2)

{
  char cVar2;
  char cVar3;
  int iVar1;
  uint8_t uVar4;
  int iVar5;
  
  cVar2 = read_byte_from_struct_offset_104a8c54(param_2,0x10);
  cVar3 = read_byte_from_struct_offset_104a8c54(param_2,0x11);
  iVar1 = map_mode_index_to_value(param_1);
  if (0 < iVar1) {
    iVar5 = *(int *)(param_1 + 0x14);
    uVar4 = map_index_to_offset_10532eae(param_1,(int)(short)-(short)cVar2);
    field_setter(iVar5 + 0x164,iVar1,uVar4);
  }
  iVar1 = map_mode_index_to_code_10532e66(param_1);
  if (0 < iVar1) {
    iVar5 = *(int *)(param_1 + 0x14);
    uVar4 = map_index_to_offset_10532eae(param_1,(int)cVar3);
    field_setter(iVar5 + 0x164,iVar1,uVar4);
  }
  return;
}
