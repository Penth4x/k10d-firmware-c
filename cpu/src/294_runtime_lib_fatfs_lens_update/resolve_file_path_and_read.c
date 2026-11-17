/* @k10d resolve_file_path_and_read @ 0x1053adfc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Resolves a file path against a directory structure and reads the file contents into an
 *   output buffer.
 * summary:
 *   The function parses the input path (param_2), handling root directories and stripping
 *   trailing dots/spaces. It uses parse_delimited_token to resolve the file and
 *   allocate_lens_update_slot to access a directory structure. It then calls
 *   init_lens_update_context_1053b0ae to read file data into param_4 and
 *   process_0x20_byte_records to process the loaded data. The module context suggests this
 *   is part of a firmware loading sequence, but the function itself performs generic file
 *   path resolution and reading.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053af30) overlaps instruction at (ram,0x1053af2e)
    */

int resolve_file_path_and_read(int param_1,char *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uintptr_t sp;
  char local_2e3 [675];
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  
  *(uint8_t *)(param_4 + 9) = 0;
  if ((*param_2 == '\\') || (*param_2 == '/')) {
    piStack_3c = (int *)0x0;
  }
  else {
    iVar4 = allocate_lens_update_slot(&iStack_28);
    if (iVar4 != 0) {
      return iVar4;
    }
    piStack_3c = *(int **)((uint)*(ushort *)(param_1 + 10) * 8 + iStack_28 + 0xc);
  }
  piVar5 = piStack_3c;
  local_2e3[1] = 0;
  pcVar2 = (char *)parse_delimited_token(param_2,local_2e3 + 1,(int *)&uStack_34,&iStack_30);
  if (uStack_34 != 0) {
    for (pcVar3 = local_2e3; *pcVar3 == '\0'; pcVar3 = pcVar3 + -1) {
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
    if (piVar5 == (int *)0x0) {
LAB_1053afba:
      *param_3 = *(int *)(param_1 + 0x28);
      if (uStack_34 == 0) {
        *param_4 = *param_3;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = *param_3;
        *(uint8_t *)((int)param_4 + 0x1f) = 0x10;
        param_4[4] = 0;
        *(uint16_t *)(param_4 + 5) = 0;
        *(uint16_t *)((int)param_4 + 0x16) = 0;
        *(uint16_t *)(param_4 + 6) = 0;
        *(uint16_t *)((int)param_4 + 0x1a) = 0;
        *(uint16_t *)(param_4 + 7) = 0;
        *(uint8_t *)((int)param_4 + 0x1e) = 0;
        param_4[8] = 0xff;
        *(uint8_t *)(param_4 + 9) = 0;
        *(uint8_t *)(param_4 + 10) = 0;
        return -0x191;
      }
LAB_1053b098:
      while( true ) {
        if (uStack_34 < 2) {
          iVar4 = init_lens_update_context_1053b0ae(pcVar2,param_4);
          return iVar4;
        }
        iStack_38 = count_string_bytes(pcVar2);
        iVar4 = init_lens_update_context_1053b0ae(pcVar2,param_4);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = process_0x20_byte_records((void *)param_1,*param_3,(uint *)param_4);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((*(byte *)((int)param_4 + 0x1f) & 0x10) != 0x10) break;
        if (((param_5 != (int *)0x0) && (*param_5 == *param_4)) && (param_5[1] == param_4[1])) {
          return -0x334;
        }
        *param_3 = param_4[3];
        pcVar2 = pcVar2 + iStack_38 + 1;
        uStack_34 = uStack_34 - 1;
      }
      return -0x14;
    }
    if (iStack_30 == 0) {
      if (piVar5 != (int *)0x0) {
        *param_3 = piVar5[3];
        if (uStack_34 == 0) {
          iVar4 = dispatch_param2_command(param_1,piVar5,local_2e3 + 3);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = validate_block_sequence(local_2e3 + 3,piVar5[2],&uStack_2c);
          if (iVar4 != 0) {
            return -0x38f;
          }
          param_4[8] = 0xff;
          swap_lens_info_fields(local_2e3 + 3,piVar5[2],param_4);
          iVar4 = 0xc;
          do {
            iVar6 = iVar4 + -4;
            bVar1 = 3 < iVar4;
            *(uint32_t *)(iVar6 + (int)param_4) = *(uint32_t *)(iVar6 + (int)piVar5);
            iVar4 = iVar6;
          } while (bVar1 && iVar6 != 0);
          return -0x191;
        }
        if ((param_5 != (int *)0x0) && (piStack_3c != (int *)0x0)) {
          iStack_40 = *param_5;
          piVar5 = piStack_3c;
          do {
            if ((iStack_40 == *piVar5) && (param_5[1] == piVar5[1])) {
              return -0x334;
            }
            piVar5 = (int *)piVar5[4];
          } while (piVar5 != (int *)0x0);
        }
        goto LAB_1053b098;
      }
      goto LAB_1053afba;
    }
    piVar5 = (int *)piVar5[4];
    iStack_30 = iStack_30 + -1;
  } while( true );
}
