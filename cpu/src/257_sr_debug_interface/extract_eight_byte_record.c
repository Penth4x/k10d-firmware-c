/* @k10d extract_eight_byte_record @ 0x104f3484
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Allocates a temporary object, populates it via a helper, and copies eight bytes of its
 *   state into a destination buffer.
 * summary:
 *   The function retrieves a pointer from initialize_singleton_object_1045d6a0 and reads an
 *   offset at +0x24. It initializes a local object (cls_105a5d5c) and calls
 *   send_cpucom_command_1045cfdc with that offset and a pointer derived from param_1. If
 *   successful, it processes the object through eventflag_wai_flg and eventflag_clr_flg,
 *   then calls copy_six_bytes_between_structs. Finally, it extracts eight individual bytes
 *   from the object using a series of getter functions (dispatch_on_two_state_value through
 *   call_virtual_slot_two_1045d528) and writes them sequentially to param_2. The local
 *   object is deleted before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void extract_eight_byte_record(int param_1,uint8_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  int iVar4;
  uintptr_t sp;
  int aiStack_18 [3];
  uint32_t uStack_c;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  iVar4 = *(int *)(iVar1 + 0x24);
  cls_105a5d5c_new(aiStack_18);
  uStack_c = 0;
  iVar1 = send_cpucom_command_1045cfdc((void *)iVar4,(void *)(param_1 + 4),0,0);
  if (iVar1 != 0) {
    eventflag_wai_flg((uint32_t *)(param_1 + 0x28),8,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x28),uStack_c);
    copy_six_bytes_between_structs(iVar4,aiStack_18);
    uVar2 = dispatch_on_two_state_value(aiStack_18);
    *param_2 = (char)uVar2;
    uVar2 = dispatch_on_state_two_or_three_1045d5ae(aiStack_18);
    param_2[1] = (char)uVar2;
    uVar2 = dispatch_on_state_two_or_three_1045d5da(aiStack_18);
    param_2[2] = (char)uVar2;
    uVar3 = invoke_virtual_slot_two_1045d4b0(aiStack_18);
    param_2[3] = uVar3;
    uVar2 = invoke_virtual_slot_3_1045d494(aiStack_18);
    param_2[4] = (char)uVar2;
    uVar3 = invoke_virtual_slot_two_1045d4ce(aiStack_18);
    param_2[5] = uVar3;
    uVar3 = call_virtual_slot_two_1045d50a(aiStack_18);
    param_2[6] = uVar3;
    uVar3 = call_virtual_slot_two_1045d528(aiStack_18);
    param_2[7] = uVar3;
  }
  cls_105a5d5c_delete(aiStack_18,2);
  return;
}
