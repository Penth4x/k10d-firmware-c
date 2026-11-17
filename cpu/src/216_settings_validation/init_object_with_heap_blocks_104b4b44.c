/* @k10d init_object_with_heap_blocks_104b4b44 @ 0x104b4b44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_blocks_104b4b44(int param_1, uint32_t param_x1)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  
  clear_byte_at_offset_0x40(*(uint32_t *)(param_1 + 0x58));
  read_and_store_buffer_data(param_1);
  uVar1 = (*(code *)0x104b687e/*ROM*/)(*(uint32_t *)(param_1 + 0x5c));
  forward_call_with_offset_0x48(param_1,uVar1);
  pvVar2 = (void *)get_system_heap();
  uVar1 = mempool_get_block(pvVar2,(void *)0x96000,0);
  *(uint32_t *)(param_1 + 0x70) = uVar1;
  pvVar2 = (void *)get_system_heap();
  iVar3 = mempool_get_block(pvVar2,(void *)0x96000,0);
  *(int *)(param_1 + 0x74) = iVar3;
  if ((*(int *)(param_1 + 0x70) == 0) || (iVar3 == 0)) {
    call_helper_with_0x50000(param_1,0);
  }
  else {
    call_two_helpers_on_field_104b59c8(*(uint32_t *)(param_1 + 0x5c));
  }
  init_shutter_trigger_state((void *)(*(uint32_t *)(param_1 + 0x5c)));
  return;
}
