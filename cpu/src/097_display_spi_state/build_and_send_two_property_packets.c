/* @k10d build_and_send_two_property_packets @ 0x10420132
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Populates two stack buffers with values from virtual object methods and param_3, then
 *   sends each via write_ten_mmio_registers.
 * summary:
 *   The function initializes a stack buffer, then populates it by calling virtual methods
 *   on an object pointed to by param_1+0x30. It retrieves various properties and copies
 *   data from param_3. Based on param_2, it selects different data fields and virtual
 *   calls. Finally, it calls write_ten_mmio_registers twice, passing pointers to the
 *   constructed buffers and other object fields (param_1+0x28, param_1+0xe4/0xe8).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_two_property_packets(void *param_1,int param_2,uint32_t *param_3)

{
  struct {
    uint8_t uStack_38;
    uint8_t uStack_37;
    uint8_t uStack_36;
    uint16_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint16_t uStack_22;
    uint8_t uStack_20;
    uint8_t uStack_1f;
    uint8_t uStack_1e;
    uint16_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint16_t uStack_c;
    uint16_t uStack_a;
  } _cfg_38;
  int iVar1;
  uintptr_t sp;
  _cfg_38.uStack_38 = 0;
  _cfg_38.uStack_37 = 0;
  _cfg_38.uStack_36 = 0;
  _cfg_38.uStack_34 = 0;
  _cfg_38.uStack_30 = 0;
  _cfg_38.uStack_2c = 0;
  _cfg_38.uStack_28 = 0;
  _cfg_38.uStack_26 = 0;
  _cfg_38.uStack_24 = 0;
  _cfg_38.uStack_22 = 0;
  _cfg_38.uStack_20 = 0;
  _cfg_38.uStack_1f = 0;
  _cfg_38.uStack_1e = 0;
  _cfg_38.uStack_1c = 0;
  _cfg_38.uStack_18 = 0;
  _cfg_38.uStack_14 = 0;
  _cfg_38.uStack_10 = 0;
  _cfg_38.uStack_e = 0;
  _cfg_38.uStack_c = 0;
  _cfg_38.uStack_a = 0;
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_38 = (((vtbl_entry*)(iVar1))[72].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[72].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_37 = (((vtbl_entry*)(iVar1))[8].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[8].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_36 = (((vtbl_entry*)(iVar1))[9].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[9].adj);
  _cfg_38.uStack_34 = *(uint16_t *)(param_3 + 4);
  _cfg_38.uStack_30 = param_3[5];
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_28 = (((vtbl_entry*)(iVar1))[73].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[73].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_24 = (((vtbl_entry*)(iVar1))[77].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[77].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_22 = (((vtbl_entry*)(iVar1))[78].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[78].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_20 = (((vtbl_entry*)(iVar1))[72].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[72].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_1f = (((vtbl_entry*)(iVar1))[8].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[8].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_1e = (((vtbl_entry*)(iVar1))[9].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[9].adj);
  _cfg_38.uStack_1c = *(uint16_t *)(param_3 + 4);
  _cfg_38.uStack_18 = param_3[5];
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_10 = (((vtbl_entry*)(iVar1))[73].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[73].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_c = (((vtbl_entry*)(iVar1))[77].fn)
                       ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[77].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  _cfg_38.uStack_a = (((vtbl_entry*)(iVar1))[78].fn)
                       ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[78].adj);
  if (param_2 == 0) {
    _cfg_38.uStack_2c = *param_3;
    _cfg_38.uStack_14 = param_3[1];
    iVar1 = **(int **)((int)param_1 + 0x30);
    _cfg_38.uStack_26 = (((vtbl_entry*)(iVar1))[75].fn)
                          ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 600));
    iVar1 = **(int **)((int)param_1 + 0x30);
    _cfg_38.uStack_e = (((vtbl_entry*)(iVar1))[75].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 600));
  }
  else if (param_2 == 1) {
    _cfg_38.uStack_2c = param_3[2];
    _cfg_38.uStack_14 = param_3[3];
    iVar1 = **(int **)((int)param_1 + 0x30);
    _cfg_38.uStack_26 = (((vtbl_entry*)(iVar1))[76].fn)
                          ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[76].adj);
    iVar1 = **(int **)((int)param_1 + 0x30);
    _cfg_38.uStack_e = (((vtbl_entry*)(iVar1))[76].fn)
                         ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[76].adj);
  }
  write_ten_mmio_registers(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe4),&_cfg_38.uStack_38)
  ;
  write_ten_mmio_registers(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe8),&_cfg_38.uStack_20)
  ;
  return;
}
