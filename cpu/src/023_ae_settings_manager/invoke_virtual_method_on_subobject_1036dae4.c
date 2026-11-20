/* @k10d invoke_virtual_method_on_subobject_1036dae4 @ 0x1036dae4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual function call on an object pointer stored at offset 0x70 of the
 *   input structure.
 * summary:
 *   The function retrieves a pointer from param_1 + 0x70 and uses it to perform a virtual
 *   method call. The specific virtual slot is determined by the offset 0xdc (slot 22) and
 *   the this-adjustment is read from offset 0xd8 of the vtable. It passes three arguments
 *   from param_1 (offsets 0x24c, 0x250, 0x252) to the called method. No specific camera
 *   subsystem behavior is identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_subobject_1036dae4(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x70);
  (((vtbl_entry*)(iVar1))[27].fn)
            ((int)*(int **)(param_1 + 0x70) + (int)((vtbl_entry*)(iVar1))[27].adj,
             *(uint32_t *)(param_1 + 0x24c),*(uint16_t *)(param_1 + 0x250),
             *(uint16_t *)(param_1 + 0x252));
  return;
}
