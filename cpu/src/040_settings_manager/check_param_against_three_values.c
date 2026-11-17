/* @k10d check_param_against_three_values @ 0x1039377c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates param_2 against three specific values using helper functions and returns a
 *   success flag.
 * summary:
 *   The function calls add_offset_to_pointer_104d65b6 and map_mode_index_to_flag_1039367e
 *   to prepare arguments for find_entry_by_key_in_table. It then branches on param_2: if 1,
 *   2, or 3, it calls read_byte_from_struct_offset_104d5b30 with a corresponding argument
 *   (3, 2, or 1 respectively). If read_byte_from_struct_offset_104d5b30 returns 0, the
 *   function returns 0; otherwise, it returns 1. If param_2 is not 1, 2, or 3, it
 *   immediately returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_param_against_three_values(void *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar4 = 1;
  uVar1 = add_offset_to_pointer_104d65b6(param_3);
  uVar2 = map_mode_index_to_flag_1039367e(param_1);
  uVar1 = find_entry_by_key_in_table(uVar1,uVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,3);
    }
    else if (param_2 == 2) {
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,2);
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      iVar3 = read_byte_from_struct_offset_104d5b30(uVar1,1);
    }
    if (iVar3 == 0) {
      uVar4 = 0;
    }
  }
  return uVar4;
}
