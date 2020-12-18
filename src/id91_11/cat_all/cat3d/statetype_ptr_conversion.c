/* Catacomb 3-D Source Code
 * Copyright (C) 1993-2014 Flat Rock Software
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

// New file used for preparing and converting statetype objects offset

#include "c3_def.h"

REFKEEN_NS_B

// List of all states
extern statetype s_pshot1;
extern statetype s_pshot2;
extern statetype s_shotexplode;
extern statetype s_bigpshot1;
extern statetype s_bigpshot2;
extern statetype s_player;
extern statetype s_boltbonus;
extern statetype s_boltbonus2;
extern statetype s_nukebonus;
extern statetype s_nukebonus2;
extern statetype s_potionbonus;
extern statetype s_rkeybonus;
extern statetype s_ykeybonus;
extern statetype s_gkeybonus;
extern statetype s_bkeybonus;
extern statetype s_scrollbonus;
extern statetype s_chestbonus;
extern statetype s_goalbonus;
extern statetype s_walldie1;
extern statetype s_walldie2;
extern statetype s_walldie3;
extern statetype s_walldie4;
extern statetype s_walldie5;
extern statetype s_walldie6;
extern statetype s_gate1;
extern statetype s_gate2;
extern statetype s_gate3;
extern statetype s_gate4;
extern statetype s_fgate1;
extern statetype s_fgate2;
extern statetype s_fgate3;
extern statetype s_fgate4;
extern statetype s_trollpause;
extern statetype s_troll1;
extern statetype s_troll2;
extern statetype s_troll3;
extern statetype s_troll4;
extern statetype s_trollattack1;
extern statetype s_trollattack2;
extern statetype s_trollattack3;
extern statetype s_trollouch;
extern statetype s_trolldie1;
extern statetype s_trolldie2;
extern statetype s_trolldie3;
extern statetype s_orcpause;
extern statetype s_orc1;
extern statetype s_orc2;
extern statetype s_orc3;
extern statetype s_orc4;
extern statetype s_orcattack1;
extern statetype s_orcattack2;
extern statetype s_orcattack3;
extern statetype s_orcouch;
extern statetype s_orcdie1;
extern statetype s_orcdie2;
extern statetype s_orcdie3;
extern statetype s_demonpause;
extern statetype s_demon1;
extern statetype s_demon2;
extern statetype s_demon3;
extern statetype s_demon4;
extern statetype s_demonattack1;
extern statetype s_demonattack2;
extern statetype s_demonattack3;
extern statetype s_demonouch;
extern statetype s_demondie1;
extern statetype s_demondie2;
extern statetype s_demondie3;
extern statetype s_mshot1;
extern statetype s_mshot2;
extern statetype s_magepause;
extern statetype s_mage1;
extern statetype s_mage2;
extern statetype s_mageattack1;
extern statetype s_mageattack2;
extern statetype s_mageattack3;
extern statetype s_mageouch;
extern statetype s_magedie1;
extern statetype s_magedie2;
extern statetype s_grelpause;
extern statetype s_grel1;
extern statetype s_grel2;
extern statetype s_grelattack1;
extern statetype s_grelattack2;
extern statetype s_grelattack3;
extern statetype s_grelouch;
extern statetype s_greldie1;
extern statetype s_greldie2;
extern statetype s_greldie3;
extern statetype s_greldie4;
extern statetype s_greldie5;
extern statetype s_greldie6;
extern statetype s_bat1;
extern statetype s_bat2;
extern statetype s_bat3;
extern statetype s_bat4;
extern statetype s_batpast;
extern statetype s_batdie1;
extern statetype s_batdie2;
extern statetype s_bounce1;
extern statetype s_bounce2;

statetype * (*RefKeen_GetObjStatePtrFromDOSPointer)(uint_fast32_t dosptr);

static statetype *RefKeen_GetObjStatePtrFromDOSPointer_Cat3D100(uint_fast32_t dosptr);
static statetype *RefKeen_GetObjStatePtrFromDOSPointer_Cat3D122(uint_fast32_t dosptr);

void RefKeen_FillObjStatesWithDOSPointers(void)
{
	switch (refkeen_current_gamever)
	{
	case BE_GAMEVER_CAT3D100:
		RefKeen_GetObjStatePtrFromDOSPointer = RefKeen_GetObjStatePtrFromDOSPointer_Cat3D100;

		s_pshot1.compatdospointer = 0x149A;
		s_pshot2.compatdospointer = 0x14A4;
		s_shotexplode.compatdospointer = 0x14AE;
		s_bigpshot1.compatdospointer = 0x14B8;
		s_bigpshot2.compatdospointer = 0x14C2;
		s_player.compatdospointer = 0x14CC;
		s_boltbonus.compatdospointer = 0x14E8;
		s_boltbonus2.compatdospointer = 0x14F2;
		s_nukebonus.compatdospointer = 0x14FC;
		s_nukebonus2.compatdospointer = 0x1506;
		s_potionbonus.compatdospointer = 0x1510;
		s_rkeybonus.compatdospointer = 0x151A;
		s_ykeybonus.compatdospointer = 0x1524;
		s_gkeybonus.compatdospointer = 0x152E;
		s_bkeybonus.compatdospointer = 0x1538;
		s_scrollbonus.compatdospointer = 0x1542;
		s_chestbonus.compatdospointer = 0x154C;
		s_goalbonus.compatdospointer = 0x1556;
		s_walldie1.compatdospointer = 0x1560;
		s_walldie2.compatdospointer = 0x156A;
		s_walldie3.compatdospointer = 0x1574;
		s_walldie4.compatdospointer = 0x157E;
		s_walldie5.compatdospointer = 0x1588;
		s_walldie6.compatdospointer = 0x1592;
		s_gate1.compatdospointer = 0x159C;
		s_gate2.compatdospointer = 0x15A6;
		s_gate3.compatdospointer = 0x15B0;
		s_gate4.compatdospointer = 0x15BA;
		s_fgate1.compatdospointer = 0x15C4;
		s_fgate2.compatdospointer = 0x15CE;
		s_fgate3.compatdospointer = 0x15D8;
		s_fgate4.compatdospointer = 0x15E2;
		s_trollpause.compatdospointer = 0x15EC;
		s_troll1.compatdospointer = 0x15F6;
		s_troll2.compatdospointer = 0x1600;
		s_troll3.compatdospointer = 0x160A;
		s_troll4.compatdospointer = 0x1614;
		s_trollattack1.compatdospointer = 0x161E;
		s_trollattack2.compatdospointer = 0x1628;
		s_trollattack3.compatdospointer = 0x1632;
		s_trollouch.compatdospointer = 0x163C;
		s_trolldie1.compatdospointer = 0x1646;
		s_trolldie2.compatdospointer = 0x1650;
		s_trolldie3.compatdospointer = 0x165A;
		s_orcpause.compatdospointer = 0x1664;
		s_orc1.compatdospointer = 0x166E;
		s_orc2.compatdospointer = 0x1678;
		s_orc3.compatdospointer = 0x1682;
		s_orc4.compatdospointer = 0x168C;
		s_orcattack1.compatdospointer = 0x1696;
		s_orcattack2.compatdospointer = 0x16A0;
		s_orcattack3.compatdospointer = 0x16AA;
		s_orcouch.compatdospointer = 0x16B4;
		s_orcdie1.compatdospointer = 0x16BE;
		s_orcdie2.compatdospointer = 0x16C8;
		s_orcdie3.compatdospointer = 0x16D2;
		s_demonpause.compatdospointer = 0x16DC;
		s_demon1.compatdospointer = 0x16E6;
		s_demon2.compatdospointer = 0x16F0;
		s_demon3.compatdospointer = 0x16FA;
		s_demon4.compatdospointer = 0x1704;
		s_demonattack1.compatdospointer = 0x170E;
		s_demonattack2.compatdospointer = 0x1718;
		s_demonattack3.compatdospointer = 0x1722;
		s_demonouch.compatdospointer = 0x172C;
		s_demondie1.compatdospointer = 0x1736;
		s_demondie2.compatdospointer = 0x1740;
		s_demondie3.compatdospointer = 0x174A;
		s_mshot1.compatdospointer = 0x1754;
		s_mshot2.compatdospointer = 0x175E;
		s_magepause.compatdospointer = 0x1768;
		s_mage1.compatdospointer = 0x1772;
		s_mage2.compatdospointer = 0x177C;
		s_mageattack1.compatdospointer = 0x1786;
		s_mageattack2.compatdospointer = 0x1790;
		s_mageattack3.compatdospointer = 0x179A;
		s_mageouch.compatdospointer = 0x17A4;
		s_magedie1.compatdospointer = 0x17AE;
		s_magedie2.compatdospointer = 0x17B8;
		s_grelpause.compatdospointer = 0x17C2;
		s_grel1.compatdospointer = 0x17CC;
		s_grel2.compatdospointer = 0x17D6;
		s_grelattack1.compatdospointer = 0x17E0;
		s_grelattack2.compatdospointer = 0x17EA;
		s_grelattack3.compatdospointer = 0x17F4;
		s_grelouch.compatdospointer = 0x17FE;
		s_greldie1.compatdospointer = 0x1808;
		s_greldie2.compatdospointer = 0x1812;
		s_greldie3.compatdospointer = 0x181C;
		s_greldie4.compatdospointer = 0x1826;
		s_greldie5.compatdospointer = 0x1830;
		s_greldie6.compatdospointer = 0x183A;
		s_bat1.compatdospointer = 0x1844;
		s_bat2.compatdospointer = 0x184E;
		s_bat3.compatdospointer = 0x1858;
		s_bat4.compatdospointer = 0x1862;
		s_batpast.compatdospointer = 0x186C;
		s_batdie1.compatdospointer = 0x1876;
		s_batdie2.compatdospointer = 0x1880;
		s_bounce1.compatdospointer = 0x188A;
		s_bounce2.compatdospointer = 0x1894;

		break;

	case BE_GAMEVER_CAT3D122:
		RefKeen_GetObjStatePtrFromDOSPointer = RefKeen_GetObjStatePtrFromDOSPointer_Cat3D122;

		s_pshot1.compatdospointer = 0x1776;
		s_pshot2.compatdospointer = 0x1780;
		s_shotexplode.compatdospointer = 0x178A;
		s_bigpshot1.compatdospointer = 0x1794;
		s_bigpshot2.compatdospointer = 0x179E;
		s_player.compatdospointer = 0x17A8;
		s_boltbonus.compatdospointer = 0x17C4;
		s_boltbonus2.compatdospointer = 0x17CE;
		s_nukebonus.compatdospointer = 0x17D8;
		s_nukebonus2.compatdospointer = 0x17E2;
		s_potionbonus.compatdospointer = 0x17EC;
		s_rkeybonus.compatdospointer = 0x17F6;
		s_ykeybonus.compatdospointer = 0x1800;
		s_gkeybonus.compatdospointer = 0x180A;
		s_bkeybonus.compatdospointer = 0x1814;
		s_scrollbonus.compatdospointer = 0x181E;
		s_chestbonus.compatdospointer = 0x1828;
		s_goalbonus.compatdospointer = 0x1832;
		s_walldie1.compatdospointer = 0x183C;
		s_walldie2.compatdospointer = 0x1846;
		s_walldie3.compatdospointer = 0x1850;
		s_walldie4.compatdospointer = 0x185A;
		s_walldie5.compatdospointer = 0x1864;
		s_walldie6.compatdospointer = 0x186E;
		s_gate1.compatdospointer = 0x1878;
		s_gate2.compatdospointer = 0x1882;
		s_gate3.compatdospointer = 0x188C;
		s_gate4.compatdospointer = 0x1896;
		s_fgate1.compatdospointer = 0x18A0;
		s_fgate2.compatdospointer = 0x18AA;
		s_fgate3.compatdospointer = 0x18B4;
		s_fgate4.compatdospointer = 0x18BE;
		s_trollpause.compatdospointer = 0x18C8;
		s_troll1.compatdospointer = 0x18D2;
		s_troll2.compatdospointer = 0x18DC;
		s_troll3.compatdospointer = 0x18E6;
		s_troll4.compatdospointer = 0x18F0;
		s_trollattack1.compatdospointer = 0x18FA;
		s_trollattack2.compatdospointer = 0x1904;
		s_trollattack3.compatdospointer = 0x190E;
		s_trollouch.compatdospointer = 0x1918;
		s_trolldie1.compatdospointer = 0x1922;
		s_trolldie2.compatdospointer = 0x192C;
		s_trolldie3.compatdospointer = 0x1936;
		s_orcpause.compatdospointer = 0x1940;
		s_orc1.compatdospointer = 0x194A;
		s_orc2.compatdospointer = 0x1954;
		s_orc3.compatdospointer = 0x195E;
		s_orc4.compatdospointer = 0x1968;
		s_orcattack1.compatdospointer = 0x1972;
		s_orcattack2.compatdospointer = 0x197C;
		s_orcattack3.compatdospointer = 0x1986;
		s_orcouch.compatdospointer = 0x1990;
		s_orcdie1.compatdospointer = 0x199A;
		s_orcdie2.compatdospointer = 0x19A4;
		s_orcdie3.compatdospointer = 0x19AE;
		s_demonpause.compatdospointer = 0x19B8;
		s_demon1.compatdospointer = 0x19C2;
		s_demon2.compatdospointer = 0x19CC;
		s_demon3.compatdospointer = 0x19D6;
		s_demon4.compatdospointer = 0x19E0;
		s_demonattack1.compatdospointer = 0x19EA;
		s_demonattack2.compatdospointer = 0x19F4;
		s_demonattack3.compatdospointer = 0x19FE;
		s_demonouch.compatdospointer = 0x1A08;
		s_demondie1.compatdospointer = 0x1A12;
		s_demondie2.compatdospointer = 0x1A1C;
		s_demondie3.compatdospointer = 0x1A26;
		s_mshot1.compatdospointer = 0x1A30;
		s_mshot2.compatdospointer = 0x1A3A;
		s_magepause.compatdospointer = 0x1A44;
		s_mage1.compatdospointer = 0x1A4E;
		s_mage2.compatdospointer = 0x1A58;
		s_mageattack1.compatdospointer = 0x1A62;
		s_mageattack2.compatdospointer = 0x1A6C;
		s_mageattack3.compatdospointer = 0x1A76;
		s_mageouch.compatdospointer = 0x1A80;
		s_magedie1.compatdospointer = 0x1A8A;
		s_magedie2.compatdospointer = 0x1A94;
		s_grelpause.compatdospointer = 0x1A9E;
		s_grel1.compatdospointer = 0x1AA8;
		s_grel2.compatdospointer = 0x1AB2;
		s_grelattack1.compatdospointer = 0x1ABC;
		s_grelattack2.compatdospointer = 0x1AC6;
		s_grelattack3.compatdospointer = 0x1AD0;
		s_grelouch.compatdospointer = 0x1ADA;
		s_greldie1.compatdospointer = 0x1AE4;
		s_greldie2.compatdospointer = 0x1AEE;
		s_greldie3.compatdospointer = 0x1AF8;
		s_greldie4.compatdospointer = 0x1B02;
		s_greldie5.compatdospointer = 0x1B0C;
		s_greldie6.compatdospointer = 0x1B16;
		s_bat1.compatdospointer = 0x1B20;
		s_bat2.compatdospointer = 0x1B2A;
		s_bat3.compatdospointer = 0x1B34;
		s_bat4.compatdospointer = 0x1B3E;
		s_batpast.compatdospointer = 0x1B48;
		s_batdie1.compatdospointer = 0x1B52;
		s_batdie2.compatdospointer = 0x1B5C;
		s_bounce1.compatdospointer = 0x1B66;
		s_bounce2.compatdospointer = 0x1B70;

		break;
	}
}

static statetype *RefKeen_GetObjStatePtrFromDOSPointer_Cat3D100(uint_fast32_t dosptr)
{
	switch (dosptr)
	{
	case 0x149A: return &s_pshot1;
	case 0x14A4: return &s_pshot2;
	case 0x14AE: return &s_shotexplode;
	case 0x14B8: return &s_bigpshot1;
	case 0x14C2: return &s_bigpshot2;
	case 0x14CC: return &s_player;
	case 0x14E8: return &s_boltbonus;
	case 0x14F2: return &s_boltbonus2;
	case 0x14FC: return &s_nukebonus;
	case 0x1506: return &s_nukebonus2;
	case 0x1510: return &s_potionbonus;
	case 0x151A: return &s_rkeybonus;
	case 0x1524: return &s_ykeybonus;
	case 0x152E: return &s_gkeybonus;
	case 0x1538: return &s_bkeybonus;
	case 0x1542: return &s_scrollbonus;
	case 0x154C: return &s_chestbonus;
	case 0x1556: return &s_goalbonus;
	case 0x1560: return &s_walldie1;
	case 0x156A: return &s_walldie2;
	case 0x1574: return &s_walldie3;
	case 0x157E: return &s_walldie4;
	case 0x1588: return &s_walldie5;
	case 0x1592: return &s_walldie6;
	case 0x159C: return &s_gate1;
	case 0x15A6: return &s_gate2;
	case 0x15B0: return &s_gate3;
	case 0x15BA: return &s_gate4;
	case 0x15C4: return &s_fgate1;
	case 0x15CE: return &s_fgate2;
	case 0x15D8: return &s_fgate3;
	case 0x15E2: return &s_fgate4;
	case 0x15EC: return &s_trollpause;
	case 0x15F6: return &s_troll1;
	case 0x1600: return &s_troll2;
	case 0x160A: return &s_troll3;
	case 0x1614: return &s_troll4;
	case 0x161E: return &s_trollattack1;
	case 0x1628: return &s_trollattack2;
	case 0x1632: return &s_trollattack3;
	case 0x163C: return &s_trollouch;
	case 0x1646: return &s_trolldie1;
	case 0x1650: return &s_trolldie2;
	case 0x165A: return &s_trolldie3;
	case 0x1664: return &s_orcpause;
	case 0x166E: return &s_orc1;
	case 0x1678: return &s_orc2;
	case 0x1682: return &s_orc3;
	case 0x168C: return &s_orc4;
	case 0x1696: return &s_orcattack1;
	case 0x16A0: return &s_orcattack2;
	case 0x16AA: return &s_orcattack3;
	case 0x16B4: return &s_orcouch;
	case 0x16BE: return &s_orcdie1;
	case 0x16C8: return &s_orcdie2;
	case 0x16D2: return &s_orcdie3;
	case 0x16DC: return &s_demonpause;
	case 0x16E6: return &s_demon1;
	case 0x16F0: return &s_demon2;
	case 0x16FA: return &s_demon3;
	case 0x1704: return &s_demon4;
	case 0x170E: return &s_demonattack1;
	case 0x1718: return &s_demonattack2;
	case 0x1722: return &s_demonattack3;
	case 0x172C: return &s_demonouch;
	case 0x1736: return &s_demondie1;
	case 0x1740: return &s_demondie2;
	case 0x174A: return &s_demondie3;
	case 0x1754: return &s_mshot1;
	case 0x175E: return &s_mshot2;
	case 0x1768: return &s_magepause;
	case 0x1772: return &s_mage1;
	case 0x177C: return &s_mage2;
	case 0x1786: return &s_mageattack1;
	case 0x1790: return &s_mageattack2;
	case 0x179A: return &s_mageattack3;
	case 0x17A4: return &s_mageouch;
	case 0x17AE: return &s_magedie1;
	case 0x17B8: return &s_magedie2;
	case 0x17C2: return &s_grelpause;
	case 0x17CC: return &s_grel1;
	case 0x17D6: return &s_grel2;
	case 0x17E0: return &s_grelattack1;
	case 0x17EA: return &s_grelattack2;
	case 0x17F4: return &s_grelattack3;
	case 0x17FE: return &s_grelouch;
	case 0x1808: return &s_greldie1;
	case 0x1812: return &s_greldie2;
	case 0x181C: return &s_greldie3;
	case 0x1826: return &s_greldie4;
	case 0x1830: return &s_greldie5;
	case 0x183A: return &s_greldie6;
	case 0x1844: return &s_bat1;
	case 0x184E: return &s_bat2;
	case 0x1858: return &s_bat3;
	case 0x1862: return &s_bat4;
	case 0x186C: return &s_batpast;
	case 0x1876: return &s_batdie1;
	case 0x1880: return &s_batdie2;
	case 0x188A: return &s_bounce1;
	case 0x1894: return &s_bounce2;
	}
	return NULL;
}

static statetype *RefKeen_GetObjStatePtrFromDOSPointer_Cat3D122(uint_fast32_t dosptr)
{
	switch (dosptr)
	{
	case 0x1776: return &s_pshot1;
	case 0x1780: return &s_pshot2;
	case 0x178A: return &s_shotexplode;
	case 0x1794: return &s_bigpshot1;
	case 0x179E: return &s_bigpshot2;
	case 0x17A8: return &s_player;
	case 0x17C4: return &s_boltbonus;
	case 0x17CE: return &s_boltbonus2;
	case 0x17D8: return &s_nukebonus;
	case 0x17E2: return &s_nukebonus2;
	case 0x17EC: return &s_potionbonus;
	case 0x17F6: return &s_rkeybonus;
	case 0x1800: return &s_ykeybonus;
	case 0x180A: return &s_gkeybonus;
	case 0x1814: return &s_bkeybonus;
	case 0x181E: return &s_scrollbonus;
	case 0x1828: return &s_chestbonus;
	case 0x1832: return &s_goalbonus;
	case 0x183C: return &s_walldie1;
	case 0x1846: return &s_walldie2;
	case 0x1850: return &s_walldie3;
	case 0x185A: return &s_walldie4;
	case 0x1864: return &s_walldie5;
	case 0x186E: return &s_walldie6;
	case 0x1878: return &s_gate1;
	case 0x1882: return &s_gate2;
	case 0x188C: return &s_gate3;
	case 0x1896: return &s_gate4;
	case 0x18A0: return &s_fgate1;
	case 0x18AA: return &s_fgate2;
	case 0x18B4: return &s_fgate3;
	case 0x18BE: return &s_fgate4;
	case 0x18C8: return &s_trollpause;
	case 0x18D2: return &s_troll1;
	case 0x18DC: return &s_troll2;
	case 0x18E6: return &s_troll3;
	case 0x18F0: return &s_troll4;
	case 0x18FA: return &s_trollattack1;
	case 0x1904: return &s_trollattack2;
	case 0x190E: return &s_trollattack3;
	case 0x1918: return &s_trollouch;
	case 0x1922: return &s_trolldie1;
	case 0x192C: return &s_trolldie2;
	case 0x1936: return &s_trolldie3;
	case 0x1940: return &s_orcpause;
	case 0x194A: return &s_orc1;
	case 0x1954: return &s_orc2;
	case 0x195E: return &s_orc3;
	case 0x1968: return &s_orc4;
	case 0x1972: return &s_orcattack1;
	case 0x197C: return &s_orcattack2;
	case 0x1986: return &s_orcattack3;
	case 0x1990: return &s_orcouch;
	case 0x199A: return &s_orcdie1;
	case 0x19A4: return &s_orcdie2;
	case 0x19AE: return &s_orcdie3;
	case 0x19B8: return &s_demonpause;
	case 0x19C2: return &s_demon1;
	case 0x19CC: return &s_demon2;
	case 0x19D6: return &s_demon3;
	case 0x19E0: return &s_demon4;
	case 0x19EA: return &s_demonattack1;
	case 0x19F4: return &s_demonattack2;
	case 0x19FE: return &s_demonattack3;
	case 0x1A08: return &s_demonouch;
	case 0x1A12: return &s_demondie1;
	case 0x1A1C: return &s_demondie2;
	case 0x1A26: return &s_demondie3;
	case 0x1A30: return &s_mshot1;
	case 0x1A3A: return &s_mshot2;
	case 0x1A44: return &s_magepause;
	case 0x1A4E: return &s_mage1;
	case 0x1A58: return &s_mage2;
	case 0x1A62: return &s_mageattack1;
	case 0x1A6C: return &s_mageattack2;
	case 0x1A76: return &s_mageattack3;
	case 0x1A80: return &s_mageouch;
	case 0x1A8A: return &s_magedie1;
	case 0x1A94: return &s_magedie2;
	case 0x1A9E: return &s_grelpause;
	case 0x1AA8: return &s_grel1;
	case 0x1AB2: return &s_grel2;
	case 0x1ABC: return &s_grelattack1;
	case 0x1AC6: return &s_grelattack2;
	case 0x1AD0: return &s_grelattack3;
	case 0x1ADA: return &s_grelouch;
	case 0x1AE4: return &s_greldie1;
	case 0x1AEE: return &s_greldie2;
	case 0x1AF8: return &s_greldie3;
	case 0x1B02: return &s_greldie4;
	case 0x1B0C: return &s_greldie5;
	case 0x1B16: return &s_greldie6;
	case 0x1B20: return &s_bat1;
	case 0x1B2A: return &s_bat2;
	case 0x1B34: return &s_bat3;
	case 0x1B3E: return &s_bat4;
	case 0x1B48: return &s_batpast;
	case 0x1B52: return &s_batdie1;
	case 0x1B5C: return &s_batdie2;
	case 0x1B66: return &s_bounce1;
	case 0x1B70: return &s_bounce2;
	}
	return NULL;
}

REFKEEN_NS_E
