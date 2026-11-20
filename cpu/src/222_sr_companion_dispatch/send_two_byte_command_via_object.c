/* @k10d send_two_byte_command_via_object @ 0x104b92d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Constructs a 2-byte payload from parameters and transmits it through a helper object if
 *   a precondition check passes.
 * summary:
 *   The function first calls set_pointer_and_clear_flag to check a condition based on
 *   fields at offsets 0x2c and 4 of param_1. If true, it instantiates a temporary object
 *   (cls_105a6d8c), initializes it with data from offset 0x1c, and calls virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 3. It then calls
 *   find_exposure_value_index to process param_2 and param_3, storing the result in a local
 *   byte. Finally, it calls forward_with_mode_three to send this byte along with data from
 *   offset 0x18 and 4, and cleans up the temporary object. The specific camera subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int send_two_byte_command_via_object(int param_1,short param_2,short param_3)

{
  bool bVar3;
  uint32_t uVar1;
  uint uVar2;
  int iVar4;
  uintptr_t sp;
  cls_105a6d8c acStack_28 [7];
  uint8_t uStack_9;
  
  bVar3 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar4 = 0;
  if (bVar3) {
    cls_105a6d8c_new(acStack_28);
    copy_status_block_bytes(*(int *)(param_1 + 0x1c),acStack_28);
    uVar1 = get_or_init_heap_block();
    uVar2 = extract_field_from_struct_1045ff0e(acStack_28,3);
    uVar2 = find_exposure_value_index(uVar1,param_2,(int)param_3,uVar2 & 0xff);
    uStack_9 = (char)uVar2;
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar4 = forward_with_mode_three(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),4,&uStack_9);
    if (iVar4 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
    cls_105a6d8c_delete(acStack_28,2);
  }
  return iVar4;
}
