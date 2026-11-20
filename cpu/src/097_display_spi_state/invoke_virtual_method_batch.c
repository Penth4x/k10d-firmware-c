/* @k10d invoke_virtual_method_batch @ 0x1041fd74
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes ten virtual methods on an object and passes the results to a helper function.
 * summary:
 *   The function retrieves a pointer from param_1+0x30 and uses it to call ten virtual
 *   methods (slots 0x194 through 0x1dc) with adjusted 'this' pointers. It stores the return
 *   values in a local stack array, appends four constant values (0x4c, 0x4a, 0x4a, 0x1c),
 *   and passes this array to write_parameter_block_to_mmio twice with different parameters
 *   from param_1. The specific role of the virtual methods and the helper function is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_batch(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  uStack_2c = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_2c = (((vtbl_entry*)(iVar1))[50].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)*(short *)(iVar1 + 400));
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_2a = (((vtbl_entry*)(iVar1))[51].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[51].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_28 = (((vtbl_entry*)(iVar1))[52].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[52].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_26 = (((vtbl_entry*)(iVar1))[53].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[53].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_24 = (((vtbl_entry*)(iVar1))[54].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[54].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_22 = (((vtbl_entry*)(iVar1))[55].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[55].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_20 = (((vtbl_entry*)(iVar1))[56].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[56].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_1e = (((vtbl_entry*)(iVar1))[57].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[57].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_1c = (((vtbl_entry*)(iVar1))[58].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[58].adj);
  iVar1 = **(int **)((int)param_1 + 0x30);
  uStack_1a = (((vtbl_entry*)(iVar1))[59].fn)
                        ((int)*(int **)((int)param_1 + 0x30) + (int)((vtbl_entry*)(iVar1))[59].adj);
  uStack_18 = 0x4c;
  uStack_16 = 0x4a;
  uStack_14 = 0x4a;
  uStack_12 = 0x1c;
  write_parameter_block_to_mmio(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xec),&uStack_2c)
  ;
  write_parameter_block_to_mmio(*(uint32_t *)((int)param_1 + 0x28),*(uint32_t *)((int)param_1 + 0xf0),&uStack_2c)
  ;
  return;
}
