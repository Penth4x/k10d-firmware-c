/* @k10d select_lens_fw_update_entry @ 0x10536256
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Selects a firmware update entry from a table based on index bounds and calls a handler
 *   with the selected data.
 * summary:
 *   The function calls parse_usb_sysparam_record to retrieve data into a stack buffer, then
 *   uses find_byte_in_buffer_105363a6 to get an index. It checks if this index and a second
 *   value (uStack_34) are within bounds defined by param_1[5] and param_1[0xb]. If valid,
 *   it fetches entries from tables pointed to by param_1[7] and param_1[10]; otherwise, it
 *   uses fallback values from param_1[8] or param_1[9]. Finally, it calls
 *   init_object_with_buffer_and_callback_104af018 with the selected entry and other
 *   parameters from the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_lens_fw_update_entry(uint32_t *param_1,int param_2)

{
  byte bVar2;
  int iVar1;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t local_54 [8];
  uint8_t auStack_38 [4];
  uint uStack_34;
  int iStack_30;
  byte *pbStack_28;
  int iStack_24;
  
  puVar5 = (uint32_t *)local_54;
  parse_usb_sysparam_record(auStack_38,(int *)param_1[4],param_2);
  bVar2 = find_byte_in_buffer_105363a6(param_1,(uint)*pbStack_28);
  uVar4 = 0;
  if (((uint)bVar2 < (uint)*(byte *)(param_1 + 5)) && (uStack_34 < *(byte *)(param_1 + 0xb))) {
    param_1[2] = *(uint32_t *)(param_1[7] + (uint)bVar2 * 4);
    uVar4 = *(uint32_t *)(param_1[10] + uStack_34 * 4);
  }
  else {
    param_1[2] = param_1[8];
    if (iStack_30 == 1) {
      param_1[2] = param_1[9];
    }
  }
  iVar1 = param_1[2];
  uVar3 = *param_1;
  *puVar5 = param_1[1];
  puVar5[1] = uVar4;
  init_object_with_buffer_and_callback_104af018(iVar1,pbStack_28,iStack_24,uVar3,*puVar5,puVar5[1]);
  return;
}
