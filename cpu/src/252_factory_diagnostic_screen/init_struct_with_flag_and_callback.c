/* @k10d init_struct_with_flag_and_callback @ 0x104e5002
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x40-byte struct with specific flags and calls a helper and a conditional
 *   callback.
 * summary:
 *   Checks if the first byte of the input struct is zero. If so, it clears most of the
 *   struct (bytes 4-0x33, 0x34-0x37, 0x24-0x27), sets byte 0x3c to 1 and byte 0x37 to 2,
 *   and clears global uRam80010b74. It then calls process_object_state_update with the
 *   struct pointer. If that call returns 1, it sets the first byte of the struct to 1 and
 *   calls the function at 0x104e6162 with the struct pointer. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_with_flag_and_callback(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\x01';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\x02';
    uRam80010b74 = 0;
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    iVar1 = process_object_state_update(param_1);
    *param_1 = '\x01';
    if (iVar1 == 1) {
      (*(code *)0x104e6162/*ROM*/)(param_1);
    }
  }
  return 1;
}
