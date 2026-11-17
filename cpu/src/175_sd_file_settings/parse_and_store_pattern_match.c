/* @k10d parse_and_store_pattern_match @ 0x10481352
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10481400) overlaps instruction at (ram,0x104813fe)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int parse_and_store_pattern_match(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar5;
  uint32_t uVar4;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_254 [16];
  uint8_t auStack_228 [512];
  byte bStack_28;
  byte abStack_27 [12];
  byte bStack_1b;
  ushort uStack_1a;
  ushort uStack_18;
  int iStack_14;
  uint16_t auStack_10 [4];
  
  puVar7 = auStack_254;
  iVar6 = 0;
  do {
    bVar5 = store_result_and_check_zero_104800da(*(int *)(param_1 + 8),param_2[1],auStack_228);
    if (!bVar5) {
      return iVar6;
    }
    if ((bStack_1b & 8) == 0) {
      if (*param_2 == 0) {
        if ((bStack_1b & 0x10) == 0) {
LAB_104813ea:
          if (bStack_28 != 0x2e) {
            pbVar2 = (byte *)(param_2 + 2);
            bVar5 = true;
            pbVar3 = &bStack_28;
            while (bVar1 = *pbVar2, bVar1 == 0x3f) {
code_r0x10481476:
              pbVar2 = pbVar2 + 1;
              pbVar3 = pbVar3 + 1;
code_r0x10481478:
              if ((*pbVar2 == 0) || (*pbVar3 == 0)) goto code_r0x10481484;
            }
            if (bVar1 == 0x23) {
              if ((0x2f < *pbVar3) && (*pbVar3 < 0x3a)) goto code_r0x10481476;
code_r0x10481470:
              bVar5 = false;
            }
            else {
              if (bVar1 != 0x2a) {
                if (bVar1 == *pbVar3) goto code_r0x10481476;
                goto code_r0x10481470;
              }
              pbVar2 = pbVar2 + 1;
              bVar1 = *pbVar2;
              while ((bVar1 != 0 && (bVar1 == 0x2a))) {
                pbVar2 = pbVar2 + 1;
                bVar1 = *pbVar2;
              }
              if (*pbVar2 != 0) {
                if ((*pbVar3 != 0) && (*pbVar2 != *pbVar3)) {
                  do {
                    pbVar3 = pbVar3 + 1;
                    if (*pbVar3 == 0) break;
                  } while (*pbVar2 != *pbVar3);
                }
                if (*pbVar3 != 0) goto code_r0x10481478;
                goto code_r0x10481470;
              }
            }
code_r0x10481484:
            if ((*pbVar2 == 0) && (bVar5)) {
              copy_string_with_length_limit(param_2 + 6,(char *)&bStack_28);
              *(byte *)((int)param_2 + 0x25) = bStack_1b;
              param_2[10] = iStack_14;
              puVar7[3] = 0;
              puVar7[7] = 0;
              puVar7[0xb] = 0;
              puVar7[0xf] = 0;
              alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar7[3],puVar7[7],puVar7[0xb],
                           puVar7[0xf]);
              uVar4 = get_or_init_global_buffer();
              write_six_fields_to_param4(uVar4,(uint)uStack_1a,(uint)uStack_18,auStack_10);
              copy_eight_bytes_1045c584((uint16_t *)(param_2 + 0xb),auStack_10);
              iVar6 = 1;
              free_heap_if_flag_set_1045c56c(auStack_10,2);
            }
          }
        }
      }
      else if ((bStack_1b & 0x10) != 0) goto LAB_104813ea;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  } while( true );
}
