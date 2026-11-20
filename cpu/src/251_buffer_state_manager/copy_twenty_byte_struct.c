/* @k10d copy_twenty_byte_struct @ 0x104e039a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 20-byte structure from param_1 into a local buffer via a series of field
 *   copies.
 * summary:
 *   Initializes a 32-byte local buffer to zero. Calls copy_bytes_if_capacity_ok with the
 *   buffer and a 0x20 size, then calls copy_bytes_forward eight times to copy specific
 *   4-byte and 2-byte fields from param_1 into the local buffer. The function appears to be
 *   a serialization or copy routine for a fixed-size data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_twenty_byte_struct(uint8_t *param_1,uint *param_2)

{
  struct {
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_20;
  uintptr_t sp;
  uint32_t local_28;
  uint32_t uStack_24;
  local_28 = 0;
  uStack_24 = 0;
  _cfg_20.uStack_20 = 0;
  _cfg_20.uStack_1c = 0;
  _cfg_20.uStack_18 = 0;
  _cfg_20.uStack_14 = 0;
  _cfg_20.uStack_10 = 0;
  _cfg_20.uStack_c = 0;
  copy_bytes_if_capacity_ok(param_2,&local_28,0x20,0);
  copy_bytes_forward(&local_28,param_1,4);
  copy_bytes_forward((uint8_t *)((int)&uStack_24 + 2),(uint8_t *)(param_1 + 4),(uint)(2));
  copy_bytes_forward(&_cfg_20.uStack_20,param_1 + 0xc,4);
  copy_bytes_forward(&_cfg_20.uStack_1c,param_1 + 0x14,4);
  copy_bytes_forward(&_cfg_20.uStack_18,param_1 + 0x18,4);
  copy_bytes_forward(&_cfg_20.uStack_14,param_1 + 0x1c,4);
  copy_bytes_forward(&_cfg_20.uStack_10,param_1 + 0x20,4);
  copy_bytes_forward(&_cfg_20.uStack_c,param_1 + 0x24,4);
  return;
}
