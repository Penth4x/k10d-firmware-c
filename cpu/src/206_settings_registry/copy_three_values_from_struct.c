/* @k10d copy_three_values_from_struct @ 0x104a697c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads three values from a struct at offsets 0x44, 0x45, and 0x46 and writes them to
 *   indices 0, 1, and 2 of a destination array.
 * summary:
 *   The function calls settings_getter three times with the same base pointer (param_1 +
 *   0x44) but different second arguments (0xb2, 0xb3, 99). The results are passed to
 *   write_byte_to_struct_offset_104a8be2 with indices 0, 1, and 2 respectively. This
 *   pattern suggests extracting three consecutive or related fields from a structure and
 *   storing them in an array or list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_three_values_from_struct(int param_1,int param_2)

{
  uint8_t uVar1;
  
  uVar1 = settings_getter(*(int *)(param_1 + 0x44),0xb2);
  write_byte_to_struct_offset_104a8be2(param_2,0,uVar1);
  uVar1 = settings_getter(*(int *)(param_1 + 0x44),0xb3);
  write_byte_to_struct_offset_104a8be2(param_2,1,uVar1);
  uVar1 = settings_getter(*(int *)(param_1 + 0x44),99);
  write_byte_to_struct_offset_104a8be2(param_2,2,uVar1);
  return;
}
