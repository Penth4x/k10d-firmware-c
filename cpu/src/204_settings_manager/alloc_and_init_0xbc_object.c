/* @k10d alloc_and_init_0xbc_object @ 0x1049b1cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1049b1e8) overlaps instruction at (ram,0x1049b1e6)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloc_and_init_0xbc_object(void *param_1)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint8_t *puVar2;
  uint8_t auStack_18 [16];
  
  puVar2 = auStack_18;
  puVar1 = auStack_18;
  if ((param_1 != (void *)0x0) ||
     (param_1 = (void *)heap_alloc((void *)0xbc), puVar2 = puVar1, param_1 != (void *)0x0)) {
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[0xb] = 0;
    puVar2[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)((int)param_1 + 0xb4),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar2[3],puVar2[7],
                 puVar2[0xb],puVar2[0xf]);
    initialize_struct_defaults_1049b250(param_1);
  }
  return (int)param_1;
}
