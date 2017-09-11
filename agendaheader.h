class Week
{
	private: 
		int size;

	public:
		class Day
		{
			private:
				int width;

			public:
				class PlannedEvent
				{
				private:
					int width, height, durationinminutes;
					double transparancy;
	
				public:
					PlannedEvent(int w, int h, double a, int dur);
					float calculateDuration(int hoursa, int hoursb, int minutesa, int minutesb);
					void setNewSize(int w, int h);
				};
		
				Day(int w);
				void addEventToDay(PlannedEvent eventToAdd);
		};

		Week(int s);
		void populateWeek(Day monday, Day tuesday, Day wednesday, Day thursday, Day friday, Day saturday, Day sunday);
		void renderWeek(int week);

};