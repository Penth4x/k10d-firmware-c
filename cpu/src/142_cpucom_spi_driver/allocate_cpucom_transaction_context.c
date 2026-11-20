/* @k10d allocate_cpucom_transaction_context @ 0x10464fda
 * name: verified (structural evidence: decomp + emulator trace)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates and initialises a 0x48-byte CPUCOM transaction context.
 * summary:
 *   VERIFIED: decomp + emulator trace
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t *
allocate_cpucom_transaction_context(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x48), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    *param_1 = 0x105a7bf0/*ROM*/;
    param_1[1] = 0x105a7c80/*ROM*/;
    param_1[2] = 0;
    param_1[3] = param_2;
    param_1[4] = 0;
    param_1[5] = param_3;
    param_1[6] = 0;
    cls_1059e288_new(param_1 + 7);
    cls_105a2af8_new(param_1 + 0xd);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if (param_1[3] != 0) {
      uVar2 = heap_alloc_2(param_1[3]);
      param_1[2] = uVar2;
      pvVar3 = (void *)heap_alloc((void *)8);
      if (pvVar3 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        cls_105a2be0_new(pvVar3);
      }
      param_1[0xf] = (uintptr_t)(pvVar3);
      forward_three_args_to_helper_10459d64(pvVar3,1,0x1f);
      iVar1 = 0;
      if (0 < (int)param_1[3]) {
        do {
          *(uint8_t *)(param_1[2] + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)param_1[3]);
      }
    }
    if (param_1[5] != 0) {
      uVar2 = heap_alloc_2(param_1[5]);
      param_1[4] = uVar2;
      pvVar3 = (void *)heap_alloc((void *)8);
      if (pvVar3 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        cls_105a2be0_new(pvVar3);
      }
      param_1[0x10] = (uintptr_t)(pvVar3);
      forward_three_args_to_helper_10459d64(pvVar3,1,0x1f);
      iVar1 = 0;
      if (0 < (int)param_1[5]) {
        do {
          *(uint8_t *)(param_1[4] + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)param_1[5]);
      }
    }
    uVar2 = get_cpucom_default_context();
    param_1[0x11] = uVar2;
  }
  return param_1;
}
