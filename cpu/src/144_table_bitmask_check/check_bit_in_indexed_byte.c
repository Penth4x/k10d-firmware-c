/* @k10d check_bit_in_indexed_byte @ 0x104673fa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Tests whether a specific bit (param_3) is set in a byte located at an offset computed
 *   from a base pointer and an index.
 * summary:
 *   The function dereferences a pointer at param_1 + 0x18 to get a stride, multiplies it by
 *   9, adds param_2, and reads a byte from that location. It then XORs this byte with
 *   param_3 and checks if the result has any bits set that are also set in param_3. This is
 *   a standard bit-test idiom: it returns true if the bits specified by param_3 are set in
 *   the target byte. The stride of 9 suggests the data structure might be an array of
 *   9-byte records or a packed bitfield structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_bit_in_indexed_byte(int param_1,int param_2,uint param_3)

{
  return ((*(byte *)(param_1 + *(int *)(param_1 + 0x18) * 9 + param_2) ^ param_3) & param_3) != 0;
}
