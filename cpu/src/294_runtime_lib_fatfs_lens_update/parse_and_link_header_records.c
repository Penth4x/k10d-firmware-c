/* @k10d parse_and_link_header_records @ 0x1053e984
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int parse_and_link_header_records(void *param_1,char *param_2,int param_3,uint param_4,int *param_5,int *param_6)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  uintptr_t sp;
  uint auStack_64 [8];
  byte bStack_41;
  uint *puStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_4;
  
  *param_5 = 0;
  *param_6 = 0;
  uStack_24 = param_4;
  iStack_4 = param_3;
  while( true ) {
    if (iStack_4 == 0) {
      return 0;
    }
    iStack_28 = count_string_bytes(param_2);
    puVar4 = auStack_64 + 1;
    iVar2 = init_lens_update_context_1053b0ae(param_2,puVar4);
    puStack_2c = puVar4;
    if ((iVar2 != 0) || (iVar2 = process_0x20_byte_records(param_1,uStack_24,puVar4), iVar2 != 0)) break;
    if ((bStack_41 & 0x10) != 0x10) {
      iVar2 = -0x14;
      break;
    }
    pvVar3 = (void *)alloc_pool2_block((void *)0x18);
    if (pvVar3 == 0) {
      iVar2 = -0xc;
      break;
    }
    fill_byte_array(pvVar3,0,0x18);
    iVar2 = 0xc;
    do {
      iVar5 = iVar2 + -4;
      bVar1 = 3 < iVar2;
      *(uint32_t *)(iVar5 + (int)pvVar3) = *(uint32_t *)((int)auStack_64 + iVar2);
      iVar2 = iVar5;
    } while (bVar1 && iVar5 != 0);
    *(uint *)((int)pvVar3 + 0xc) = auStack_64[4];
    if (*param_5 == 0) {
      *param_5 = (int)pvVar3;
    }
    else {
      *(int *)((int)pvVar3 + 0x10) = *param_6;
      *(void **)(*param_6 + 0x14) = pvVar3;
    }
    *param_6 = (int)pvVar3;
    uStack_24 = auStack_64[4];
    param_2 = param_2 + iStack_28 + 1;
    iStack_4 = iStack_4 + -1;
  }
  free_linked_list_nodes((void *)(*param_5));
  return iVar2;
}
