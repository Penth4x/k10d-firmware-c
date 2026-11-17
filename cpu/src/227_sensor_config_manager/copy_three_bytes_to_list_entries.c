/* @k10d copy_three_bytes_to_list_entries @ 0x104c1356
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies three bytes from param_1 to up to three entries in a list managed by param_2.
 * summary:
 *   Calls write_two_words_to_struct_104c1ff4 and
 *   invoke_virtual_method_on_subobject_104bfd7e first. If the check passes, it iterates
 *   three times, using read_byte_at_offset_1051ed64 to check for entry existence and
 *   find_first_active_entry to get the entry pointer. For each valid entry, it writes bytes
 *   from param_1+0x4a8, 0x4ab, and 0x4aa to offsets 0x1d4, 0x1d6, and 0x1d7 of the entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c14f8) overlaps instruction at (ram,0x104c14f6)
    */

void copy_three_bytes_to_list_entries(int param_1,uint16_t *param_2)

{
  int iVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  int iStack_c;
  
  write_two_words_to_struct_104c1ff4(param_1,*param_2,param_2[1]);
  iVar1 = invoke_virtual_method_on_subobject_104bfd7e(param_1,param_1 + 0x4a8);
  if (iVar1 != 0) {
    iVar5 = 0;
    iStack_c = 1;
    iVar1 = 5;
    do {
      iVar3 = iVar1;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar3 = iVar5;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar3);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint16_t *)(iVar2 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar2 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar3 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar3 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iVar3 = iVar5 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar3 = iVar1 + -1;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar3);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint16_t *)(iVar2 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar2 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar3 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar3 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iVar3 = iVar5 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar3 = iVar1 + -2;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar3);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint16_t *)(iVar2 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar2 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar2 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar3 = find_first_active_entry((int)param_2,iVar3);
        *(uint8_t *)(iVar3 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iVar5 = iVar5 + 3;
      iVar1 = iVar1 + -3;
      iStack_c = iStack_c + -1;
    } while (-1 < iStack_c);
  }
  return;
}
