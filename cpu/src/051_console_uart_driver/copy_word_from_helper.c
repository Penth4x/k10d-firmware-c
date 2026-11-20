/* @k10d copy_word_from_helper @ 0x103b8a54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit word from offset 0xc of a helper-returned pointer into offset 0x68 of
 *   the object.
 * summary:
 *   Calls get_or_create_singleton_object_10485138 to obtain a pointer, reads the dword at
 *   offset 0xc of that pointer, and stores it at offset 0x68 of the object passed in
 *   param_1. Returns 1 unconditionally. The role of get_or_create_singleton_object_10485138
 *   and the meaning of the copied value are not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_word_from_helper(cls_10594c54 *param_1)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10485138();
  param_1->field_0x68 = *(uint32_t *)(iVar1 + 0xc);
  return 1;
}
