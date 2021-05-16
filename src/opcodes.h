#include "cpu.h"

int hexToDecimalMode(unsigned char hex);
void andOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void aslOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void bccOpcode(unsigned int address, struct CPU *cpu);
void bcsOpcode(unsigned int address, struct CPU *cpu);
void beqOpcode(unsigned int address, struct CPU *cpu);
void bitOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void bmiOpcode(unsigned int address, struct CPU *cpu);
void bneOpcode(unsigned int address, struct CPU *cpu);
void bplOpcode(unsigned int address, struct CPU *cpu);
void bvcOpcode(unsigned int address, struct CPU *cpu);
void bvsOpcode(unsigned int address, struct CPU *cpu);
void clcOpcode(struct CPU *cpu);
void cldOpcode(struct CPU *cpu);
void cliOpcode(struct CPU *cpu);
void clvOpcode(struct CPU *cpu);
void cpxOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void cpyOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void decOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void dexOpcode(unsigned int address, struct CPU *cpu);
void deyOpcode(unsigned int address, struct CPU *cpu);
void incOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void inxOpcode(unsigned int address, struct CPU *cpu);
void inyOpcode(unsigned int address, struct CPU *cpu);
void jmpOpcode(unsigned int address, struct CPU *cpu);
void jsrOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void ldaOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void ldxOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void ldyOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void lsrOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void nopOpcode();
void oraOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void phaOpcode(struct CPU *cpu, struct BUS *bus);
void phpOpcode(struct CPU *cpu, struct BUS *bus);
void plaOpcode(struct CPU *cpu, struct BUS *bus);
void plpOpcode(struct CPU *cpu, struct BUS *bus);
void rolOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void rorOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void rtiOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void rtsOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void secOpcode(struct CPU *cpu);
void sedOpcode(struct CPU *cpu);
void seiOpcode(struct CPU *cpu);
void staOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void stxOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void styOpcode(unsigned int address, struct CPU *cpu, struct BUS *bus);
void taxOpcode(unsigned int address, struct CPU *cpu);
void tayOpcode(unsigned int address, struct CPU *cpu);
void tsxOpcode(unsigned int address, struct CPU *cpu);
void txaOpcode(unsigned int address, struct CPU *cpu);
void txsOpcode(unsigned int address, struct CPU *cpu);
void tyaOpcode(unsigned int address, struct CPU *cpu);

