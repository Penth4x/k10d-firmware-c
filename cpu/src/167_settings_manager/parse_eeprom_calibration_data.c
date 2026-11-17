/* @k10d parse_eeprom_calibration_data @ 0x10479020
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads and validates calibration parameters from an EEPROM-like data source into a
 *   structured array.
 * summary:
 *   The function iterates through a data buffer (param_2), using count_string_bytes and
 *   compare_byte_arrays to read specific fields (likely via I2C/SPI or memory-mapped
 *   registers). It validates ASCII digits (0x30-0x39) and bit flags (0x20) in the data,
 *   converts three-digit values to integers, and stores them in an array at param_1 + 0x20.
 *   It also calls parse_three_digit_numeric_fields and insert_node_into_sorted_list to
 *   process or apply the parsed data. The loop continues until a maximum offset (0xea24) is
 *   reached or an error occurs, storing the count of valid entries in param_1 + 0xea44.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t parse_eeprom_calibration_data(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint8_t uVar5;
  void *pvVar4;
  char *pcVar6;
  short *psVar7;
  int iVar8;
  uintptr_t sp;
  int iStack_28;
  int iStack_1c;
  void *pvStack_4;
  
  pvStack_4 = param_2;
  iVar2 = count_string_bytes(pcRam80014864);
  iVar2 = compare_byte_arrays(pvStack_4,pcRam80014864,iVar2);
  if (iVar2 == 0) {
    pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
    iVar2 = count_string_bytes(pcRam8000ff78);
    iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff78,iVar2);
    if (iVar2 == 0) {
      pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
      iVar2 = count_string_bytes(pcRam8000ff7c);
      iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff7c,iVar2);
      if (iVar2 == 0) {
        iVar2 = count_string_bytes(pcRam8000ff7c);
        pvVar3 = (void *)((int)pvStack_4 + iVar2);
        pcVar6 = *(char **)(param_1 + 0x10);
        pvStack_4 = pvVar3;
        iVar2 = count_string_bytes(pcVar6);
        iVar2 = compare_byte_arrays(pvStack_4,pcVar6,iVar2);
        if (iVar2 == 0) {
          iVar2 = count_string_bytes(pcVar6);
          pvVar3 = (void *)(iVar2 + (int)pvVar3);
          pvStack_4 = pvVar3;
          iVar2 = count_string_bytes(pcRam8000ff80);
          iVar2 = compare_byte_arrays(pvStack_4,pcRam8000ff80,iVar2);
          if (iVar2 == 0) {
            iVar2 = count_string_bytes(pcRam8000ff80);
            pvStack_4 = (void *)(iVar2 + (int)pvVar3);
            pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
            iVar2 = count_string_bytes(pcRam8000ff84);
            iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff84,iVar2);
            if (iVar2 == 0) {
              iStack_1c = 0;
              iStack_28 = 0;
              do {
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff74);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff74,iVar2);
                if (iVar2 != 0) break;
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff88);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff88,iVar2);
                if (iVar2 != 0) {
                  return 0;
                }
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff8c);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff8c,iVar2);
                if (iVar2 != 0) {
                  return 0;
                }
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff90);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff90,iVar2);
                if (iVar2 != 0) {
                  return 0;
                }
                if (((&DAT_106220f1)[*(byte *)((int)pvStack_4 + 8)] & 0x20) == 0) {
                  return 0;
                }
                if (((&DAT_106220f1)[*(byte *)((int)pvStack_4 + 9)] & 0x20) == 0) {
                  return 0;
                }
                if (((&DAT_106220f1)[*(byte *)((int)pvStack_4 + 10)] & 0x20) == 0) {
                  return 0;
                }
                psVar7 = (short *)(param_1 + 0x20 + iStack_28);
                psVar7[2] = (*(byte *)((int)pvStack_4 + 8) - 0x30) * 100 +
                            (*(byte *)((int)pvStack_4 + 9) - 0x30) * 10 +
                            (*(byte *)((int)pvStack_4 + 10) - 0x30);
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff94);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff94,iVar2);
                if (iVar2 != 0) {
                  return 0;
                }
                uVar5 = iterate_string_table_entries(*(uint32_t *)(param_1 + 0xea50),(void *)((int)pvStack_4 + 8));
                *(uint8_t *)((int)psVar7 + 7) = uVar5;
                iVar2 = (*(code *)0x105309be/*ROM*/)
                                  (*(uint32_t *)(param_1 + 0xea50),
                                   *(uint8_t *)((int)psVar7 + 7));
                if (iVar2 == 0) {
                  return 0;
                }
                pvVar3 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ff98);
                iVar2 = compare_byte_arrays(pvVar3,pcRam8000ff98,iVar2);
                if (iVar2 != 0) {
                  return 0;
                }
                iVar2 = parse_three_digit_numeric_fields(param_1,(int)pvStack_4,psVar7,psVar7 + 1);
                if (iVar2 != 0) {
                  (*(code *)0x1054534e/*ROM*/)(psVar7 + 4,(int)pvStack_4 + 10,0x1d);
                  *(uint8_t *)((int)psVar7 + 0x25) = 0;
                  insert_node_into_sorted_list(param_1,psVar7);
                }
                pvVar3 = pvStack_4;
                *(uint8_t *)(psVar7 + 3) = 0;
                pvVar4 = (void *)advance_pointer_past_crlf(param_1,(int *)&pvStack_4);
                iVar2 = count_string_bytes(pcRam8000ffa0);
                iVar2 = compare_byte_arrays(pvVar4,pcRam8000ffa0,iVar2);
                pvVar4 = pvStack_4;
                if (iVar2 == 0) {
                  pvVar3 = (void *)((int)pvStack_4 + 0x13);
                  iVar2 = count_string_bytes(pcRam8000ffa4);
                  iVar2 = compare_byte_arrays(pvVar3,pcRam8000ffa4,iVar2);
                  if (iVar2 != 0) {
                    return 0;
                  }
                  iVar1 = param_1 + 0x20 + iStack_28;
                  iVar2 = 10;
                  do {
                    iVar8 = iVar2 + -1;
                    *(uint8_t *)(iVar8 + iVar1 + 0x27) = *(uint8_t *)((int)pvVar4 + iVar2 + 8)
                    ;
                    iVar2 = iVar8;
                  } while (iVar8 != 0);
                  *(uint8_t *)(iVar1 + 0x31) = 0;
                  *(uint8_t *)(iVar1 + 6) = 1;
                  pvVar3 = pvStack_4;
                }
                pvStack_4 = pvVar3;
                psVar7 = (short *)(param_1 + 0x20 + iStack_28);
                if ((*psVar7 != 0) && (psVar7[1] != 0)) {
                  iStack_1c = iStack_1c + 1;
                  iStack_28 = iStack_28 + 0x3c;
                }
              } while (iStack_28 < 0xea24);
              *(int *)(param_1 + 0xea44) = iStack_1c;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
