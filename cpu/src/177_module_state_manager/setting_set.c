/* @k10d setting_set @ 0x10484be4
 * name: verified (structural evidence: decomp: field_setter on obj+0x14 and *(obj+0xc); emulator: language OK writes 0xa9 -> +0x141)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a value to two fields of a struct via a helper function.
 * summary:
 *   The function calls field_setter twice. The first call targets the field at offset 0x14
 *   of the struct pointed to by param_1. The second call targets the field at the address
 *   stored in the field at offset 0xc of the struct. Both calls pass param_2 and param_3 as
 *   the second and third arguments respectively.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void setting_set(int param_1,int param_2,uint32_t param_3)

{
  field_setter(param_1 + 0x14,param_2,(uint8_t)param_3);
  field_setter(*(int *)(param_1 + 0xc),param_2,(uint8_t)param_3);
  return;
}
