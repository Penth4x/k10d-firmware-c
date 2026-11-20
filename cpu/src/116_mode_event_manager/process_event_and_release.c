/* @k10d process_event_and_release @ 0x104313b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_event_and_release(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  uint32_t uVar4;
  
  set_flag_and_conditional_call(*(uint32_t *)(param_1 + 0x30),1,1);
  if (*(char *)(param_2 + 0xb) != '\0') {
    *(uint8_t *)(param_1 + 0x2c) = 1;
    call_two_helpers_with_flag(*(uint32_t *)(param_1 + 0x34),param_2[0xc],1);
  }
  iVar1 = alloc_and_init_event_node(*(uint32_t *)(param_1 + 0x38),param_2);
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x7c),8,(void *)0x0,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x7c),8);
  }
  if (param_2 != (uint32_t *)0x0) {
    cls_1059f170_destructor(param_2 + 5,2);
    cls_1059f170_destructor(param_2,2);
    heap_free((int)param_2);
  }
  set_flag_and_conditional_call(*(uint32_t *)(param_1 + 0x30),0,1);
  uVar4 = *(uint32_t *)(param_1 + 0x38);
  uVar2 = read_field_at_offset_0x44(uVar4);
  uVar3 = get_field_at_offset_eight(uVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    release_sem_and_set_flag((uint32_t *)(param_1 + 0x44));
  }
  finalize_object_with_count(*(uint32_t *)(param_1 + 0x34));
  sig_sem_obj((uint32_t *)(param_1 + 0x6c));
  return;
}
