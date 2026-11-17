/* @k10d read_two_values_via_handle @ 0x104ed856
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads two values from an object handle, stores them via helper calls, and resets
 *   associated state fields.
 * summary:
 *   The function takes a handle at param_1+8 and performs a sequence of operations: it
 *   enables a flag, reads a value, stores it via a helper at 0x1053076c, reads a byte from
 *   a buffer pointed to by param_3, writes it back to the handle, disables the flag, and
 *   sets three fields to 0xfff. It then reads a second value and stores it via a helper at
 *   0x1053072c. The specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_values_via_handle(int param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  (*(code *)0x1044eb0a/*ROM*/)(*(uint32_t *)(param_1 + 8),1);
  uVar1 = (*(code *)0x1044ef82/*ROM*/)(*(uint32_t *)(param_1 + 8));
  (*(code *)0x1053076c/*ROM*/)(param_3,param_2,uVar1);
  (*(code *)0x1044eb56/*ROM*/)
            (*(uint32_t *)(param_1 + 8),*(uint8_t *)(*(int *)(param_3 + 4) + param_2));
  (*(code *)0x1044eba2/*ROM*/)(*(uint32_t *)(param_1 + 8),0);
  (*(code *)0x1044ebe2/*ROM*/)(*(uint32_t *)(param_1 + 8),0xfff);
  (*(code *)0x1044ebf2/*ROM*/)(*(uint32_t *)(param_1 + 8),0xfff);
  (*(code *)0x1044ec02/*ROM*/)(*(uint32_t *)(param_1 + 8),0xfff);
  uVar1 = (*(code *)0x1044ef8a/*ROM*/)(*(uint32_t *)(param_1 + 8));
  (*(code *)0x1053072c/*ROM*/)(param_3,param_2,uVar1);
  return;
}
