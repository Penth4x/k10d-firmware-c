/* @k10d copy_four_words_from_source_10393586 @ 0x10393586
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads four 32-bit words from a source via a getter and writes them into consecutive
 *   fields of a destination structure.
 * summary:
 *   The function calls read_byte_from_struct_offset_104d5308 four times with indices 0, 3,
 *   1, and 2 on a handle derived from param_2, then stores each result into param_1+8, +12,
 *   +16, and +20 via set_object_field_and_notify. The non-sequential index order (0,3,1,2)
 *   suggests a specific field mapping rather than a simple linear copy. The roles of the
 *   getter and setter callees are not established, so the data domain is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_from_source_10393586(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  uVar1 = (*(code *)0x104d6594/*ROM*/)(param_2);
  pvVar3 = (void *)((int)param_1 + 8);
  uVar2 = read_byte_from_struct_offset_104d5308(uVar1,0);
  set_object_field_and_notify(pvVar3,0,uVar2);
  uVar2 = read_byte_from_struct_offset_104d5308(uVar1,3);
  set_object_field_and_notify(pvVar3,1,uVar2);
  uVar2 = read_byte_from_struct_offset_104d5308(uVar1,1);
  set_object_field_and_notify(pvVar3,2,uVar2);
  uVar1 = read_byte_from_struct_offset_104d5308(uVar1,2);
  set_object_field_and_notify(pvVar3,3,uVar1);
  return;
}
