/* @k10d update_mode_dependent_globals @ 0x000d32ca
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Updates a set of global bytes based on a mode code and associated data fields.
 * summary:
 *   The function reads a mode identifier from DAT_0003c12b and uses it to index into lookup
 *   tables to update global variables DAT_0003cd62, DAT_0003cd63, and _DAT_0003cd68. It
 *   then performs a large switch statement on the mode identifier to calculate and write
 *   specific values into a block of global bytes (DAT_0003c115 through DAT_0003c118) using
 *   bitwise operations on other global data fields. It calls lookup_next_byte_in_table with
 *   pointers to these global data structures.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x000d3368) overlaps instruction at (ram,0x000d3366)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_mode_dependent_globals(void)

{
  uint uVar1;
  char cVar2;
  
  DAT_0003cd63 = DAT_0003c12b;
  DAT_0003cd62 = 0x16;
  _DAT_0003cd68 = &DAT_000fb11c;
  lookup_next_byte_in_table(&DAT_0003c117);
  uVar1 = 0;
  do {
    if ((&DAT_000fb28e)[uVar1] == DAT_0003c12b) {
      DAT_0003cd62 = (&DAT_000fb27e)[uVar1];
      _DAT_0003cd68 = (&PTR_DAT_000fb238)[uVar1];
      if (DAT_0003c12b == 0xf) {
        DAT_0003cd63 = DAT_0003c104;
        lookup_next_byte_in_table(&DAT_0003c115);
      }
      else {
        DAT_0003cd63 = DAT_0003c106;
        lookup_next_byte_in_table(&DAT_0003c117);
      }
      break;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x10);
  switch(DAT_0003c12b) {
  case 0xc:
    if ((DAT_0003c106 & 0xf) < 3) {
      cVar2 = '\a';
    }
    else if ((DAT_0003c106 & 0xf) < 8) {
      cVar2 = '\x05';
    }
    else {
      cVar2 = '\x04';
    }
    DAT_0003c115 = (DAT_0003c104 & 0xf0) + cVar2;
    break;
  case 0xd:
    if (DAT_0003c106 == 0x2f) {
      cVar2 = '\x0f';
    }
    else if (DAT_0003c106 == 0x4f) {
      cVar2 = '\x0e';
    }
    else if (DAT_0003c106 == 0x6f) {
      cVar2 = '\f';
    }
    else if (DAT_0003c106 == 0x70) {
      cVar2 = '\v';
    }
    else {
      cVar2 = '\n';
    }
    DAT_0003c116 = (DAT_0003c105 & 0xe0) + cVar2;
    break;
  case 0xe:
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x17:
  case 0x1a:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
    break;
  case 0xf:
    if ((DAT_0003c104 == 0x65) && (DAT_0003c106 == 0xee)) {
      DAT_0003c115 = 'h';
    }
    break;
  case 0x11:
    DAT_0003c115 = '`';
    break;
  case 0x13:
  case 0x1b:
    DAT_0003c115 = (DAT_0003c104 & 0xf) + 0x60;
    break;
  case 0x14:
    DAT_0003c115 = 'e';
    break;
  case 0x16:
    DAT_0003c115 = 's';
    DAT_0003c117 = (DAT_0003c106 & 0xe0) + 0x10;
    break;
  case 0x18:
    if (DAT_0003c105 == 0xb) {
      DAT_0003c117 = '\x12';
    }
    break;
  case 0x19:
    if (DAT_0003c103 == 'I') {
      DAT_0003c117 = '\r';
    }
    if (DAT_0003c103 == -0x7b) {
      DAT_0003c117 = '\t';
    }
    break;
  case 0x1c:
    DAT_0003c115 = 'c';
    if (DAT_0003c10a == '8') {
      DAT_0003c117 = -0x6f;
    }
    break;
  case 0x1d:
  case 0x23:
  case 0x24:
    DAT_0003c115 = 's';
    break;
  case 0x1f:
    DAT_0003c115 = (DAT_0003c104 & 0xf) + 0x50;
    break;
  default:
  }
  if (DAT_0003c12b == 0x33) {
    DAT_0003c115 = -0x6e;
    DAT_0003c116 = '\x03';
    DAT_0003c118 = 0xc0;
    if (DAT_0003c104 == 0x82) {
      DAT_0003c117 = '\x12';
    }
    else {
      DAT_0003c117 = '\x13';
    }
  }
  return;
}
