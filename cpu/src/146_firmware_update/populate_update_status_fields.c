/* @k10d populate_update_status_fields @ 0x10467c78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Fills several fields of a firmware-update object from helper queries and passes one to
 *   a writer.
 * summary:
 *   Takes an object pointer (param_1). If field at +0x25c is zero, it calls
 *   get_kernel_object_id on the sub-object at +0x204 and stores the result at +0x254;
 *   otherwise it copies +0x25c into +0x254. It then stores the return of
 *   return_global_word_104592ce at +0x258, the return of
 *   return_global_word_104592d8(param_1+0x204) at +0x25a, and passes the return of
 *   return_pentax_k10d_string_104592f4(param_1+0x204) to copy_null_terminated_string along
 *   with the fixed SDRAM address 0x800042d2. The module is firmware_update (references
 *   KBCHG.BIN), so this appears to assemble status/metadata fields for an update record.
 *   The callees are unnamed, so the exact meaning of each field is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_update_status_fields(int param_1)

{
  uint32_t uVar1;
  uint16_t uVar3;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x25c) == 0) {
    uVar1 = get_kernel_object_id(param_1 + 0x204);
    *(uint32_t *)(param_1 + 0x254) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x25c);
  }
  uVar3 = return_global_word_104592ce();
  *(uint16_t *)(param_1 + 600) = uVar3;
  uVar3 = return_global_word_104592d8(param_1 + 0x204);
  *(uint16_t *)(param_1 + 0x25a) = uVar3;
  pvVar2 = (void *)return_pentax_k10d_string_104592f4(param_1 + 0x204);
  copy_null_terminated_string((void *)0x800042d2/*SDRAM*/,pvVar2);
  return;
}
