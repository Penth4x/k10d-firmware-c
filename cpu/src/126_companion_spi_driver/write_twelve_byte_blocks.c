/* @k10d write_twelve_byte_blocks @ 0x10436b78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 0x1e 12-byte chunks from param_2 into param_1 via a byte-write helper.
 * summary:
 *   Loops 0x1e times, advancing a source pointer by 0xc each iteration. For each chunk it
 *   calls write_byte_to_buffer_offset three times with consecutive destination offsets and
 *   the low byte of each 4-byte word from param_2. The destination offset (iVar1)
 *   increments by 3 per chunk. The role of write_byte_to_buffer_offset and the DAT globals
 *   are not provided, so the specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_twelve_byte_blocks(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uStack_c;
  
  iVar1 = 0;
  uStack_c = 0x1e;
  iVar2 = 0;
  do {
    write_byte_to_buffer_offset(param_1,iVar1,*(uint *)(param_2 + iVar2) & 0xff);
    write_byte_to_buffer_offset(param_1,iVar1 + 1,*(uint *)(param_2 + iVar2 + 4) & 0xff);
    write_byte_to_buffer_offset(param_1,iVar1 + 2,*(uint *)(param_2 + iVar2 + 8) & 0xff);
    iVar1 = iVar1 + 3;
    uStack_c = uStack_c + -1;
    iVar2 = iVar2 + 0xc;
  } while (-1 < uStack_c);
  return;
}
