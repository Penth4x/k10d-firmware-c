/* @k10d configure_sensor_readout_params_104ce0a4 @ 0x104ce0a4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes sensor readout configuration bytes and a 16-entry table to a companion chip via
 *   SPI-like helpers.
 * summary:
 *   The function checks a mode field at offset 0x80 (values 1 or 2) to conditionally call
 *   setup helpers. It then writes several byte and short values from a state structure
 *   (offset 0x48) to a target device (offset 0x8c) using a series of small write functions
 *   (FUN_1051e4xx). It loops 16 times, calling compute_table_offset to compute a value and
 *   writing it via write_array_element_1051e4e2. Finally, it stores a success flag (1) or
 *   failure flag (0) at offset 0x214 of the input structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ce0b6) overlaps instruction at (ram,0x104ce0b4)
    */

uint32_t configure_sensor_readout_params_104ce0a4(int param_1)

{
  int iVar1;
  uint8_t uVar3;
  uint32_t uVar2;
  byte bVar4;
  uint32_t uVar5;
  
  if ((*(int *)(param_1 + 0x80) == 2) || (*(int *)(param_1 + 0x80) == 1)) {
    iVar1 = read_byte_at_offset_11(*(uint32_t *)(param_1 + 0x8c));
    if ((iVar1 != 0) && (iVar1 = read_byte_at_offset_10_1051e520(*(uint32_t *)(param_1 + 0x8c)), iVar1 == 0)) {
      return 0;
    }
    iVar1 = update_exposure_value_state(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x80));
    store_byte_at_offset_10(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb90))
    ;
    set_byte_at_offset_11(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb91))
    ;
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x48);
  uVar3 = read_byte_at_offset_one_1051e4f6(*(uint32_t *)(param_1 + 0x8c));
  *(uint8_t *)(iVar1 + 0xeb88) = uVar3;
  iVar1 = advance_grid_cursor_state(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x80));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    write_byte_at_offset_four(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb8e))
    ;
    bVar4 = 0;
    write_two_bytes_to_offset_six_1051e4ca(*(uint32_t *)(param_1 + 0x8c),*(short *)(*(int *)(param_1 + 0x48) + 0xeb8a) + 1);
    write_two_bytes_at_offset_eight_1051e4d0(*(uint32_t *)(param_1 + 0x8c),*(short *)(*(int *)(param_1 + 0x48) + 0xeb8c) + 1);
    store_byte_at_offset_10(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb90))
    ;
    set_byte_at_offset_11(*(uint32_t *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb91))
    ;
    do {
      uVar5 = *(uint32_t *)(param_1 + 0x8c);
      uVar2 = compute_table_offset(*(uint32_t *)(param_1 + 0x48),bVar4);
      write_array_element_1051e4e2(uVar5,bVar4,uVar2);
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x10);
    if (*(int *)(param_1 + 0x80) == 0) {
      set_byte_at_offset_five(*(int *)(param_1 + 0x8c),*(uint8_t *)(*(int *)(param_1 + 0x48) + 0xeb8f));
    }
    uVar2 = 1;
  }
  *(uint32_t *)(param_1 + 0x214) = uVar2;
  return 1;
}
