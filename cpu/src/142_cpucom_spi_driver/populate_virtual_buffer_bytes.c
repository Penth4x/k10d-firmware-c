/* @k10d populate_virtual_buffer_bytes @ 0x10464b0e
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Fills a 5-byte virtual buffer with values read from a local context object.
 * summary:
 *   This function is virtual slot 2 of class cls_105a7b48. It calls the base class virtual
 *   slot 2 (init_object_with_buffer) and initializes a local context (uStack_9). It
 *   retrieves a virtual buffer pointer via a virtual call on param_1 (slot 10) and
 *   populates it with 5 bytes derived from calls to return_global_word_104592ce,
 *   return_global_word_104592d8, get_ram_byte_at_10000068, and get_ram_byte_at_10000069.
 *   The final byte is a packed combination of the last two values. It concludes by calling
 *   heap_free_if_flagged with the context and a length of 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t populate_virtual_buffer_bytes(int *param_1)

{
  uint8_t extraout_var;
  uint8_t *puVar1;
  uint16_t uVar2;
  uint8_t uVar3;
  char cVar4;
  byte bVar5;
  uintptr_t sp;
  uint8_t uStack_9;
  
  init_object_with_buffer(param_1);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  puVar1 = (uint8_t *)
           (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
  uVar2 = return_global_word_104592ce();
  *puVar1 = (char)((ushort)uVar2 >> 8);
  uVar2 = return_global_word_104592ce();
  puVar1[1] = (char)uVar2;
  return_global_word_104592d8((uint32_t)(&uStack_9));
  puVar1[2] = extraout_var;
  uVar3 = return_global_word_104592d8((uint32_t)(&uStack_9));
  puVar1[3] = uVar3;
  cVar4 = get_ram_byte_at_10000068((uint32_t)(&uStack_9));
  bVar5 = get_ram_byte_at_10000069((uint32_t)(&uStack_9));
  puVar1[4] = cVar4 << 5 | bVar5 & 0x1f;
  heap_free_if_flagged(&uStack_9,2);
  return 1;
}
