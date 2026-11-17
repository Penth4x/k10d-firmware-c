/* @k10d init_33_byte_buffer_with_descending_values @ 0x1046c284
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 151_settings_display_init (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x85c-byte buffer, initializes it, and fills a specific byte at offset
 *   0x216 with a descending sequence of values.
 * summary:
 *   The function first waits for a condition (via call_kernel_with_offset_arg) to clear. It
 *   then allocates a 0x85c-byte block from the heap and initializes it using
 *   alloc_and_zero_struct_1046c686. It sets the byte at offset 0x859 to 0xff. Finally, it
 *   iterates 8 times, decrementing a counter starting at 0x23 by 4 each time, and calls
 *   invoke_virtual_method_on_slot four times per iteration with the current and three
 *   preceding values, writing each value to the buffer at offset 0x216 before the call.
 *   Returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x1046c2b0) */

uint32_t init_33_byte_buffer_with_descending_values(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  byte bVar3;
  int iStack_10;
  
  iVar1 = call_kernel_with_offset_arg(param_1 + 4);
  while (iVar1 != 0) {
    check_kernel_call_success_10459fea();
    iVar1 = call_kernel_with_offset_arg(param_1 + 4);
  }
  puVar2 = (uint32_t *)heap_alloc((void *)0x85c);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = (uint32_t *)0x0;
  }
  else {
    alloc_and_zero_struct_1046c686(puVar2);
  }
  *(uint8_t *)((int)puVar2 + 0x859) = 0xff;
  iStack_10 = 8;
  bVar3 = 0x23;
  do {
    iVar1 = param_1 + 0x20;
    *(byte *)(puVar2 + 0x216) = bVar3;
    invoke_virtual_method_on_slot(param_1,(uint)bVar3,iVar1,puVar2);
    *(byte *)(puVar2 + 0x216) = bVar3 - 1;
    invoke_virtual_method_on_slot(param_1,(uint)(byte)(bVar3 - 1),iVar1,puVar2);
    *(byte *)(puVar2 + 0x216) = bVar3 - 2;
    invoke_virtual_method_on_slot(param_1,(uint)(byte)(bVar3 - 2),iVar1,puVar2);
    *(byte *)(puVar2 + 0x216) = bVar3 - 3;
    invoke_virtual_method_on_slot(param_1,(uint)(byte)(bVar3 - 3),iVar1,puVar2);
    iStack_10 = iStack_10 + -1;
    bVar3 = bVar3 - 4;
  } while (-1 < iStack_10);
  return 1;
}
