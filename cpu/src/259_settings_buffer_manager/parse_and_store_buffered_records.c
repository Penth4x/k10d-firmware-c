/* @k10d parse_and_store_buffered_records @ 0x104f499c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Parses a stream of records from a buffer and stores them into an array within the
 *   object.
 * summary:
 *   The function checks if the object is active and the index is valid. It calls
 *   compute_indexed_difference to get the record count, then uses
 *   format_string_to_buffer_10545140 and count_string_bytes to parse records from the
 *   buffer (param_2). It iterates through the parsed records, storing each one into the
 *   object's array at offset 0x30 and incrementing a counter. The specific data type and
 *   subsystem are not identifiable from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_and_store_buffered_records(int param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  uint8_t *puVar7;
  uintptr_t sp;
  char acStack_58 [80];
  
  puVar7 = &stack0xfffffff8;
  if (((*(char *)(param_1 + 0x40) != '\0') && (param_4 < 4)) &&
     (pvVar6 = (void *)param_4, uVar2 = compute_indexed_difference(param_1,param_4), 9 < uVar2)) {
    if (param_3 == 0) {
      pcVar5 = (char *)&DAT_105c3b04/*ROM*/;
    }
    else {
      pcVar5 = (char *)&DAT_105c3afc/*ROM*/;
    }
    format_string_to_buffer_10545140(acStack_58,pcVar5,param_2,pvVar6);
    iVar3 = count_string_bytes(acStack_58);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar3 = param_4 * 4;
      do {
        iVar1 = param_1 + 0x30;
        **(uint8_t **)(iVar1 + iVar3) = puVar7[-0x50];
        puVar7 = puVar7 + 1;
        *(int *)(iVar3 + iVar1) = *(int *)(iVar3 + iVar1) + 1;
        uVar2 = uVar2 + 1;
        uVar4 = count_string_bytes(acStack_58);
      } while (uVar2 < uVar4);
    }
  }
  return;
}
