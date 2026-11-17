/* @k10d write_28_bytes_via_callee @ 0x1052e74e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Copies 28 bytes from param_2 to param_1 by calling write_byte_at_offset_1052e70a for
 *   each byte.
 * summary:
 *   Iterates 7 times, advancing the source pointer by 0x10 (16 bytes) each loop. In each
 *   iteration, it extracts four bytes from the source (offsets 0, 4, 8, 12) and passes them
 *   individually to write_byte_at_offset_1052e70a along with an incrementing destination
 *   index. The total number of bytes processed is 28 (7 iterations * 4 bytes). The role of
 *   write_byte_at_offset_1052e70a is unknown, so the specific subsystem (e.g., EEPROM,
 *   sensor config) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_28_bytes_via_callee(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uStack_c;
  
  iVar1 = 0;
  uStack_c = 7;
  iVar2 = 0;
  do {
    write_byte_at_offset_1052e70a(param_1,iVar1,*(uint *)(param_2 + iVar2) & 0xff);
    write_byte_at_offset_1052e70a(param_1,iVar1 + 1,*(uint *)(param_2 + iVar2 + 4) & 0xff);
    write_byte_at_offset_1052e70a(param_1,iVar1 + 2,*(uint *)(param_2 + iVar2 + 8) & 0xff);
    write_byte_at_offset_1052e70a(param_1,iVar1 + 3,*(uint *)(param_2 + iVar2 + 0xc) & 0xff);
    iVar1 = iVar1 + 4;
    uStack_c = uStack_c + -1;
    iVar2 = iVar2 + 0x10;
  } while (-1 < uStack_c);
  return;
}
