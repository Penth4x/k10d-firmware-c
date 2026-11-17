/* @k10d dispatch_mode_command_10446d8a @ 0x10446d8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dispatches a command based on param_2, initializing a virtual object or calling a
 *   handler on a stored pointer.
 * summary:
 *   If param_2 is 0, it calls get_or_init_sram_buffer_104277bc and read_table_entry_field
 *   to obtain an object pointer, stores it in param_1+0x20, and invokes a virtual method
 *   (slot 3) on that object with a calculated offset and 0x3f. If param_2 is 1, it calls
 *   init_object_field_via_helper with the value at param_1+8 and 0x1e. Returns 1 on
 *   success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_command_10446d8a(void *param_1,int param_2)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_2 == 0) {
    pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
    iVar3 = read_table_entry_field(pvVar2,0xe);
    *(int *)((int)param_1 + 0x20) = iVar3;
    if (*(int *)((int)param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)param_1 + 4) + 8;
    }
    (**(code **)(*(int *)(iVar3 + 8) + 0x1c))
              (iVar3 + 8 + (int)*(short *)(*(int *)(iVar3 + 8) + 0x18),iVar4,0x3f);
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    init_object_field_via_helper(*(int *)((int)param_1 + 8),0x1e);
    uVar1 = 1;
  }
  return uVar1;
}
