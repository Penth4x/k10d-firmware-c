/* @k10d store_value_if_status_in_set @ 0x10393104
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores the return of get_or_create_singleton_object_10395bd6 at offset 0xf0 of param_1
 *   when read_field_at_offset_0xf4 returns one of four specific codes.
 * summary:
 *   Calls read_field_at_offset_0xf4 to obtain a status code. If the code is 0x5060003,
 *   0x5060013, 0x5060022, or 0x5060031, it calls get_or_create_singleton_object_10395bd6
 *   and writes the result to the field at offset 0xf0 of the object pointed to by param_1.
 *   Otherwise, it performs no write. The caller is dispatch_object_event_by_type_10392f08.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_if_status_in_set(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = read_field_at_offset_0xf4(__frv_reg_unset(4));
  if ((((iVar1 == 0x5060003) || (iVar1 == 0x5060013)) || (iVar1 == 0x5060022)) ||
     (iVar1 == 0x5060031)) {
    uVar2 = get_or_create_singleton_object_10395bd6();
    *(uint32_t *)((int)param_1 + 0xf0) = uVar2;
  }
  return;
}
