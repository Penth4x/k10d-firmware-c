/* @k10d format_lens_fw_info_line @ 0x1053f188
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Builds a fixed-width 11-byte display line by copying a status string and a second
 *   string into a padded buffer.
 * summary:
 *   The function writes into param_3, a 11-byte (0xb) buffer. It first checks if param_1
 *   starts with 0xe5 (decimal 229); if so, it sets param_3[0] to 5 and skips the first byte
 *   of param_1. It then copies the remainder of param_1 until a null terminator, padding
 *   with spaces (0x20) up to byte 8. It then appends the string at param_2, padding with
 *   spaces up to byte 11. This matches the '---CURRENT INFO---' and 'NOW LOADING' context
 *   of the lens_firmware_update module, likely formatting a status line for the OSDC
 *   display.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void format_lens_fw_info_line(char *param_1,int param_2,uint8_t *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 == -0x1b) {
    *param_3 = 5;
    uVar2 = 1;
  }
  for (; param_1[uVar2] != '\0'; uVar2 = uVar2 + 1) {
    param_3[uVar2] = param_1[uVar2];
  }
  for (; uVar2 < 8; uVar2 = uVar2 + 1) {
    param_3[uVar2] = 0x20;
  }
  for (iVar1 = uVar2 - 8; *(char *)(iVar1 + param_2) != '\0'; iVar1 = iVar1 + 1) {
    param_3[uVar2] = *(uint8_t *)(iVar1 + param_2);
    uVar2 = uVar2 + 1;
  }
  for (; uVar2 < 0xb; uVar2 = uVar2 + 1) {
    param_3[uVar2] = 0x20;
  }
  return;
}
