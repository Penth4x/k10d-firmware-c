/* @k10d poll_and_update_entry_state @ 0x104c2000
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_and_update_entry_state(int param_1,void *param_2)

{
  char cVar2;
  uint32_t uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 5;
  while( true ) {
    iVar5 = iVar4;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      iVar5 = iVar3;
    }
    cVar2 = read_byte_at_offset_1051ed64(param_2,iVar5);
    if (cVar2 != '\0') break;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -1;
    if (5 < iVar3) {
      return 0;
    }
  }
  iVar3 = init_buffer_with_size_0x10000(param_1);
  if (iVar3 == 0) {
    iVar3 = find_first_active_entry((int)param_2,iVar5);
    *(uint8_t *)(iVar3 + 0x30) = 1;
    return 0;
  }
  iVar3 = find_first_active_entry((int)param_2,iVar5);
  *(uint8_t *)(iVar3 + 0x30) = 0;
  *(int *)(param_1 + 0xfd94) = param_1 + 0xebac + *(int *)(param_1 + 0x8d0) * 0x2fc + iVar5 * 0x2fc;
  iVar3 = find_first_active_entry((int)param_2,iVar5);
  copy_and_dispatch_param_block((int)(param_1),(uint32_t *)(iVar3));
  iVar3 = find_first_active_entry((int)param_2,iVar5);
  uVar1 = read_struct_field_0x2c(param_1);
  *(uint32_t *)(iVar3 + 0x2c) = uVar1;
  invoke_virtual_slot_two_104bf5b6(param_1);
  return 0;
}
