#include<stdio.h>
#include<string.h>
 
#define LDA 0x00
#define ADD 0x18
#define STA 0x0C
#define SUB 0x1C

	int i;
	char *symbols[] = {"const1", "const2", "const3", "const4", "temp"};
	int addresses[] = {0x5015, 0x5018, 0x501B, 0x501D, 0x5021};
	
	int getOpcode(char* mnemonic) {
		if (strcmp(mnemonic, "LDA") == 0) return LDA;
		if (strcmp(mnemonic, "ADD") == 0) return ADD;
		if (strcmp(mnemonic, "STA") == 0) return STA;
		if (strcmp(mnemonic, "SUB") == 0) return SUB;
		return -1;
	}
	
	int getAddress(char* label) {
		for ( i = 0; i < 5; i++) {
		if (strcmp(symbols[i], label) == 0) {
		return addresses[i];
	
	}
	}
		return -1;
	}
	
	int main() {
		FILE *file = fopen("instructions.dat", "r");
		if (file == NULL) {
		printf("Error: Cannot open file.\n");
		return 1;
	}
	
		char line[50], address[10], mnemonic[10], operand[10];
		while (fgets(line, sizeof(line), file)) {
		int parts = sscanf(line, "%s %s %s", address, mnemonic, operand);
		if (parts < 3) {
		continue;
	}
	
		int opcode = getOpcode(mnemonic);
		if (opcode == -1) {
		continue;
	}
	
		int operandAddress = getAddress(operand);
		if (operandAddress == -1) {
		printf("Invalid operand: %s\n", operand);
		continue;
	}
	
		int objectCode = (opcode << 16) | operandAddress;
		printf("%06X\n", objectCode);
	}
	
	fclose(file);
	return 0;
	}
