/* @k10d write_byte_at_offset_104de518 @ 0x104de518
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Writes a zero byte to a memory location computed from a base pointer and an offset.
 * summary:
 *   The function takes a pointer to a two-word structure (param_1) and an integer
 *   (param_2). It calls an external function at 0x1054534e with param_2, the first word of
 *   the structure, and the second word. It then writes a zero byte to the memory address
 *   formed by adding the second word (offset) to param_2. The role of the external call is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_at_offset_104de518(uint32_t *param_1,int param_2)

{
  (*(code *)0x1054534e/*ROM*/)(param_2,*param_1,param_1[1]);
  *(uint8_t *)(param_2 + param_1[1]) = 0;
  return;
}
