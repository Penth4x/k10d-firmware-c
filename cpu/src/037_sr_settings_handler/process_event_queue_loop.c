/* @k10d process_event_queue_loop @ 0x10390a16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_event_queue_loop(cls_1055a304 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int aiStack_28 [4];
  uint8_t auStack_18 [12];
  uint uStack_c;
  
  uStack_c = 0;
  empty_stub_function_103b76f0();
  param_1->field_0x5d = 0;
  if (param_1->field_0x5e == '\0') {
    if (param_1->field_0x5f != '\0') {
      invoke_virtual_slot_15_1036c39a();
      invoke_virtual_slot_8_1036c3ba();
      invoke_virtual_slot_12_1036c3da();
      param_1->field_0x5f = 0;
    }
    init_object_with_lazy_alloc_10390b82((int)(param_1),(uint32_t)(param_1->field_0x8));
    aiStack_28[0] = -0x1c;
    piVar1 = aiStack_28 + 1;
    while( true ) {
      eventflag_wai_flg(&param_1->field_0x4c,0xb,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(&param_1->field_0x4c,uStack_c);
      if ((uStack_c & 2) != 0) break;
      if ((uStack_c & 8) != 0) {
        uRam80019854 = 6;
        uRam80019858 = 0;
        uRam8001985c = 0;
        iVar3 = 0xc;
        do {
          iVar2 = iVar3 + -4;
          *(uint32_t *)(iVar2 + (int)piVar1) = *(uint32_t *)(iVar3 + -0x7ffe67b0);
          iVar3 = iVar2;
        } while (iVar2 != 0);
        replace_buffer_node((int)param_1,piVar1);
      }
      if ((uStack_c & 1) != 0) {
        swap_three_words_with_callbacks_10390e74(piVar1,(int)&param_1->field_0x68);
        iVar3 = 0xc;
        do {
          iVar2 = iVar3 + -4;
          *(uint32_t *)((int)aiStack_28 + iVar3 + 0xcU) =
               *(uint32_t *)((int)&uStack_c + iVar2 + aiStack_28[0] + 4);
          iVar3 = iVar2;
        } while (iVar2 != 0);
        replace_buffer_node((int)param_1,auStack_18);
      }
    }
    update_settings_on_mode_change((int)(param_1),(uint32_t)(0));
    empty_noop_stub_103b76f2();
  }
  else {
    call_helper_with_0x50000((uint32_t)(param_1),(uint32_t)(_DAT_105bb5f4/*ROM*/));
    param_1->field_0x5e = 0;
  }
  return;
}
