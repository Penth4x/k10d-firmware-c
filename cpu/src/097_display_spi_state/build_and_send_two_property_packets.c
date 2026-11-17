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
  int iVar1;
  uintptr_t sp;
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
  
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_38 = (**(code **)(iVar1 + 0x244))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x240));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_37 = (**(code **)(iVar1 + 0x44))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x40));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_36 = (**(code **)(iVar1 + 0x4c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x48));
  uStack_34 = *(uint16_t *)(param_3 + 4);
  uStack_30 = param_3[5];
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_28 = (**(code **)(iVar1 + 0x24c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x248));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_24 = (**(code **)(iVar1 + 0x26c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x268));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_22 = (**(code **)(iVar1 + 0x274))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x270));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_20 = (**(code **)(iVar1 + 0x244))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x240));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_1f = (**(code **)(iVar1 + 0x44))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x40));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_1e = (**(code **)(iVar1 + 0x4c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x48));
  uStack_1c = *(uint16_t *)(param_3 + 4);
  uStack_18 = param_3[5];
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_10 = (**(code **)(iVar1 + 0x24c))
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x248));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_c = (**(code **)(iVar1 + 0x26c))
                       ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x268));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_a = (**(code **)(iVar1 + 0x274))
                       ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x270));
  if (param_2 == 0) {
    uStack_2c = *param_3;
    uStack_14 = param_3[1];
    iVar1 = **(int **)((int)param_1 + 0x30);
    uStack_26 = (**(code **)(iVar1 + 0x25c))
                          ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 600));
    iVar1 = **(int **)((int)param_1 + 0x30);
    uStack_e = (**(code **)(iVar1 + 0x25c))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 600));
  }
  else if (param_2 == 1) {
    uStack_2c = param_3[2];
    uStack_14 = param_3[3];
    iVar1 = **(int **)((int)param_1 + 0x30);
    uStack_26 = (**(code **)(iVar1 + 0x264))
                          ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x260));
    iVar1 = **(int **)((int)param_1 + 0x30);
    uStack_e = (**(code **)(iVar1 + 0x264))
                         ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 0x260));
  }
  write_ten_mmio_registers(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe4),&uStack_38)
  ;
  write_ten_mmio_registers(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xe8),&uStack_20)
  ;
  return;
}
