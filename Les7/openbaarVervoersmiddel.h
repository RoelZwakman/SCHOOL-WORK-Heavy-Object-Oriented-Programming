#pragma once

class openbaarVervoersmiddel
{
	public:
		openbaarVervoersmiddel();
		int capaciteit;
		float prijs;

		float extraToeslag;
		bool heeftToeslag;

		void vraagcapaciteit();
		virtual void berekenprijs();

		
};