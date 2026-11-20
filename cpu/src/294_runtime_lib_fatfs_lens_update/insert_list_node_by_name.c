/* @k10d insert_list_node_by_name @ 0x1053e794
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Parses a name string, finds a position in a linked list, allocates a node, and links it
 *   in.
 * summary:
 *   The function parses a string (param_3) using parse_delimited_token, stripping trailing
 *   dots and spaces. It traverses a linked list of entries (starting from param_1/param_2)
 *   to find the insertion point. It allocates a new node via parse_and_link_header_records,
 *   copies data, and links it into the list, updating the head or tail pointers as
 *   appropriate. It frees the previous tail node using free_linked_list_nodes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

int insert_list_node_by_name(void *param_1,int param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_29c [524];
  uint32_t uStack_90;
  uint32_t auStack_8c [7];
  uint8_t uStack_6d;
  uint32_t auStack_5c [8];
  uint8_t uStack_39;
  uint32_t uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar8 = (int *)auStack_29c;
  if ((*param_3 == '\\') || (*param_3 == '/')) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((uint)*(ushort *)((int)param_1 + 10) * 8 + param_2 + 0xc);
  }
  uStack_90 = (uStack_90 & ~(((uint64_t)0xff) << 16)) | ((((uint64_t)(0)) & ((uint64_t)0xff)) << 16);
  pcVar2 = (char *)parse_delimited_token(param_3,(void *)((int)&uStack_90 + 2),&iStack_20,&iStack_1c);
  if (iStack_20 != 0) {
    for (pcVar3 = (char *)((int)&uStack_90 + 1); *pcVar3 == '\0'; pcVar3 = pcVar3 + -1) {
    }
    while ((*pcVar3 == '.' || (*pcVar3 == ' '))) {
      *pcVar3 = '\0';
      if (pcVar3 == pcVar2) {
        return -0x208;
      }
      pcVar3 = pcVar3 + -1;
      if (*pcVar3 == '\0') {
        return -0x208;
      }
    }
  }
  do {
    if (iVar6 == 0) {
LAB_1053e870:
      uVar5 = *(uint32_t *)((int)param_1 + 0x28);
      uStack_24 = *(uint32_t *)((uint)*(ushort *)((int)param_1 + 10) * 8 + param_2 + 0x10);
LAB_1053e884:
      if (iStack_20 == 0) {
        if (iVar6 == 0) {
          *(uint32_t *)((uint)*(ushort *)((int)param_1 + 10) * 8 + param_2 + 0x10) = 0;
        }
        else {
          iVar4 = 0xc;
          do {
            iVar7 = iVar4 + -4;
            bVar1 = 3 < iVar4;
            *(uint32_t *)((int)auStack_5c + iVar4) = *(uint32_t *)(iVar7 + iVar6);
            iVar4 = iVar7;
          } while (bVar1 && iVar7 != 0);
          uStack_39 = 0x10;
          iVar4 = allocate_and_link_event_node_105382e4((int)param_1,0x16,&iStack_c,auStack_5c + 1);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(uint32_t *)(iVar6 + 0x14) = 0;
        }
        *(int *)((uint)*(ushort *)((int)param_1 + 10) * 8 + param_2 + 0xc) = iVar6;
      }
      else {
        *piVar8 = (int)&iStack_18;
        piVar8[1] = (int)&iStack_14;
        iVar4 = parse_and_link_header_records(param_1,pcVar2,iStack_20,uVar5,(int *)*piVar8,(int *)piVar8[1]);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = 0xc;
        do {
          iVar7 = iVar4 + -4;
          bVar1 = 3 < iVar4;
          *(uint32_t *)((int)&uStack_90 + iVar4) = *(uint32_t *)(iVar7 + iStack_14);
          iVar4 = iVar7;
        } while (bVar1 && iVar7 != 0);
        uStack_6d = 0x10;
        iVar4 = allocate_and_link_event_node_105382e4((int)param_1,0x16,&iStack_10,auStack_8c);
        if (iVar4 != 0) {
          free_linked_list_nodes((void *)(iStack_18));
          return iVar4;
        }
        *(int *)((uint)*(ushort *)((int)param_1 + 10) * 8 + param_2 + 0xc) = iStack_14;
        *(int *)(iStack_18 + 0x10) = iVar6;
        if (iVar6 == 0) {
          *(int *)(param_2 + (uint)*(ushort *)((int)param_1 + 10) * 8 + 0x10) = iStack_18;
        }
        else {
          *(int *)(iVar6 + 0x14) = iStack_18;
        }
      }
      free_linked_list_nodes((void *)(uStack_24));
      return 0;
    }
    if (iStack_1c == 0) {
      if (iVar6 != 0) {
        uVar5 = *(uint32_t *)(iVar6 + 0xc);
        uStack_24 = *(uint32_t *)(iVar6 + 0x14);
        goto LAB_1053e884;
      }
      goto LAB_1053e870;
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    iStack_1c = iStack_1c + -1;
  } while( true );
}
