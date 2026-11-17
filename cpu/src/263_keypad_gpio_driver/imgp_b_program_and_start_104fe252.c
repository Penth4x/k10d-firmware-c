/* @k10d imgp_b_program_and_start_104fe252 @ 0x104fe252
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Programs image-processor engine B from a request block and initiates processing.
 * summary:
 *   This function is virtual slot 2 of the image-processor driver class. It reads
 *   configuration parameters (0xbd-0xbf) from a global context, stores them in the request
 *   structure, and invokes a virtual method on a sub-object to trigger the engine. It then
 *   initializes three sub-structures at offsets 0x20, 0x38, and 0x50, likely for status or
 *   data buffers, before returning success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t imgp_b_program_and_start_104fe252(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xbd);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xbe);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xbf);
  *(uint32_t *)((int)param_1 + 0x14) = uVar2;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x18) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             &SUB_80000002);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x20),1,1);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x38),1,1);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x50),1,1);
  return 1;
}
