/* @k10d build_message_from_param2 @ 0x104449ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Populates a message buffer at param_1 with fields derived from param_2 via lookup
 *   tables.
 * summary:
 *   Initializes a header at param_1+0x14 with 0x00 and 0x28. Calls seven helper functions
 *   on param_2, using their return values as indices into two lookup tables (DAT_105a1448
 *   and DAT_105a0c78) to fill bytes at offsets 0x16 through 0x1c. Sets a byte at 0x1d to 4
 *   and zeros the remaining bytes up to 0x23. Finally calls transmit_bytes_with_retry with
 *   the buffer and a pointer to the header.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_message_from_param2(int param_1,void *param_2)

{
  byte bVar2;
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x14) = 0;
  *(uint8_t *)(param_1 + 0x15) = 0x28;
  bVar2 = read_byte_at_offset_seven(param_2);
  *(uint8_t *)(param_1 + 0x16) = (&DAT_105a1448/*ROM*/)[bVar2];
  bVar2 = read_byte_at_offset_six(param_2);
  *(uint8_t *)(param_1 + 0x17) = (&DAT_105a1448/*ROM*/)[bVar2];
  bVar2 = read_byte_at_offset_5(param_2);
  *(uint8_t *)(param_1 + 0x18) = (&DAT_105a1448/*ROM*/)[bVar2];
  iVar1 = compute_checksum_byte(param_2);
  *(uint8_t *)(param_1 + 0x19) = (&DAT_105a1448/*ROM*/)[iVar1];
  bVar2 = read_byte_at_offset_three(param_2);
  *(uint8_t *)(param_1 + 0x1a) = (&DAT_105a1448/*ROM*/)[bVar2];
  bVar2 = read_byte_at_offset_two(param_2);
  *(uint8_t *)(param_1 + 0x1b) = (&DAT_105a1448/*ROM*/)[bVar2];
  iVar1 = read_first_word_1045c66c(param_2);
  *(uint8_t *)(param_1 + 0x1c) = (&DAT_105a0c78/*ROM*/)[iVar1];
  *(uint8_t *)(param_1 + 0x1d) = 4;
  *(uint8_t *)(param_1 + 0x1e) = 0;
  *(uint8_t *)(param_1 + 0x1f) = 0;
  *(uint8_t *)(param_1 + 0x20) = 0;
  *(uint8_t *)(param_1 + 0x21) = 0;
  *(uint8_t *)(param_1 + 0x22) = 0;
  *(uint8_t *)(param_1 + 0x23) = 0;
  transmit_bytes_with_retry(param_1,(uint8_t *)(param_1 + 0x14));
  return;
}
