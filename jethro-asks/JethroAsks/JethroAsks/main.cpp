#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
	
	string selected_action_input = "";

	string valid_actions[4] = {
		"treat",
		"pat",
		"play",
		"ignore"
	};

	string selected_action = "";

	cout << "If Jethro is looking at you wide-eyed, what should you do?" << std::endl;
	
	cin >> selected_action_input;

	for (int i = 0; i < 4; i++) {
		if (selected_action_input == valid_actions[i]) {
			selected_action = valid_actions[i];
			break;
		}
		else if (i == 3) {
			selected_action = valid_actions[i];
			cout << "You chose to ignore Jethro." << std::endl;
		}
	}

	if (selected_action == valid_actions[0]) { //treat
		cout << "Jethro sniffs the treat but seems uninterested" << std::endl;
	}
	else if (selected_action == valid_actions[1]) { //pat
		cout << "You choose to pat Jethro. Jethro claws at your face" << std::endl;
	}
	else if (selected_action == valid_actions[2]) { //play
		cout << "You proceed to play with Jethro by throwing his toy. Jethro fetches it and brings it back, but drops it just out of reach." << std::endl;
	}
	else { // ignore
		cout << "You choose to ignore Jethro. This is a very boring game, but gradually his face becomes more zen-like and you survive." << std::endl;
	}

	cout << "\n";
	return 0;
}
