/* @k10d process_pending_object_request @ 0x104e0696
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_pending_object_request(int param_1)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x1010) = 0;
  if (*(int *)(param_1 + 0x1024) != 0) {
    iVar1 = (*(code *)0x104e3268/*ROM*/)(*(uint32_t *)(param_1 + 0x1014));
    *(int *)(param_1 + 0x1010) = iVar1;
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 8)))[3].fn)
                (((vtbl_entry*)(*(int *)(iVar1 + 8)))[3].adj + iVar1,*(uint32_t *)(param_1 + 0x1028));
      *(uint32_t *)(param_1 + 0xc) = 2;
      *(uint32_t *)(param_1 + 0x1028) = 0;
      *(uint32_t *)(param_1 + 0x1024) = 0;
    }
  }
  return;
}
