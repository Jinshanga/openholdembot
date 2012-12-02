#ifndef INC_CSYMBOLENGINEDEALERCHAIR_H
#define INC_CSYMBOLENGINEDEALERCHAIR_H

#include "CVirtualSymbolEngine.h"

class CSymbolEngineDealerchair: public CVirtualSymbolEngine
{
public:
	CSymbolEngineDealerchair();
	~CSymbolEngineDealerchair();
public:
	// Mandatory reset-functions
	void InitOnStartup();
	void ResetOnConnection();
	void ResetOnHandreset();
	void ResetOnNewRound();
	void ResetOnMyTurn();
	void ResetOnHeartbeat();
public:
	// Public accessors
	int dealerchair()			{ return _dealerchair; }
private:
	void CalculateDealerChair();
private:
	int _dealerchair;
	int nchairs;
};

#endif INC_CSYMBOLENGINEUSERCHAIR_H