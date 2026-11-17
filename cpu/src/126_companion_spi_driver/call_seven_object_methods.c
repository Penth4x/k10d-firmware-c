/* @k10d call_seven_object_methods @ 0x10447c42
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a direct function and six indirect function pointers on a sub-object at offset
 *   0x165.
 * summary:
 *   The function takes a base pointer, adds 0x165 to it, and passes this derived pointer to
 *   a sequence of seven calls. The first call is to read_first_byte_1044ba24, followed by
 *   five indirect calls through function pointers located at 0x1044ba28, 0x1044ba2c,
 *   0x1044ba30, 0x1044ba36, and then two more direct calls to
 *   compute_value_from_high_nibble and get_low_three_bits. This pattern resembles a
 *   constructor or initialization routine that sets up or activates a specific component
 *   within a larger structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_seven_object_methods(uint8_t *param_1)

{
  uint8_t *puVar1;
  
  puVar1 = param_1 + 0x165;
  read_first_byte_1044ba24(puVar1);
  (*(code *)0x1044ba28/*ROM*/)(puVar1);
  (*(code *)0x1044ba2c/*ROM*/)(puVar1);
  (*(code *)0x1044ba30/*ROM*/)(puVar1);
  (*(code *)0x1044ba36/*ROM*/)(puVar1);
  compute_value_from_high_nibble((int)puVar1);
  get_low_three_bits((int)puVar1);
  return;
}
