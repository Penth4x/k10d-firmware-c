/* @k10d toggle_pointer_field_flags @ 0x105004a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x14 of param_1 and issues a sequence of five calls to
 *   manipulate values at offsets 0x10 and 0x11 of that pointed-to structure.
 * summary:
 *   The function dereferences param_1 + 0x14 to obtain a base pointer. It then calls four
 *   distinct helper functions (0x10452b14, 0x104534a8, 0x104530f0, 0x10453156) with
 *   arguments derived from that base pointer and small integer constants (0, 1, 0x10,
 *   0x11). The pattern suggests initializing or resetting specific fields or flags within a
 *   structure located at the address stored in param_1 + 0x14. No camera-specific subsystem
 *   is identifiable from the mechanical operations alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_pointer_field_flags(int param_1)

{
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x104534a8/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  set_bit_14_in_ram40030400(*(int *)(param_1 + 0x14) + 0x10,0);
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,1);
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,0);
  return;
}
