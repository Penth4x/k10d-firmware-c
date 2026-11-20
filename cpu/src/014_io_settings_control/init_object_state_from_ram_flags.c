/* @k10d init_object_state_from_ram_flags @ 0x10369b14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object's state fields based on global RAM flags, calling a virtual
 *   method and setting specific offsets.
 * summary:
 *   The function takes an object pointer (param_1) and first calls a virtual method (slot
 *   2) on a sub-object at offset 0x98. It then checks two global RAM variables
 *   (iRam80015b08 and cRam80015d00). If iRam80015b08 is 2 and cRam80015d00 is non-zero, it
 *   calls retry_virtual_call_until_success_1036a776 with several arguments including the
 *   object and a local value of 3. Otherwise, it calls copy_large_struct on a sub-object at
 *   offset 0xcc, copies iRam80015b08 to offset 0xb0 of the object, and clears a byte at
 *   offset 0x2a8. It always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_state_from_ram_flags(void *param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_14 [4];
  
  puVar1 = (uint32_t *)auStack_14;
  reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x98));
  if ((iRam80015b08 == 2) && (cRam80015d00 != '\0')) {
    *puVar1 = 3;
    retry_virtual_call_until_success_1036a776((int)param_1,(int)param_1 + 0x3c,0x80015af0/*SDRAM*/,(int)param_1 + 0x98,*puVar1);
  }
  else {
    copy_large_struct((uint32_t *)((int)param_1 + 0xcc),(uint32_t *)0x80015b24/*SDRAM*/);
    *(int *)((int)param_1 + 0xb0) = iRam80015b08;
    *(uint8_t *)((int)param_1 + 0x2a8) = 0;
  }
  return 1;
}
