/* @k10d store_mode_flag_at_offset_0x2ac @ 0x1036a702
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores a boolean (result==3) into the object at offset 0x2ac.
 * summary:
 *   The function calls get_or_create_singleton_object_1036c796 and passes its result to
 *   read_array_element_bounded with argument 2. It then calls an unknown function at
 *   0x1036e97c and writes a 1-bit flag (true if the return value equals 3) into the memory
 *   location param_1 + 0x2ac. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mode_flag_at_offset_0x2ac(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_or_create_singleton_object_1036c796();
  read_array_element_bounded(uVar1,2);
  iVar2 = (*(code *)0x1036e97c/*ROM*/)();
  *(uint *)((int)param_1 + 0x2ac) = (uint)(iVar2 == 3);
  return;
}
