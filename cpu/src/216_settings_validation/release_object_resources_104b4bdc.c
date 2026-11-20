/* @k10d release_object_resources_104b4bdc @ 0x104b4bdc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_resources_104b4bdc(int param_1, uint32_t param_x1)

{
  void *pvVar1;
  
  call_three_init_helpers_104b6972((uint32_t *)(*(uint32_t *)(param_1 + 0x5c)));
  call_function_on_offset_field_104b4b30(param_1);
  clear_byte_at_offset_0x40(*(uint32_t *)(param_1 + 0x58));
  call_helper_with_second_field_104b59ec(*(uint32_t *)(param_1 + 0x5c));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x70));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x74));
  *(uint32_t *)(param_1 + 0x70) = 0;
  *(uint32_t *)(param_1 + 0x74) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    heap_free_2(*(int *)(param_1 + 0x6c));
    *(uint32_t *)(param_1 + 0x6c) = 0;
  }
  call_helper_with_0x50000(param_1,0);
  return;
}
