/* @k10d check_and_log_exposure_params @ 0x104177be
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Validates exposure-related fields in a struct and logs them if conditions are met.
 * summary:
 *   The function checks several integer fields at offsets 0x14d0 and 0x14d4 within the
 *   object pointed to by param_1. If the values are valid (non-zero and 0x14d4 > 0x14d0),
 *   it calls helper functions call_single_helper_104185ec and get_sysparam_store_byte. If
 *   those succeed, it writes two values (from 0x14d0 and 0x14d4) to a buffer at
 *   param_1+0x84+0x880 using copy_stream_bytes_into_struct, bracketed by calls to
 *   append_bytes_to_ring_buffer with string pointers. This pattern suggests logging or
 *   recording exposure parameters (likely EV or ISO values given the K10D context).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_log_exposure_params(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((((*(char *)(param_1 + 0x14c8) == '\0') ||
       ((*(code *)0x1050b0ba/*ROM*/)(param_1 + 0x14bc), *(int *)(param_1 + 0x14d0) == 0)) ||
      (*(int *)(param_1 + 0x14d4) == 0)) ||
     (*(int *)(param_1 + 0x14d4) <= *(int *)(param_1 + 0x14d0))) {
    if (*(int *)(param_1 + 0x1564) == 1) {
      iVar1 = init_object_buffers_and_dispatch(param_1,0);
    }
    else {
      iVar1 = allocate_and_init_subobject_1041792e(__frv_reg_unset(4));
    }
    if (iVar1 != 0) {
      iVar1 = call_single_helper_104185ec();
      if (iVar1 != 0) {
        uVar2 = get_sysparam_store_instance();
        iVar1 = get_sysparam_store_byte((uint8_t *)(uVar2),(uint32_t)(0x18));
        if ((iVar1 != 0) &&
           (iVar1 = *(int *)(param_1 + 0x84) + 0x880,
           *(char *)(*(int *)(param_1 + 0x84) + 0x8c0) != '\0')) {
          append_bytes_to_ring_buffer(iVar1,0x1059c70c/*ROM*/,0);
          copy_stream_bytes_into_struct((int)(iVar1),(void *)(*(uint32_t *)(param_1 + 0x14d0)),(int)(1),(void *)(0));
          copy_stream_bytes_into_struct((int)(iVar1),(void *)(*(uint32_t *)(param_1 + 0x14d4)),(int)(1),(void *)(0));
          append_bytes_to_ring_buffer(iVar1,0x1059c72c/*ROM*/,0);
        }
      }
      *(uint32_t *)(param_1 + 0x14e0) = 0;
      return 1;
    }
  }
  check_kernel_call_success_10459fea();
  return 0;
}
