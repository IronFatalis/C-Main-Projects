#include "Board.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Board::emptyBoard()
{
	vector<char>board(NUM_SQUARES, EMPTY);
	cout << "\n\t    A   B   C   D   E   F   G   H   I   J\t\t    A   B   C   D   E   F   G   H   I   J";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t1 | " << board[0] << " | " << board[1] << " | " << board[2] << " | " << board[3] << " | " << board[4] << " | " << board[5] << " | " << board[6] << " | " << board[7] << " | " << board[8] << " | " << board[9] << " | \t\t1 | " << board[100] << " | " << board[101] << " | " << board[102] << " | " << board[103] << " | " << board[104] << " | " << board[105] << " | " << board[106] << " | " << board[107] << " | " << board[108] << " | " << board[109] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t2 | " << board[10] << " | " << board[11] << " | " << board[12] << " | " << board[13] << " | " << board[14] << " | " << board[15] << " | " << board[16] << " | " << board[17] << " | " << board[18] << " | " << board[19] << " | \t\t2 | " << board[110] << " | " << board[111] << " | " << board[112] << " | " << board[113] << " | " << board[114] << " | " << board[115] << " | " << board[116] << " | " << board[117] << " | " << board[118] << " | " << board[119] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t3 | " << board[20] << " | " << board[21] << " | " << board[22] << " | " << board[23] << " | " << board[24] << " | " << board[25] << " | " << board[26] << " | " << board[27] << " | " << board[28] << " | " << board[29] << " | \t\t3 | " << board[120] << " | " << board[121] << " | " << board[122] << " | " << board[123] << " | " << board[124] << " | " << board[125] << " | " << board[126] << " | " << board[127] << " | " << board[128] << " | " << board[129] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t4 | " << board[30] << " | " << board[31] << " | " << board[32] << " | " << board[33] << " | " << board[34] << " | " << board[35] << " | " << board[36] << " | " << board[37] << " | " << board[38] << " | " << board[39] << " | \t\t4 | " << board[130] << " | " << board[131] << " | " << board[132] << " | " << board[133] << " | " << board[134] << " | " << board[135] << " | " << board[136] << " | " << board[137] << " | " << board[138] << " | " << board[139] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t5 | " << board[40] << " | " << board[41] << " | " << board[42] << " | " << board[43] << " | " << board[44] << " | " << board[45] << " | " << board[46] << " | " << board[47] << " | " << board[48] << " | " << board[49] << " | \t\t5 | " << board[140] << " | " << board[141] << " | " << board[142] << " | " << board[143] << " | " << board[144] << " | " << board[145] << " | " << board[146] << " | " << board[147] << " | " << board[148] << " | " << board[149] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t6 | " << board[50] << " | " << board[51] << " | " << board[52] << " | " << board[53] << " | " << board[54] << " | " << board[55] << " | " << board[56] << " | " << board[57] << " | " << board[58] << " | " << board[59] << " | \t\t6 | " << board[150] << " | " << board[151] << " | " << board[152] << " | " << board[153] << " | " << board[154] << " | " << board[155] << " | " << board[156] << " | " << board[157] << " | " << board[158] << " | " << board[159] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t7 | " << board[60] << " | " << board[61] << " | " << board[62] << " | " << board[63] << " | " << board[64] << " | " << board[65] << " | " << board[66] << " | " << board[67] << " | " << board[68] << " | " << board[69] << " | \t\t7 | " << board[160] << " | " << board[161] << " | " << board[162] << " | " << board[163] << " | " << board[164] << " | " << board[165] << " | " << board[166] << " | " << board[167] << " | " << board[168] << " | " << board[169] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t8 | " << board[70] << " | " << board[71] << " | " << board[72] << " | " << board[73] << " | " << board[74] << " | " << board[75] << " | " << board[76] << " | " << board[77] << " | " << board[78] << " | " << board[79] << " | \t\t8 | " << board[170] << " | " << board[171] << " | " << board[172] << " | " << board[173] << " | " << board[174] << " | " << board[175] << " | " << board[176] << " | " << board[177] << " | " << board[178] << " | " << board[179] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t9 | " << board[80] << " | " << board[81] << " | " << board[82] << " | " << board[83] << " | " << board[84] << " | " << board[85] << " | " << board[86] << " | " << board[87] << " | " << board[88] << " | " << board[89] << " | \t\t9 | " << board[180] << " | " << board[181] << " | " << board[182] << " | " << board[183] << " | " << board[184] << " | " << board[185] << " | " << board[186] << " | " << board[187] << " | " << board[188] << " | " << board[189] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+";
	cout << "\n\t10| " << board[90] << " | " << board[91] << " | " << board[92] << " | " << board[93] << " | " << board[94] << " | " << board[95] << " | " << board[96] << " | " << board[97] << " | " << board[98] << " | " << board[99] << " | \t\t10| " << board[190] << " | " << board[191] << " | " << board[192] << " | " << board[193] << " | " << board[194] << " | " << board[195] << " | " << board[196] << " | " << board[197] << " | " << board[198] << " | " << board[199] << " | ";
	cout << "\n\t  +---+---+---+---+---+---+---+---+---+---+\t\t  +---+---+---+---+---+---+---+---+---+---+\n\n";
	cout << "\t\t X = Miss \t H = Hit\t\t\t\t S = Ship \t O = Hit Ship\n\n";
	cout << "\t <SSSSS> Carrier, five hits\t <SSSS> Battleship, four hits\t<SSS> Cruiser, three hits\n\t\t\t <SSS> Submarine, three hits \t <SS> Destroyer, two hits\n\n";
}

int Board::shoot()
{
	cout << "What column would you like to shoot in? (A-J): ";
	do
	{
		cin >> columnInput;
		cout << endl;
		if (columnInput == "A")
		{
			column = -1;
			answerCol = true;
		}
		else if (columnInput == "B")
		{
			column = 9;
			answerCol = true;
		}
		else if (columnInput == "C")
		{
			column = 19;
			answerCol = true;
		}
		else if (columnInput == "D")
		{
			column = 29;
			answerCol = true;
		}
		else if (columnInput == "E")
		{
			column = 39;
			answerCol = true;
		}
		else if (columnInput == "F")
		{
			column = 49;
			answerCol = true;
		}
		else if (columnInput == "G")
		{
			column = 59;
			answerCol = true;
		}
		else if (columnInput == "H")
		{
			column = 69;
			answerCol = true;
		}
		else if (columnInput == "I")
		{
			column = 79;
			answerCol = true;
		}
		else if (columnInput == "J")
		{
			column = 89;
			answerCol = true;
		}
		else
		{
			cout << "Please select a column from A-J: ";
			answerCol = false;
		}
	} while (answerCol == false);
	cout << "What row would you like to shoot in? (1-10): ";
	do
	{
		cin >> row;
		cout << endl;
		if (row > 0 && row < 11)
		{
			answerRow = true;
		}
		else
		{
			cout << "Please select a row from 1-10: ";
			answerRow = false;
		}
	} while (answerRow == false);
	shot = column + row;
	system("CLS");
	return shot;
}

