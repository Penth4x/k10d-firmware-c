/* @k10d apply_param_table_to_target @ 0x10444ab8
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Validates a parameter block and, if a flag is clear, writes six table-indexed values
 *   into a target object.
 * summary:
 *   Calls read_eeprom_bytes_via_bitbang on param_1 and param_1+0x24 to validate/prepare the
 *   block. If the result is non-zero and bit 4 of the byte at param_1+0x25 is clear, it
 *   reads six 1-byte indices from param_1+0x26..0x2c, looks them up in the byte table at
 *   DAT_105a1548, and passes the resulting values (one with a +2000 offset, one with a 0
 *   second arg) to six small setter-like callees
 *   (store_clamped_byte_at_offset_7/638/62a/5ca/5b6/5b2) that all take param_2 as their
 *   first argument. If the flag bit is set, it returns 0. The specific camera subsystem is
 *   not identifiable from the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int apply_param_table_to_target(int param_1,uint16_t *param_2)

{
  int iVar1;
  
  iVar1 = read_eeprom_bytes_via_bitbang((int)(param_1),(uint8_t *)(param_1 + 0x24));
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x25) & 0x10) == 0) {
      store_clamped_byte_at_offset_7(param_2,(uint)(byte)(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x26)]);
      store_clamped_byte_at_offset_6(param_2,(uint)(byte)(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x27)]);
      store_capped_byte_at_offset(param_2,(uint)(byte)(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x28)]);
      clamp_and_store_byte_at_offset3(param_2,(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x2a)],0);
      set_clamped_byte_field(param_2,(uint)(byte)(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x2b)]);
      store_second_word(param_2,(byte)(&DAT_105a1548/*ROM*/)[*(byte *)(param_1 + 0x2c)] + 2000);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}
