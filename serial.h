#include "lpc17xx_pinsel.h"

class Serial
{
	protected:
		void init();
		int module;
	public:
		Serial();
		int write(const char * buf);
		void printf(char * buf, ...);
};

