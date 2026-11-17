/* @k10d return_global_word_104592ce @ 0x104592ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at DAT_1000001c.
 * summary:
 *   The function loads the 16-bit value from the global symbol DAT_1000001c and returns it
 *   in r4. It has no callees and performs no side effects. The role of DAT_1000001c is not
 *   determinable from the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t return_global_word_104592ce(void)

{
  return DAT_1000001c/*ROM*/;
}
