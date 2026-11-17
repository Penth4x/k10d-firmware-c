/* @k10d write_four_bytes_to_fixed_address @ 0x1051a300
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes 4 bytes from a source pointer to a fixed destination address via a helper.
 * summary:
 *   The function calls copy_bytes_to_struct_field with param_2 as the source, the constant
 *   address 0x105d6480 as the destination, and 4 as the length. It then returns
 *   immediately. The specific role of the destination address and the nature of the data
 *   are not determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_bytes_to_fixed_address(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105d6480/*ROM*/,4);
  return;
}
