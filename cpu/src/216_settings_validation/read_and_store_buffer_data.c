/* @k10d read_and_store_buffer_data @ 0x104b4c62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 216_settings_validation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_and_store_buffer_data(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  (*(code *)0x104b5942/*ROM*/)(*(uint32_t *)(param_1 + 0x5c));
  iVar1 = query_object_via_virtual_call_104b56da((void *)(*(uint32_t *)(param_1 + 0x60)),&uStack_c);
  if (uStack_c < 0x4e21) {
    if (iVar1 != 0) {
      uVar2 = heap_alloc_2(uStack_c + 1);
      *(uint32_t *)(param_1 + 0x6c) = uVar2;
      uVar2 = invoke_virtual_write_and_cleanup((void *)(*(uint32_t *)(param_1 + 0x60)),uVar2,uStack_c);
      (*(code *)0x104b5c4e/*ROM*/)
                (*(uint32_t *)(param_1 + 0x5c),*(uint32_t *)(param_1 + 0x6c),uStack_c);
      parse_colon_delimited_fields(*(uint32_t *)(param_1 + 0x5c));
      (*(code *)0x104b5d02/*ROM*/)(*(uint32_t *)(param_1 + 0x5c));
      (*(code *)0x104b5fe6/*ROM*/)(*(uint32_t *)(param_1 + 0x5c),0);
      return uVar2;
    }
  }
  else {
    call_helper_with_value_0x91(*(uint32_t *)(param_1 + 0x5c));
  }
  call_helper_with_0x50000(param_1,0);
  return 0;
}
