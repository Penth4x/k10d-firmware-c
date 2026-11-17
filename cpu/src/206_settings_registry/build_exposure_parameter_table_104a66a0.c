/* @k10d build_exposure_parameter_table_104a66a0 @ 0x104a66a0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a 138-byte buffer and populates it with 17 sets of 4 exposure-related values
 *   derived from object state.
 * summary:
 *   The function allocates a 0x8a (138) byte heap block and initializes it via
 *   write_two_byte_value_104a7246. It then iterates 17 times (0x11), calculating four
 *   16-bit values per iteration using data from param_1's nested structures (offsets 0x20,
 *   0x24, 0x28, 0x2c, 0x38) and scaling factors from param_1+0x60. These values are written
 *   sequentially into the allocated buffer using write_two_byte_value_104a7246. Finally, it
 *   passes the buffer to copy_bytes_to_struct_field and frees it via heap_free_2. The
 *   calculations involve multiplications and divisions typical of exposure or metering
 *   parameter scaling.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a684e) overlaps instruction at (ram,0x104a684c)
    */

void build_exposure_parameter_table_104a66a0(int param_1,int param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  pvVar1 = (void *)heap_alloc_2(0x8a);
  write_two_byte_value_104a7246(param_1,pvVar1,0x11,1);
  iStack_10 = 2;
  uStack_20 = 0;
  iStack_1c = 4;
  iStack_18 = 6;
  iStack_14 = 8;
  do {
    iVar3 = uStack_20 * 2;
    uVar2 = (*(code *)0x104a7076/*ROM*/)
                      (param_1,*(uint16_t *)(*(int *)(*(int *)(param_1 + 100) + 0x20) + iVar3));
    write_two_byte_value_104a7246(param_1,(void *)((int)pvVar1 + iStack_10),uVar2,1);
    write_two_byte_value_104a7246(param_1,(void *)((int)pvVar1 + iStack_1c),
                 *(uint16_t *)(*(int *)(*(int *)(param_1 + 100) + 0x2c) + iVar3),1);
    write_two_byte_value_104a7246(param_1,(void *)((int)pvVar1 + iStack_18),
                 (int)((uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x24) + iVar3) *
                      (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x1a)) /
                 (int)(uint)**(ushort **)(*(int *)(param_1 + 100) + 0x38) >> 5 & 0xffff,1);
    write_two_byte_value_104a7246(param_1,(void *)((int)pvVar1 + iStack_14),
                 (int)((uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x28) + iVar3) *
                      (uint)*(ushort *)(*(int *)(param_1 + 0x60) + 0x20)) /
                 (int)(uint)*(ushort *)(*(int *)(*(int *)(param_1 + 100) + 0x38) + 6) >> 5 & 0xffff,
                 1);
    iStack_10 = iStack_10 + 8;
    iStack_14 = iStack_14 + 8;
    iStack_18 = iStack_18 + 8;
    iStack_1c = iStack_1c + 8;
    uStack_20 = uStack_20 + 1 & 0xffff;
  } while (uStack_20 < 0x11);
  copy_bytes_to_struct_field(param_2,pvVar1,*(uint32_t *)(param_2 + 4));
  heap_free_2((int)pvVar1);
  return;
}
