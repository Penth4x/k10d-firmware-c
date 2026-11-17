/* @k10d parse_quoted_token_stream @ 0x1046ec2a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 158_sr_dma_control (unit names are model-proposed)
 * purpose:
 *   Iterates through a stream of quoted tokens, extracting 2- and 3-character codes and
 *   writing their mapped values into a caller-provided buffer.
 * summary:
 *   Allocates two heap buffers (0x400 and 0x80 bytes) and repeatedly calls
 *   copy_line_until_crlf to fetch chunks of text into the larger buffer. It scans for
 *   double-quoted substrings, extracting 2-character or 3-character codes. These codes are
 *   validated against lookup tables at DAT_105a95c8 and DAT_105a95c0 via
 *   compare_null_terminated_strings, and their corresponding values (retrieved via
 *   allocate_buffer_with_status) are written to the output buffer at param_2, respecting
 *   the size limit in param_3. The function returns false if the output buffer is exceeded
 *   or if a terminator character ('!' or ';') is encountered.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool parse_quoted_token_stream(uint32_t param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uintptr_t sp;
  int iStack_30;
  char *pcStack_14;
  int iStack_c;
  
  iStack_c = 0;
  uVar8 = 0;
  pcVar3 = (char *)heap_alloc_2(0x400);
  pcVar4 = (char *)heap_alloc_2(0x80);
  iStack_30 = 0;
  bVar2 = false;
  pcStack_14 = (char *)param_4;
  do {
    if ((bVar2) || (iVar5 = copy_line_until_crlf(param_1,pcStack_14,&iStack_c,pcVar3), iVar5 == 0)) {
      heap_free_2((int)pcVar3);
      heap_free_2((int)pcVar4);
      return !bVar2;
    }
    iVar5 = 0;
    if (*pcVar3 != '\0') {
      do {
        if (pcVar3[iVar5] == '\"') {
          cVar1 = pcVar3[iVar5 + 1];
          if ((cVar1 == ':') && (pcVar3[iVar5 + 6] == '\"')) {
            *pcVar4 = pcVar3[iVar5 + 2];
            pcVar4[1] = pcVar3[iVar5 + 3];
            pcVar4[2] = pcVar3[iVar5 + 4];
            pcVar4[3] = pcVar3[iVar5 + 5];
            pcVar4[4] = '\0';
            uVar8 = allocate_buffer_with_status(pcVar4,(uint32_t *)0x0,0x10);
            uVar8 = uVar8 & 0xffff;
            iVar5 = iVar5 + 6;
          }
          else if ((pcVar3[iVar5 + 5] == '\"') && ((pcVar3[iVar5 + 3] != '\"' && (iStack_30 != 2))))
          {
            iStack_30 = 1;
            *pcVar4 = cVar1;
            pcVar4[1] = pcVar3[iVar5 + 2];
            pcVar4[2] = pcVar3[iVar5 + 3];
            pcVar4[3] = pcVar3[iVar5 + 4];
            pcVar4[4] = '\0';
            iVar6 = compare_null_terminated_strings(pcVar4,&DAT_105a95c0/*ROM*/);
            if (iVar6 != 0) {
              if ((param_3 / 2 & 0xffffU) <= uVar8) {
                bVar2 = true;
                break;
              }
              uVar7 = allocate_buffer_with_status(pcVar4,(uint32_t *)0x0,0x10);
              *(char *)(uVar8 * 2 + param_2) = (char)((uVar7 & 0xffff) >> 8);
              *(char *)(uVar8 * 2 + param_2 + 1) = (char)(uVar7 & 0xffff);
            }
            uVar8 = uVar8 + 1 & 0xffff;
            iVar5 = iVar5 + 5;
          }
          else if ((pcVar3[iVar5 + 3] == '\"') && (iStack_30 != 1)) {
            iStack_30 = 2;
            *pcVar4 = cVar1;
            pcVar4[1] = pcVar3[iVar5 + 2];
            pcVar4[2] = '\0';
            iVar6 = compare_null_terminated_strings(pcVar4,&DAT_105a95c8/*ROM*/);
            if (iVar6 != 0) {
              if (param_3 <= (int)uVar8) {
                bVar2 = true;
                break;
              }
              iVar6 = allocate_buffer_with_status(pcVar4,(uint32_t *)0x0,0x10);
              *(char *)(param_2 + uVar8) = (char)iVar6;
            }
            uVar8 = uVar8 + 1 & 0xffff;
            iVar5 = iVar5 + 3;
          }
          else if ((cVar1 == '!') || (cVar1 == ';')) break;
        }
        iVar5 = iVar5 + 1;
      } while (pcVar3[iVar5] != '\0');
    }
    pcStack_14 = pcStack_14 + iStack_c;
  } while( true );
}
