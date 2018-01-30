#include "lpc17xx_pinsel.h"

class Serial
{
	protected:
		void init();
		int module;
	public:
		Serial();
		int write(char * buf, int length);
		void printf(char * buf, ...);
		void sendbreak();
};

