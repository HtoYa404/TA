#include <iostream> 
#include <vector>
#include <algorithm>

struct app{
	int start;
	int end;
};

bool compare(app a, app b){
	return a.end < b.end;
}

int main(void){
	std::vector<app> selectedApps;
	std::vector<app> apps = {{6, 7}, {3, 6}, {1, 3}, {3, 5}, {2, 6}, {1, 5}, {5, 6}, {4, 7}, {2, 4}};
	std::sort(apps.begin(), apps.end(), compare);		
	
	int endTime = apps[0].end;
	selectedApps.push_back(apps[0]);
	for(int i = 1; i < apps.size();++i){
		if(apps[i].start >= endTime){
			selectedApps.push_back(apps[i]);
			endTime = apps[i].end;
		}	
	}
	
	for (const auto &event : selectedApps){
		std::cout << "[" << event.start << "; " << event.end << "], ";
	}
	return 0;
}
