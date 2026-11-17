/* @k10d count_string_bytes @ 0x105452fc
 * name: model (proposed by the local model from the decompile, confidence 0.99)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Returns the number of bytes in a null-terminated string, excluding the terminator.
 * summary:
 *   Iterates from param_1 until a null byte is found, then returns the distance from the
 *   start pointer to the null byte. No callees are invoked and no global state is modified.
 *   The lens_firmware_update module likely uses this to measure status or progress strings
 *   before display or transmission.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_string_bytes(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  return (int)pcVar2 - (int)param_1;
}
