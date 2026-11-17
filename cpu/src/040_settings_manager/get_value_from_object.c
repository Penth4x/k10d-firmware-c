/* @k10d get_value_from_object @ 0x103946b4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a value from an object by calling a getter function on a pointer returned by
 *   an initializer.
 * summary:
 *   Calls get_or_init_sram_block_10391bfa to obtain a pointer, then passes that pointer to
 *   read_first_word_10391cba to retrieve a value. Returns the result of
 *   read_first_word_10391cba. The specific subsystem or data type is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_value_from_object(void)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = (uint32_t *)get_or_init_sram_block_10391bfa();
  uVar2 = read_first_word_10391cba(puVar1);
  return uVar2;
}
