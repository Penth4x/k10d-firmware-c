/* @k10d init_lens_update_context_1053b0ae @ 0x1053b0ae
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Zeroes a lens firmware update context structure and calls a helper to initialize its
 *   tail fields.
 * summary:
 *   Clears offsets 0xc through 0x24 of the structure pointed to by param_2. Calls
 *   parse_dotted_version_string with param_1 and pointers into the structure at offsets
 *   0x28, 0x24, and 0x20. If the callee returns 0, sets the field at offset 8 to 1 and
 *   returns 0; otherwise returns the callee's value. The module context is lens firmware
 *   update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_lens_update_context_1053b0ae(void *param_1,void *param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)param_2 + 0xc) = 0;
  *(uint32_t *)((int)param_2 + 0x10) = 0;
  *(uint16_t *)((int)param_2 + 0x14) = 0;
  *(uint16_t *)((int)param_2 + 0x16) = 0;
  *(uint16_t *)((int)param_2 + 0x18) = 0;
  *(uint16_t *)((int)param_2 + 0x1a) = 0;
  *(uint16_t *)((int)param_2 + 0x1c) = 0;
  *(uint8_t *)((int)param_2 + 0x1e) = 0;
  *(uint8_t *)((int)param_2 + 0x1f) = 0;
  *(uint8_t *)((int)param_2 + 0x24) = 0;
  iVar1 = parse_dotted_version_string(param_1,(byte *)((int)param_2 + 0x28),(byte *)((int)param_2 + 0x24),
                       (uint32_t *)((int)param_2 + 0x20));
  if (iVar1 == 0) {
    *(uint32_t *)((int)param_2 + 8) = 1;
    iVar1 = 0;
  }
  return iVar1;
}
