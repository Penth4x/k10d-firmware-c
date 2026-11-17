/* @k10d init_two_sram_objects @ 0x10394542
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes two SDRAM objects at 0x8001a294 and 0x8001a4a8 using a common context
 *   pointer.
 * summary:
 *   Calls get_or_create_sram_object_1040a240 to retrieve a context pointer, stores the
 *   address 0x8001a294 on the stack, and invokes a function at 0x1040a272 with that context
 *   and three other SDRAM addresses. It then calls copy_and_dispatch_stack_block, retrieves
 *   the context again, and invokes a function at 0x1040a28a with the context and address
 *   0x8001a4a8. Finally, it calls get_or_create_sram_object_1040a240 and
 *   init_object_with_two_ids_1040a3b0 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_sram_objects(void)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_8 [4];
  
  puVar2 = (uint32_t *)auStack_8;
  uVar1 = get_or_create_sram_object_1040a240();
  *puVar2 = 0x8001a294/*SDRAM*/;
  (*(code *)0x1040a272/*ROM*/)(uVar1,0x80019c58/*SDRAM*/,0x80019e6c/*SDRAM*/,0x8001a080/*SDRAM*/);
  copy_and_dispatch_stack_block();
  uVar1 = get_or_create_sram_object_1040a240();
  (*(code *)0x1040a28a/*ROM*/)(uVar1,0x8001a4a8/*SDRAM*/);
  get_or_create_sram_object_1040a240();
  init_object_with_two_ids_1040a3b0(__frv_reg_unset(4));
  return;
}
