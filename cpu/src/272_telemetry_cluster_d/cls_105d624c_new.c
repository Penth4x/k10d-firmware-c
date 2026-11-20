/* @k10d cls_105d624c_new @ 0x10513c30
 * name: verified (structural evidence: heap_alloc(0x358) when NULL; stores vtable 0x105d624c; returns param_1)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d624c (vtable 0x105d624c, 0x358 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x358) when NULL; stores vtable 0x105d624c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d624c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x358), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_1059e458_new(param_1 + 2);
    cls_1059e408_new(param_1 + 3);
    cls_105a2c1c_new(param_1 + 5);
    cls_105a2ab0_new(param_1 + 10);
    *param_1 = 0x105d624c/*ROM*/;
    param_1[1] = 0x105d62a4/*ROM*/;
    param_1[2] = 0x105d62bc/*ROM*/;
    param_1[3] = 0x105d62dc/*ROM*/;
    param_1[9] = 0x105d6304/*ROM*/;
    param_1[0xc] = 0x105d631c/*ROM*/;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(uint8_t *)(param_1 + 0x1c) = 1;
    param_1[0x1d] = 0;
    get_lens_fw_update_status((int)param_1 + 0x78, 0xa, 0xc, (code *)alloc_and_zero_small_struct_10516a66);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    get_lens_fw_update_status((int)param_1 + 0xf8, 0xa, 0xc, (code *)alloc_and_zero_small_struct_10516a66);
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    get_lens_fw_update_status((int)param_1 + 0x178, 0xa, 0xc, (code *)alloc_and_zero_small_struct_10516a66);
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0xa6] = 0;
    *(uint8_t *)(param_1 + 0xa7) = 0;
    *(uint8_t *)((int)param_1 + 0x29d) = 0;
    *(uint8_t *)((int)param_1 + 0x29e) = 0;
    *(uint8_t *)((int)param_1 + 0x29f) = 1;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    *(uint8_t *)(param_1 + 0xae) = 0;
    param_1[0xaf] = 0;
    *(uint8_t *)(param_1 + 0xb0) = 0;
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    param_1[0xb1] = 0;
    initialize_lens_update_object(param_1 + 0xb2,0x20);
    init_28_byte_struct(param_1 + 0xba);
    init_28_byte_struct(param_1 + 0xc1);
    zero_initialize_struct_fields(param_1 + 0xae);
    param_1[200] = 250000;
    param_1[0xc9] = 0;
    param_1[0xce] = (uintptr_t)(&DAT_1059e4d0/*ROM*/);
    param_1[0xca] = 0;
    param_1[0xcb] = 0;
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
    param_1[0xcf] = 0;
    param_1[0xd0] = 0;
    cls_105a2be0_new(param_1 + 0xd1);
    cls_105a2af8_new(param_1 + 0xd3);
    *(uint8_t *)(param_1 + 0xd5) = 0;
    *(uint8_t *)((int)param_1 + 0x355) = 0;
    iVar2 = 7;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x1f8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x1fc) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x200) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x204) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x208) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
  }
  return param_1;
}
