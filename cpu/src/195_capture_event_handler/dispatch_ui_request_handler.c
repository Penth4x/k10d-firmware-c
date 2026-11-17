/* @k10d dispatch_ui_request_handler @ 0x104925fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Executes a UI request by branching on a state field and invoking virtual methods or
 *   helper functions.
 * summary:
 *   The function reads a state pointer from offset 0x10 of the input object. If the state
 *   is null, it calls three helper functions (get_or_init_sram_block_1052b6fc,
 *   select_buffer_by_index, transfer_sr_calibration_data/run_sr_state_machine) with
 *   arguments derived from offset 0x14. If the state is non-null, it performs virtual calls
 *   on the state object (slots at 0xac, 0x3c, 0x54), sets a global flag DAT_8001049c, and
 *   calls invoke_virtual_slot_on_two_objects_104916b6 and dispatch_two_param_operations. It
 *   always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_ui_request_handler(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 == 0) {
    uVar2 = get_or_init_sram_block_1052b6fc();
    uVar3 = select_buffer_by_index(*(uint32_t *)(*(int *)((int)param_1 + 0x14) + 4));
    transfer_sr_calibration_data(uVar2,uVar3,1);
    uVar2 = get_or_init_sram_block_1052b6fc();
    uVar3 = select_buffer_by_index(**(uint32_t **)((int)param_1 + 0x14));
    transfer_sr_calibration_data(uVar2,uVar3,0);
    uVar2 = get_or_init_sram_block_1052b6fc();
    uVar3 = select_buffer_by_index(*(uint32_t *)(*(int *)((int)param_1 + 0x14) + 4));
    uVar4 = select_buffer_by_index(**(uint32_t **)((int)param_1 + 0x14));
    run_sr_state_machine(uVar2,uVar3,uVar4);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xac))(*(short *)(*(int *)(iVar1 + 0xc) + 0xa8) + iVar1,0);
    if (DAT_8001049c/*SDRAM*/ == '\0') {
      invoke_virtual_slot_on_two_objects_104916b6(*(uint32_t *)((int)param_1 + 0x14));
      DAT_8001049c/*SDRAM*/ = '\x01';
    }
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 0xc);
    (**(code **)(iVar1 + 0x3c))(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x38));
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 0xc);
    (**(code **)(iVar1 + 0x54))(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x50));
    dispatch_two_param_operations(*(uint32_t *)((int)param_1 + 0x14),1);
  }
  return 1;
}
