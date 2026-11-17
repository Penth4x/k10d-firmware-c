/* @k10d fill_buffer_with_repeated_byte @ 0x000e0ef2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Writes the return value of wait_for_flag_and_store_byte(0xff) into param_1 repeatedly
 *   for param_2 iterations.
 * summary:
 *   Loops param_2 times, calling wait_if_flag_is_two and wait_for_flag_and_store_byte(0xff)
 *   each iteration, storing the resulting byte into the buffer at param_1 and advancing the
 *   pointer. Both callees are unnamed, so the specific data source and side effects of
 *   wait_if_flag_is_two are unknown. The function acts as a buffer-fill routine whose fill
 *   value is determined by wait_for_flag_and_store_byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_buffer_with_repeated_byte(uint8_t *param_1,short param_2)

{
  uint8_t uVar1;
  
  do {
    wait_if_flag_is_two();
    uVar1 = wait_for_flag_and_store_byte(0xff);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}
