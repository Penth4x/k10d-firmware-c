/* @k10d poll_event_until_clear @ 0x10432ce2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 117_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_event_until_clear(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_4c;
  cls_105a8a1c acStack_48 [16];
  
  uStack_4c = 1;
  iVar2 = get_or_init_singleton_object_10516bf2();
  uVar3 = *(uint32_t *)(iVar2 + 4);
  iVar2 = check_mode_flag_or_byte(uVar3);
  if (iVar2 != 0) {
    bVar1 = false;
    do {
      if (!bVar1) {
        cls_105a8a1c_new(acStack_48);
        copy_struct_under_semaphore((int)param_1,acStack_48);
        iVar2 = check_object_state_and_invoke_slot(*(uint32_t *)((int)param_1 + 0x30),acStack_48);
        if (iVar2 != 0) {
          bVar1 = true;
          invoke_virtual_method_with_id((uint32_t)(param_1));
          mode_ctrl_on_status_h_104329b0((int)param_1,(void *)0x3);
        }
        cls_105a8a1c_delete(acStack_48,2);
        if (((!bVar1) && (param_2 != 0)) && (*(char *)((int)param_1 + 0x9d) != '\0')) {
          uStack_4c = 0;
          break;
        }
      }
      check_kernel_call_success_10459fea();
      iVar2 = check_mode_flag_or_byte(uVar3);
    } while (iVar2 != 0);
  }
  *(uint8_t *)((int)param_1 + 0x9d) = 0;
  return uStack_4c;
}
