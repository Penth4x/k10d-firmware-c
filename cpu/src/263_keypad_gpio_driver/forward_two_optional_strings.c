/* @k10d forward_two_optional_strings @ 0x104fdcc8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Forwards up to two non-empty string fields from a struct to a helper.
 * summary:
 *   Checks the byte at offset 8 and offset 9 of the struct pointed to by param_2; if each
 *   is non-zero (non-null/non-empty), calls program_image_processor_engine with param_1 and
 *   the corresponding 32-bit field (*param_2 or param_2[1]). Likely forwards two optional
 *   string or pointer members to a lower-level image-processor driver routine. No other
 *   side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_optional_strings(uint32_t param_1,uint32_t *param_2)

{
  if (*(char *)(param_2 + 2) != '\0') {
    program_image_processor_engine(param_1,(void *)*param_2);
  }
  if (*(char *)((int)param_2 + 9) != '\0') {
    program_image_processor_engine(param_1,(void *)param_2[1]);
  }
  return;
}
