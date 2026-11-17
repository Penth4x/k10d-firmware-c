/* @k10d dispatch_seven_byte_command @ 0x10501f34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Sends a 7-byte command sequence to two subsystems via a series of single-byte write
 *   calls.
 * summary:
 *   The function reads a 7-byte array from param_2 and dispatches each byte to two
 *   different target objects. It calls seven distinct functions at 0x10453xxx, passing the
 *   object pointer from *(param_1 + 0x14) and each byte of param_2. It then calls two
 *   additional functions at 0x104fa8xx, passing the object pointer from *(param_1 + 0x10)
 *   and the first two bytes of param_2. The specific roles of the target objects and the
 *   meaning of the command bytes are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_byte_command(int param_1,uint8_t *param_2)

{
  (*(code *)0x10453dea/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[2]);
  (*(code *)0x10453e32/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[2]);
  (*(code *)0x10453e7a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[2]);
  (*(code *)0x10453cc2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*param_2);
  (*(code *)0x10453d0e/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[1]);
  (*(code *)0x10453d5a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[3]);
  (*(code *)0x10453da2/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[4]);
  invoke_vtable_slot_by_flag_104fa86a(*(uint32_t *)(param_1 + 0x10),*param_2);
  invoke_vtable_slot_by_flag_104fa8a0(*(uint32_t *)(param_1 + 0x10),param_2[1]);
  return;
}
