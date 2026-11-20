/* @k10d write_ten_fields_to_subobject @ 0x1037295a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Copies ten fields from a parent struct into a sub-object at offset 0x4a8 via ten setter
 *   calls.
 * summary:
 *   Computes a sub-object pointer at param_1 + 0x4a8 and passes it as the first argument to
 *   ten consecutive setter functions (call_single_helper_with_two_args_1052d60c through
 *   set_byte_at_offset_0x20b). Each setter receives one byte or word field from the parent
 *   struct at offsets 0x5e, 0x65-0x6b, 0x7c, and 0x64 (100 decimal). The callees are
 *   unnamed, so the specific subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_ten_fields_to_subobject(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x4a8;
  call_single_helper_with_two_args_1052d60c((uint32_t *)(iVar1),(uint32_t *)(*(uint32_t *)(param_1 + 0x7c)));
  write_byte_to_offset_0x22d(iVar1,*(uint8_t *)(param_1 + 0x5e));
  write_byte_to_offset_0x205(iVar1,*(uint8_t *)(param_1 + 100));
  write_byte_to_offset_0x206(iVar1,*(uint8_t *)(param_1 + 0x65));
  write_byte_to_offset_0x207(iVar1,*(uint8_t *)(param_1 + 0x66));
  write_byte_to_offset_0x208(iVar1,*(uint8_t *)(param_1 + 0x67));
  write_byte_to_offset_0x204(iVar1,*(uint8_t *)(param_1 + 0x68));
  write_byte_to_offset_0x20a(iVar1,*(uint8_t *)(param_1 + 0x69));
  write_byte_to_offset_0x209(iVar1,*(uint8_t *)(param_1 + 0x6a));
  set_byte_at_offset_0x20b(iVar1,*(uint8_t *)(param_1 + 0x6b));
  return;
}
