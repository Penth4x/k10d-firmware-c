/* @k10d append_dot_to_buffer @ 0x1053f24a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Appends a '.' character to a buffer if the current character at offset 8 is not a
 *   space.
 * summary:
 *   Calls copy_lens_fw_field to obtain a base pointer, then checks if the byte at param_1+8
 *   is not a space. If so, it writes 0x2e ('.') to the calculated offset and calls
 *   copy_three_char_field with the next offset. The module context is lens firmware update,
 *   but the specific role of this string manipulation is unclear without more context on
 *   the buffer contents.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_dot_to_buffer(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = copy_lens_fw_field((int)param_1,param_2);
  if (*(char *)((int)param_1 + 8) != ' ') {
    *(uint8_t *)(iVar1 + (int)param_2) = 0x2e;
    copy_three_char_field((int)param_1,iVar1 + 1 + (int)param_2);
  }
  return;
}
