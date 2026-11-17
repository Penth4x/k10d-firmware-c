/* @k10d write_zero_to_object_offset_bc @ 0x103702e2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * purpose:
 *   Writes a zero value to the field at offset 0xbc of the object passed in param_1.
 * summary:
 *   The function sets a local variable to 0 and calls eventflag_wai_flg with a pointer to
 *   param_1 + 0xbc, the value 2, the address of the local zero, and the global
 *   _DAT_105a2af0. It appears to be a small setter or initializer for a specific field
 *   within a larger structure. The role of the callee eventflag_wai_flg is unknown, but the
 *   pattern suggests a standard field update operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_zero_to_object_offset_bc(int param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 0xbc),2,&uStack_c,_DAT_105a2af0/*ROM*/);
  return;
}
