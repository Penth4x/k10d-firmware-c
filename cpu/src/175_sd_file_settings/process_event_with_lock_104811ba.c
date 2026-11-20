/* @k10d process_event_with_lock_104811ba @ 0x104811ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_lock_104811ba(int param_1,void *param_2,char *param_3,void *param_4,int param_5)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_64 [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  cls_105ab468 cStack_28;
  
  puVar3 = (uint32_t *)auStack_64;
  uVar2 = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  uStack_40 = 0;
  uStack_3c = 0;
  cls_105ab468_new(&cStack_28);
  uStack_38 = 0;
  *puVar3 = (uintptr_t)(&uStack_40);
  iVar1 = dispatch_param_if_valid(param_1,param_2,param_3,0,(uint32_t *)*puVar3);
  if (iVar1 != 0) {
    copy_struct_with_offset(param_5,&cStack_28);
    uVar2 = 1;
    if ((cStack_28.field_0xd & 1) == 0) {
      uVar2 = 2;
    }
    uVar2 = query_and_store_result(*(uint32_t *)(param_1 + 8),uStack_3c,uVar2,param_4);
    clear_pointer_if_set(param_1,&uStack_40);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  cls_105ab468_delete(&cStack_28,2);
  return uVar2;
}
