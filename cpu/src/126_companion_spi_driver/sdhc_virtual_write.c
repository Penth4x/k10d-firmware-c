/* @k10d sdhc_virtual_write @ 0x10449252
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an SDHCI object to perform a write operation if the device
 *   is active.
 * summary:
 *   Checks a flag at offset 0xf0 in the object structure. If set, it retrieves the buffer
 *   port address via sdhc_buffer_port_addr and calls virtual slot 5 (offset 0x2c) on the
 *   vtable found at offset 0x11c. The call passes the adjusted object pointer, param_2, the
 *   buffer address, and param_3. Returns the result of the virtual call or 0 if inactive.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_virtual_write(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(char *)((int)param_1 + 0xf0) != '\0') {
    iVar2 = sdhc_buffer_port_addr(*(void **)((int)param_1 + 0x110));
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x11c) + 4);
    uVar1 = (((vtbl_entry*)(iVar3))[5].fn)
                      (*(int *)((int)param_1 + 0x11c) + (int)((vtbl_entry*)(iVar3))[5].adj,param_2,iVar2,
                       param_3);
  }
  return uVar1;
}
