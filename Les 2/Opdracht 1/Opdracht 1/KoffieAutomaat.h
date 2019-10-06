#include "KoffieMuntje.h"
#include "Euro.h"
#include "HalveEuro.h"
#include <string>
class KoffieAutomaat
{
public:
	KoffieAutomaat();

	void BuyCoffee(HalveEuro _munt);
	void BuyCoffee(Euro _munt);
	void BuyCoffee(KoffieMuntje _munt);
		

};
