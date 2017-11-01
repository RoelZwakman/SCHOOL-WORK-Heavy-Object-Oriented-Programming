#include "hogesnelheidstrein.h"

hogesnelheidstrein::hogesnelheidstrein(int _capaciteit, float _kmprijs, float _toeslag, bool _heeftToeslag){
	void hogesnelheidstrein::berekenprijs(int km) {
		return ((price + toeslag) * km) * capacity;
	}
}