/* @k10d evaluate_flash_readiness_flags @ 0x10511ce0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Sets two status flags in a control block based on virtual call results and helper
 *   function checks.
 * summary:
 *   The function initializes two byte flags at offsets 0x29 and 0x2f of the object passed
 *   in param_1. It performs a virtual call on an object pointer stored at offset 0x148,
 *   checking if the result is 0x09 or 0x0c. It then calls get_TVD and settings_getter,
 *   setting the first flag if the first helper returns a value less than 0x55 or the
 *   virtual call succeeded, and the second helper returns 0. It also calls
 *   get_sysparam_store_instance and get_sysparam_store_byte with arguments 0x19 and 0x15,
 *   setting the respective flags based on the return values and the result of get_SVD.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void evaluate_flash_readiness_flags(int param_1)

{
  bool bVar1;
  char cVar3;
  uint32_t uVar2;
  int iVar4;
  
  *(uint8_t *)(param_1 + 0x29) = 0;
  *(uint8_t *)(param_1 + 0x2f) = 0;
  iVar4 = *(int *)(param_1 + 0x148);
  cVar3 = (**(code **)(iVar4 + 0x14))((int)*(short *)(iVar4 + 0x10) + param_1 + 0x148,0);
  if ((cVar3 == '\t') || (cVar3 == '\f')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar4 = get_TVD((void *)(param_1 + 0x164));
  if ((iVar4 < 0x55) || (bVar1)) {
    cVar3 = settings_getter(param_1 + 0x2ac,0xc0);
    if (cVar3 == '\0') {
      *(uint8_t *)(param_1 + 0x29) = 1;
    }
  }
  uVar2 = get_sysparam_store_instance();
  iVar4 = get_sysparam_store_byte((void *)uVar2,0x19);
  if (iVar4 != 0) {
    *(uint8_t *)(param_1 + 0x29) = 1;
  }
  iVar4 = get_SVD((void *)(param_1 + 0x164));
  if (0x30 < iVar4) {
    uVar2 = get_sysparam_store_instance();
    iVar4 = get_sysparam_store_byte((void *)uVar2,0x15);
    if (iVar4 == 0) {
      *(uint8_t *)(param_1 + 0x2f) = 1;
    }
  }
  return;
}
