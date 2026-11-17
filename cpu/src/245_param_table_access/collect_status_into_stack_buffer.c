/* @k10d collect_status_into_stack_buffer @ 0x104d6c22
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Gathers multiple status values into a local buffer and passes them to a processing
 *   function.
 * summary:
 *   The function calculates an offset (param_1 + 0x1990) and calls several helper functions
 *   to retrieve various status or configuration values. It stores these values, along with
 *   a boolean flag derived from another call, into a local stack buffer. Finally, it passes
 *   the original parameters, a value from param_1 + 0x2b14, and the collected buffer
 *   contents to configure_object_with_seven_params_104d6aea, returning its result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_status_into_stack_buffer(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_50 [28];
  
  puVar11 = auStack_50;
  iVar10 = param_1 + 0x1990;
  (*(code *)0x104d8aec/*ROM*/)(iVar10);
  iVar1 = (*(code *)0x104d5a14/*ROM*/)();
  iVar9 = *(int *)(param_1 + 0x2b14);
  uVar2 = (*(code *)0x104d8aca/*ROM*/)(iVar10);
  uVar3 = (*(code *)0x104d8b18/*ROM*/)(iVar10);
  add_offset_to_pointer_104d8ad0(iVar10);
  uVar4 = (*(code *)0x104d642e/*ROM*/)();
  (*(code *)0x104d8ad8/*ROM*/)(iVar10);
  uVar5 = (*(code *)0x104d5c82/*ROM*/)();
  (*(code *)0x104d8ae2/*ROM*/)(iVar10);
  uVar6 = (*(code *)0x104d545a/*ROM*/)();
  (*(code *)0x104d8b22/*ROM*/)(iVar10);
  uVar7 = (*(code *)0x104d5e94/*ROM*/)();
  uVar8 = (*(code *)0x104d8afc/*ROM*/)(iVar10);
  puVar11[3] = iVar1 == 2;
  *(uint32_t *)(puVar11 + 0x18) = uVar8;
  *(uint32_t *)(puVar11 + 4) = uVar3;
  *(uint32_t *)(puVar11 + 8) = uVar4;
  *(uint32_t *)(puVar11 + 0xc) = uVar5;
  *(uint32_t *)(puVar11 + 0x10) = uVar6;
  *(uint32_t *)(puVar11 + 0x14) = uVar7;
  uVar2 = configure_object_with_seven_params_104d6aea(param_1,param_2,iVar9,uVar2,puVar11[3],*(void **)(puVar11 + 4),
                       *(uint32_t *)(puVar11 + 8),*(uint32_t *)(puVar11 + 0xc),
                       *(uint32_t *)(puVar11 + 0x10),*(uint32_t *)(puVar11 + 0x14),
                       *(uint32_t *)(puVar11 + 0x18));
  return uVar2;
}
