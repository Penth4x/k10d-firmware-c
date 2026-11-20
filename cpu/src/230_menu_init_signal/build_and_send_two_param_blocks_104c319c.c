/* @k10d build_and_send_two_param_blocks_104c319c @ 0x104c319c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Constructs two parameter blocks from two input structs and sends them to a callee.
 * summary:
 *   The function reads fields from param_2 and param_3, zero-initializes a local buffer,
 *   and populates it with values derived from the inputs (including right-shifted 16-bit
 *   fields and pointer values). It calls initialize_event_queue_entry_104c3a5c once with
 *   the first block, then reuses the buffer to call
 *   dispatch_event_via_virtual_slot_104c39dc twice with updated pointer fields from the
 *   inputs. Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_send_two_param_blocks_104c319c(int param_1,void *param_2,void *param_3)

{
  struct {
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint16_t uStack_4c;
    uint16_t uStack_4a;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint16_t uStack_3e;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint16_t uStack_30;
    uint16_t uStack_2e;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint16_t uStack_20;
    uint16_t uStack_1e;
    uint16_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint16_t uStack_c;
  } _cfg_54;
  uintptr_t sp;
  _cfg_54.uStack_44 = 0;
  _cfg_54.uStack_42 = 0;
  _cfg_54.uStack_40 = 0;
  _cfg_54.uStack_3e = 0;
  _cfg_54.uStack_54 = *(uint32_t *)((int)param_2 + 4);
  _cfg_54.uStack_50 = *(uint32_t *)((int)param_3 + 4);
  _cfg_54.uStack_4c = *(uint16_t *)((int)param_3 + 0x10);
  _cfg_54.uStack_4a = *(uint16_t *)((int)param_3 + 0x12);
  _cfg_54.uStack_48 = *(uint16_t *)((int)param_2 + 0x14);
  _cfg_54.uStack_46 = *(uint16_t *)((int)param_3 + 0x14);
  initialize_event_queue_entry_104c3a5c(param_1,&_cfg_54.uStack_54,1);
  _cfg_54.uStack_28 = 0;
  _cfg_54.uStack_26 = 0;
  _cfg_54.uStack_24 = 0;
  _cfg_54.uStack_22 = 0;
  _cfg_54.uStack_20 = 0;
  _cfg_54.uStack_10 = 0;
  _cfg_54.uStack_c = 0;
  _cfg_54.uStack_3c = 1;
  _cfg_54.uStack_30 = (uint16_t)((int)(uint)*(ushort *)((int)param_3 + 0x10) >> 1);
  _cfg_54.uStack_2e = (uint16_t)((int)(uint)*(ushort *)((int)param_3 + 0x12) >> 1);
  _cfg_54.uStack_2c = (uint16_t)((int)(uint)*(ushort *)((int)param_2 + 0x14) >> 1);
  _cfg_54.uStack_2a = (uint16_t)((int)(uint)*(ushort *)((int)param_3 + 0x14) >> 1);
  _cfg_54.uStack_18 = 0xffffffff;
  _cfg_54.uStack_1e = 0x20;
  _cfg_54.uStack_1c = 0x20;
  _cfg_54.uStack_14 = 0xaaaaaaaa;
  _cfg_54.uStack_38 = *(uint32_t *)((int)param_2 + 8);
  _cfg_54.uStack_34 = *(uint32_t *)((int)param_3 + 8);
  dispatch_event_via_virtual_slot_104c39dc(param_1,&_cfg_54.uStack_3c,1);
  _cfg_54.uStack_38 = *(uint32_t *)((int)param_2 + 0xc);
  _cfg_54.uStack_34 = *(uint32_t *)((int)param_3 + 0xc);
  dispatch_event_via_virtual_slot_104c39dc(param_1,&_cfg_54.uStack_3c,1);
  return 1;
}
