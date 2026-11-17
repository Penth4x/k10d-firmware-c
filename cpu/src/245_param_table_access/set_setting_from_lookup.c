/* @k10d set_setting_from_lookup @ 0x104d4080
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Resolves a value via two helper calls and writes it to a settings offset if valid.
 * summary:
 *   Checks if param_2 is positive. If so, calls get_or_init_heap_block to get a base
 *   pointer and map_index_to_code_1045b55e to get an index/value. If the result is not
 *   0xff, it calculates an offset (param_2 * 0x80 + 0x174) and calls setting_set to store
 *   the value at that offset within the structure pointed to by param_1. Returns 0x83 on
 *   failure or 0 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_setting_from_lookup(int param_1,int param_2,uint8_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0x83;
  if (0 < param_2) {
    uVar1 = get_or_init_heap_block();
    iVar2 = map_index_to_code_1045b55e(uVar1,param_3);
    if (iVar2 != 0xff) {
      setting_set(*(int *)(param_1 + 0x14),(param_2 + -1) * 0x80 + 0x174,iVar2);
      uVar3 = 0;
    }
  }
  return uVar3;
}
