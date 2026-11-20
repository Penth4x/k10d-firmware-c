/* @k10d write_four_bytes_to_0x3c540 @ 0x000c2d26
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Writes four bytes to memory offset 0x3c540 based on conditional logic and helper
 *   function results.
 * summary:
 *   The function writes four bytes to the memory region starting at 0x3c540. It selects one
 *   of three calculation paths based on flags in DAT_0003c126 and DAT_0003c127. The
 *   calculations involve calling helper functions (compute_shifted_byte_value,
 *   compute_signed_offset_from_tables, scale_table_value_by_mode,
 *   compute_indexed_sized_value, compute_signed_offset_from_table) and using values from
 *   various DAT globals. The specific role of the destination memory and the helper
 *   functions is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_four_bytes_to_0x3c540(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  int iStack_2c;
  int iStack_28;
  
  cVar1 = DAT_000f9dd8;
  if (DAT_0003c440 == '\x11') {
    iVar7 = 0;
    iVar2 = 4;
    do {
      *(char *)(iVar7 + 0x3c540) = -cVar1;
      *(char *)(iVar7 + 0x3c541) = -cVar1;
      *(char *)(iVar7 + 0x3c542) = -cVar1;
      *(char *)(iVar7 + 0x3c543) = -cVar1;
      iVar7 = iVar7 + 4;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
  }
  else if (((((DAT_0003c127 & 8) == 0) && ((DAT_0003c127 & 1) == 0)) || ((DAT_0003c126 & 8) != 0))
          && ((DAT_0003c126 & 2) == 0)) {
    iVar2 = 0;
    iStack_28 = 4;
    do {
      if ((DAT_0003c126 & 8) == 0) {
        if ((DAT_0003c127 & 4) == 0) {
          *(char *)(iVar2 + 0x3c540) = -cVar1;
        }
        else {
          cVar6 = compute_signed_offset_from_table(iVar2,_DAT_0003f584);
          bVar8 = DAT_000f9dea & 7;
          if ((DAT_000f9dea & 8) != 0) {
            bVar8 = -bVar8;
          }
          *(byte *)(iVar2 + 0x3c540) = (((char)_DAT_0003f580 + -8) - bVar8) - cVar6;
        }
      }
      else {
        *(char *)(iVar2 + 0x3c540) = DAT_0003c560 - DAT_000f9dda;
      }
      if ((DAT_0003c126 & 8) == 0) {
        if ((DAT_0003c127 & 4) == 0) {
          *(char *)(iVar2 + 0x3c541) = -cVar1;
        }
        else {
          cVar6 = compute_signed_offset_from_table(iVar2 + 1,_DAT_0003f584);
          bVar8 = DAT_000f9dea & 7;
          if ((DAT_000f9dea & 8) != 0) {
            bVar8 = -bVar8;
          }
          *(byte *)(iVar2 + 0x3c541) = (((char)_DAT_0003f580 + -8) - bVar8) - cVar6;
        }
      }
      else {
        *(char *)(iVar2 + 0x3c541) = DAT_0003c560 - DAT_000f9dda;
      }
      if ((DAT_0003c126 & 8) == 0) {
        if ((DAT_0003c127 & 4) == 0) {
          *(char *)(iVar2 + 0x3c542) = -cVar1;
        }
        else {
          cVar6 = compute_signed_offset_from_table(iVar2 + 2,_DAT_0003f584);
          bVar8 = DAT_000f9dea & 7;
          if ((DAT_000f9dea & 8) != 0) {
            bVar8 = -bVar8;
          }
          *(byte *)(iVar2 + 0x3c542) = (((char)_DAT_0003f580 + -8) - bVar8) - cVar6;
        }
      }
      else {
        *(char *)(iVar2 + 0x3c542) = DAT_0003c560 - DAT_000f9dda;
      }
      if ((DAT_0003c126 & 8) == 0) {
        if ((DAT_0003c127 & 4) == 0) {
          *(char *)(iVar2 + 0x3c543) = -cVar1;
        }
        else {
          cVar6 = compute_signed_offset_from_table(iVar2 + 3,_DAT_0003f584);
          bVar8 = DAT_000f9dea & 7;
          if ((DAT_000f9dea & 8) != 0) {
            bVar8 = -bVar8;
          }
          *(byte *)(iVar2 + 0x3c543) = (((char)_DAT_0003f580 + -8) - bVar8) - cVar6;
        }
      }
      else {
        *(char *)(iVar2 + 0x3c543) = DAT_0003c560 - DAT_000f9dda;
      }
      iVar2 = iVar2 + 4;
      iStack_28 = iStack_28 + -1;
    } while (0 < iStack_28);
  }
  else {
    iVar2 = 0;
    iStack_2c = 4;
    do {
      cVar6 = '\0';
      if (((DAT_0003c126 & 2) != 0) && (cVar6 = DAT_000f9dd9, (DAT_0003c127 & 2) != 0)) {
        cVar6 = cVar1;
      }
      iVar7 = compute_shifted_byte_value(iVar2);
      iVar3 = compute_signed_offset_from_tables(iVar2,_DAT_0003f588);
      iVar4 = scale_table_value_by_mode(iVar2);
      iVar5 = compute_indexed_sized_value(iVar2,_DAT_0003f588);
      *(char *)(iVar2 + 0x3c540) =
           (char)(((iVar7 + iVar5 + iVar3 + iVar4 + _DAT_0003f584) - _DAT_0003f590) + 1U >> 1) -
           cVar6;
      iVar7 = iVar2 + 1;
      cVar6 = '\0';
      if (((DAT_0003c126 & 2) != 0) && (cVar6 = DAT_000f9dd9, (DAT_0003c127 & 2) != 0)) {
        cVar6 = cVar1;
      }
      iVar3 = compute_shifted_byte_value(iVar7);
      iVar4 = compute_signed_offset_from_tables(iVar7,_DAT_0003f588);
      iVar5 = scale_table_value_by_mode(iVar7);
      iVar7 = compute_indexed_sized_value(iVar7,_DAT_0003f588);
      *(char *)(iVar2 + 0x3c541) =
           (char)(((iVar3 + iVar7 + iVar4 + iVar5 + _DAT_0003f584) - _DAT_0003f590) + 1U >> 1) -
           cVar6;
      iVar7 = iVar2 + 2;
      cVar6 = '\0';
      if (((DAT_0003c126 & 2) != 0) && (cVar6 = DAT_000f9dd9, (DAT_0003c127 & 2) != 0)) {
        cVar6 = cVar1;
      }
      iVar3 = compute_shifted_byte_value(iVar7);
      iVar4 = compute_signed_offset_from_tables(iVar7,_DAT_0003f588);
      iVar5 = scale_table_value_by_mode(iVar7);
      iVar7 = compute_indexed_sized_value(iVar7,_DAT_0003f588);
      *(char *)(iVar2 + 0x3c542) =
           (char)(((iVar3 + iVar7 + iVar4 + iVar5 + _DAT_0003f584) - _DAT_0003f590) + 1U >> 1) -
           cVar6;
      iVar7 = iVar2 + 3;
      cVar6 = '\0';
      if (((DAT_0003c126 & 2) != 0) && (cVar6 = DAT_000f9dd9, (DAT_0003c127 & 2) != 0)) {
        cVar6 = cVar1;
      }
      iVar3 = compute_shifted_byte_value(iVar7);
      iVar4 = compute_signed_offset_from_tables(iVar7,_DAT_0003f588);
      iVar5 = scale_table_value_by_mode(iVar7);
      iVar7 = compute_indexed_sized_value(iVar7,_DAT_0003f588);
      *(char *)(iVar2 + 0x3c543) =
           (char)(((iVar3 + iVar7 + iVar4 + iVar5 + _DAT_0003f584) - _DAT_0003f590) + 1U >> 1) -
           cVar6;
      iVar2 = iVar2 + 4;
      iStack_2c = iStack_2c + -1;
    } while (0 < iStack_2c);
  }
  return;
}
