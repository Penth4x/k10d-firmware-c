/* @k10d invoke_virtual_slot_10_10419b66 @ 0x10419b66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 10 of an object referenced at offset 0x4c of the input structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x4c to obtain an object pointer. It
 *   then performs a virtual call to slot 10 (offset 0x6c) of that object, passing the
 *   object pointer adjusted by the this-adjustment value stored at offset 0x68. The return
 *   value of the virtual call is returned to the caller. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_10_10419b66(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x4c);
  uVar1 = (**(code **)(iVar2 + 0x6c))
                    ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar2 + 0x68));
  return uVar1;
}
