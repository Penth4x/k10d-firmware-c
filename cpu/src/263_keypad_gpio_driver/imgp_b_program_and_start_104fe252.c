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

/* WARNING: Struct "cls_105d48e4": ignoring multiple overlapping fields */

uint32_t imgp_b_program_and_start_104fe252(cls_105d48e4 *param_1)

{
  void *pvVar1;
  void *puVar2;
  uint32_t uVar3;
  int iVar4;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xbd);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,0xbe);
  ((uint32_t *)&(param_1->field_0x4))[3] = (uint32_t)(puVar2);
  uVar3 = read_table_entry_field(pvVar1,0xbf);
  param_1->field_0x14 = uVar3;
  iVar4 = *(int *)(param_1->field_0x18 + 4);
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x18 + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,&param_1->field_0x4, &SUB_80000002);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x1c))[1],1,1);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x34))[1],1,1);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x4c))[1],1,1);
  return 1;
}
