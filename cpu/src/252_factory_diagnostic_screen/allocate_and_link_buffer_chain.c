/* @k10d allocate_and_link_buffer_chain @ 0x104e5752
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Allocates a chain of 800-byte buffers and stores their pointers in a struct at
 *   param_1+0x54.
 * summary:
 *   Calls get_lens_fw_update_status to obtain a base address. If non-zero, it iterates
 *   three times, allocating 800-byte blocks via copy_string_to_struct_offset and storing
 *   the resulting pointers at offsets 4, 8, and 12 from param_1+0x54. The function also
 *   contains switch statements that appear to be decompilation artifacts or early-exit
 *   paths, but the primary logic is the sequential buffer allocation and pointer storage.
 *   Returns 1 on success or 0 if the initial allocation check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e58c8) overlaps instruction at (ram,0x104e58c6)
    */

uint32_t allocate_and_link_buffer_chain(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_10;
  
  iVar1 = get_lens_fw_update_status();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iStack_10 = 1;
    iVar5 = 4;
    iVar6 = 800;
    uVar4 = 0;
    while( true ) {
      iVar7 = param_1 + 0x54;
      *(int *)(iVar7 + iVar5) = iVar1 + iVar6;
      if (uVar4 < 6) {
                    /* WARNING: Could not recover jumptable at 0x104e57cc. Too many branches */
        uVar2 = (**(code **)(&switchD_104e57cc__switchdataD_105c0a58 + uVar4 * 4))();
        return uVar2;
      }
      copy_string_to_struct_offset(iVar1 + iVar6,0);
      iVar3 = iVar1 + iVar6 + 800;
      *(int *)(iVar7 + iVar5 + 4) = iVar3;
      if (uVar4 + 1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x104e5826. Too many branches */
        uVar2 = (**(code **)(&switchD_104e5826__switchdataD_105c0a70 + (uVar4 + 1) * 4))();
        return uVar2;
      }
      copy_string_to_struct_offset(iVar3,0);
      iVar3 = iVar1 + iVar6 + 0x640;
      *(int *)(iVar7 + iVar5 + 8) = iVar3;
      if (uVar4 + 2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x104e587c. Too many branches */
        uVar2 = (**(code **)(&switchD_104e587c__switchdataD_105c0a88 + (uVar4 + 2) * 4))();
        return uVar2;
      }
      copy_string_to_struct_offset(iVar3,0);
      uVar4 = uVar4 + 3;
      iVar6 = iVar6 + 0x960;
      iStack_10 = iStack_10 + -1;
      if (iStack_10 < 0) break;
      iVar5 = iVar5 + 0xc;
    }
    uVar2 = 1;
  }
  return uVar2;
}
