#pragma once
class Core_8 {
private:
	unsigned short OpCode;
	unsigned char Memory[4096];
	unsigned char Registers[16];
	unsigned short IndexRegister;
	unsigned short ProgramCounter;
	unsigned char Gfx[64 * 32];
	unsigned char Delay_Timer;
	unsigned char Sound_Timer;
	unsigned short Stack[16];
	unsigned short StackPointer;
	unsigned char Keyboard[16];
public:
	Core_8();
	//getters and setters
	//opcode
	short GetOpCode();
	void  SetOpCode(short opcode);
	//memory
	char  GetMemory();
	char  GetMemory(short index);
	void  SetMemory();
	void  SetMemory(short index,char val);
	//registers
	char GetRegisters();
	char GetRegisters(short index);
	void SetRegister();
	void SetRegister(short index,char val);
	//Index and program counter
	short GetIndexRegister();
	short GetProgramCounter();
	void  SetIndexRegister(short indexregister);
	void  SetProgramCounter();
	//Graphics
	char GetGfx();
	char GetGfx(short index);
	void SetGFX();
	void SetGFX(short index, char val);
	//Delay and sound timers
	short GetDelayTimer();
	short GetSoundTimer();
	void  SetDelayTimer(short delayTimer);
	void  SetSoundTimer(short soundTimer);
	
};
