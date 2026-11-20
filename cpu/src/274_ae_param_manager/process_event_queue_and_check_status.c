/* @k10d process_event_queue_and_check_status @ 0x10516896
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool process_event_queue_and_check_status(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  *(uint8_t *)(*(int *)(param_1 + 0x44) + 0x31c) = 1;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      pvVar4 = *(void **)(param_1 + 0x1f8 + iVar5);
      if (pvVar4 == 0) break;
      iVar3 = *(int *)((int)pvVar4 + 0x20);
      iVar2 = *(int *)((int)pvVar4 + 0x24);
      sVar1 = *(short *)(iVar3 + iVar2 * 2);
      while (sVar1 != 0x14) {
        if (*(short *)(iVar3 + iVar2 * 2) == 1) {
          release_buffer_slot_by_index(param_1,(int)pvVar4,(uint)*(ushort *)(iVar3 + 0xa0 + iVar2 * 2));
        }
        iVar2 = *(int *)((int)pvVar4 + 0x24) + 1;
        *(int *)((int)pvVar4 + 0x24) = iVar2;
        iVar3 = *(int *)((int)pvVar4 + 0x20);
        sVar1 = *(short *)(iVar3 + iVar2 * 2);
      }
      forward_param_to_callee_10515fbc(param_1,pvVar4);
      iVar5 = iVar5 + 4;
    } while (iVar5 < param_2 * 4);
  }
  iVar5 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
  if (iVar5 == 0) {
    *(uint8_t *)(param_1 + 0x29f) = 1;
    invoke_dual_object_slot2(param_1,0xf00001,0);
    pvVar4 = (void *)get_or_init_singleton_object_1051d40e();
    update_camera_state_flags(pvVar4,0x17,0);
  }
  return iVar5 == 0;
}
