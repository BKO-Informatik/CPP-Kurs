//Taschenrechner(advanced Version)
//Julian Sesterhenn

#include <iostream>
#include <string>

using namespace std;

int main(){

	cout << "Klammer ( verwenden? \n  JA    ->  1 \n  NEIN  ->  2   : ";
	int klammer = 0;
	cin >> klammer; 

	if (klammer == 1){
		cout << "( \n";
	}

	cout << "Erste Zahl eingeben : ";
	double zA = 0;
	cin >> zA;

	if (klammer == 1){
		cout << "( " << zA << endl;
	}
	else {
		cout << zA << endl;
	}
	cout << "Ersten Operator wählen :\n +  ->  1\n -  ->  2\n *  ->  3\n /  ->  4\n";
	int o1 = 0;
	cin >> o1;

	if (klammer == 1){
		switch (o1){
		case 1:
			cout << "( " << zA << " +\n";
			break;
		case 2:
			cout << "( " << zA << " -\n";
			break;
		case 3:
			cout << "( " << zA << " *\n";
			break;
		case 4:
			cout << "( " << zA << " /\n";
			break;
		}
	

	}
	else {
		switch (o1){
		case 1:
			cout << zA << " +\n";
			break;
		case 2:
			cout << zA << " -\n";
			break;
		case 3:
			cout << zA << " *\n";
			break;
		case 4:
			cout << zA << " /\n";
			break;
		}
	}
	int klammer2 = 0;
	if (klammer == 2){
		
		cout << "Klammer ( verwenden?\n  JA    ->  1\n  NEIN  ->  2\n";
		
		cin >> klammer2;
		if (klammer2 == 1){
			switch (o1){
			case 1:
				cout << zA << " + (\n";
				break;
			case 2:
				cout << zA << " - (\n";
				break;
			case 3:
				cout << zA << " * (\n";
				break;
			case 4:
				cout << zA << " / (\n";
				break;
			}
		}
		else if (klammer2 == 2){
			switch (o1){
			case 1:
				cout << zA << " +\n";
				break;
			case 2:
				cout << zA << " -\n";
				break;
			case 3:
				cout << zA << " *\n";
				break;
			case 4:
				cout << zA << " /\n";
				break;
			}
		}
	}
	cout << "Zweite Zahl Wählen: ";
	double zB = 0;
	cin >> zB;
	if (klammer == 1){
		switch (o1){
		case 1:
			cout << "( " << zA << " + " << zB <<" )\n";
			break;
		case 2:
			cout << "( " << zA << " - " << zB <<" )\n";
			break;
		case 3:
			cout << "( " << zA << " * " << zB <<" )\n";
			break;
		case 4:
			cout << "( " << zA << " / " << zB <<" )\n";
			break;
		}
	}

	else if (klammer2 == 1){
		switch (o1){
		case 1:
			cout << zA << " + ( " << zB <<"\n";
			break;
		case 2:
			cout << zA << " - ( " << zB <<"\n";
			break;
		case 3:
			cout << zA << " * ( " << zB<<"\n";
			break;
		case 4:
			cout << zA << " / ( " << zB <<"\n";
			break; 
		}
	}

	else if (klammer2 == 2){
		switch (o1){
		case 1:
			cout << zA << " + " << zB <<"\n";
			break;
		case 2:
			cout << zA << " - " << zB <<"\n";
			break;
		case 3:
			cout << zA << " * " << zB <<"\n";
			break;
		case 4:
			cout << zA << " / " << zB <<"\n";
			break;
		}

	}

	cout << "Zweiten Operator wählen :\n +  ->  1\n -  ->  2\n *  ->  3\n /  ->  4\n";
	int o2 = 0;
	cin >> o2;

	if (klammer == 1){
		switch (o1){
		case 1:
			switch (o2){
			case 1:
				cout << "( " << zA << " + " << zB << " ) +\n";
				break;
			case 2:
				cout << "( " << zA << " + " << zB << " ) -\n";
				break;
			case 3:
				cout << "( " << zA << " + " << zB << " ) *\n";
				break;
			case 4:
				cout << "( " << zA << " + " << zB << " ) /\n";
				break;
			}
			break;
		case 2:
			switch (o2){
			case 1:
				cout << "( " << zA << " - " << zB << " ) +\n";
				break;
			case 2:
				cout << "( " << zA << " - " << zB << " ) -\n";
				break;
			case 3:
				cout << "( " << zA << " - " << zB << " ) *\n";
				break;
			case 4:
				cout << "( " << zA << " - " << zB << " ) /\n";
				break;
			}
			break;
		case 3:
			switch (o2){
			case 1:
				cout << "( " << zA << " * " << zB << " ) +\n";
				break;
			case 2:
				cout << "( " << zA << " * " << zB << " ) -\n";
				break;
			case 3:
				cout << "( " << zA << " * " << zB << " ) *\n";
				break;
			case 4:
				cout << "( " << zA << " * " << zB << " ) /\n";
				break;
			}
			break;
		case 4:
			switch (o2){
			case 1:
				cout << "( " << zA << " / " << zB << " ) +\n";
				break;
			case 2:
				cout << "( " << zA << " / " << zB << " ) -\n";
				break;
			case 3:
				cout << "( " << zA << " / " << zB << " ) *\n";
				break;
			case 4:
				cout << "( " << zA << " / " << zB << " ) /\n";
				break;
			}
			break;
		}
	}
	else if (klammer2 == 1){
		switch (o1){
		case 1:
			switch (o2){
			case 1:
				cout << zA << " + ( " << zB << " +\n";
				break;
			case 2:
				cout << zA << " + ( " << zB << " -\n";
				break;
			case 3:
				cout << zA << " + ( " << zB << " *\n";
				break;
			case 4:
				cout << zA << " + ( " << zB << " /\n";
				break;
			}
			break;
		case 2:
			switch (o2){
			case 1:
				cout << zA << " - ( " << zB << " +\n";
				break;
			case 2:
				cout << zA << " - ( " << zB << " -\n";
				break;
			case 3:
				cout << zA << " - ( " << zB << " *\n";
				break;
			case 4:
				cout << zA << " - ( " << zB << " /\n";
				break;
			}
			break;
		case 3:
			switch (o2){
			case 1:
				cout << zA << " * ( " << zB << " +\n";
				break;
			case 2:
				cout << zA << " * ( " << zB << " *\n";
				break;
			case 3:
				cout << zA << " * ( " << zB << " -\n";
				break;
			case 4:
				cout << zA << " * ( " << zB << " /\n";
				break;
			}
			break;
		case 4:
			switch (o2){
			case 1:
				cout << zA << " / ( " << zB << " +\n";
				break;
			case 2:
				cout << zA << " / ( " << zB << " -\n";
				break;
			case 3:
				cout << zA << " / ( " << zB << " *\n";
				break;
			case 4:
				cout << zA << " / ( " << zB << " /\n";
				break;
			}
			break;
		}
	}

	else if (klammer == 2){
		if (klammer2 == 2){
			switch (o1){
			case 1:
				switch (o2){
				case 1:
					cout << zA << " + " << zB << " +\n";
					break;
				case 2:
					cout << zA << " +" << zB << " -\n";
					break;
				case 3:
					cout << zA << " + " << zB << " *\n";
					break;
				case 4:
					cout << zA << " + " << zB << " /\n";
					break;
				}
				break;
			case 2:
				switch (o2){
				case 1:
					cout << zA << " - " << zB << " +\n";
					break;
				case 2:
					cout << zA << " - " << zB << " -\n";
					break;
				case 3:
					cout << zA << " - " << zB << " *\n";
					break;
				case 4:
					cout << zA << " - " << zB << " /\n";
					break;
				}
				break;
			case 3:
				switch (o2){
				case 1:
					cout << zA << " * " << zB << " +\n";
					break;
				case 2:
					cout << zA << " * " << zB << " -\n";
					break;
				case 3:
					cout << zA << " * " << zB << " *\n";
					break;
				case 4:
					cout << zA << " * " << zB << " /\n";
					break;
				}
				break;
			case 4:
				switch (o2){
				case 1:
					cout << zA << " / " << zB << " +\n";
					break;
				case 2:
					cout << zA << " / " << zB << " -\n";
					break;
				case 3:
					cout << zA << " / " << zB << " *\n";
					break;
				case 4:
					cout << zA << " / " << zB << " /\n";
					break;
				}
				break;
			}
		}
	}

	cout << "Dritte Zahl wählen: ";
	double zC = 0;
	cin >> zC;
		
	if (klammer == 1){
		switch (o1){
		case 1:
			switch (o2){
			case 1:
				cout << "( " << zA << " + " << zB << " ) + " << zC <<"\n";
				cout << "= ( " <<(zA + zB) << " ) + " << zC << "\n";
				cout << "= " <<(zA + zB) + zC << "\n";
				break;
			case 2:
				cout << "( " << zA << " + " << zB << " ) - " << zC << "\n";
				cout << "= ( " << (zA + zB) << " ) - " << zC << "\n";
				cout << "= " << (zA + zB) - zC << "\n";
				break;
			case 3:
				cout << "( " << zA << " + " << zB << " ) * " << zC << "\n";
				cout << "= ( " << (zA + zB) << " ) * " << zC << "\n";
				cout << "= " << (zA + zB) * zC << "\n";
				break;
			case 4:
				cout << "( " << zA << " + " << zB << " ) / " << zC << "\n";
				cout << "= ( " << (zA + zB) << " ) / " << zC << "\n";
				cout << "= " << (zA + zB) / zC << "\n";
				break;
			}
			break;
		case 2:
			switch (o2){
			case 1:
				cout << "( " << zA << " - " << zB << " ) + " << zC << "\n";
				cout << "= ( " << (zA - zB) << " ) + " << zC << "\n";
				cout << "= " << (zA - zB) + zC << "\n";
				break;
			case 2:
				cout << "( " << zA << " - " << zB << " ) - " << zC << "\n";
				cout << "= ( " << (zA - zB) << " ) - " << zC << "\n";
				cout << "= " << (zA - zB) - zC << "\n";
				break;
			case 3:
				cout << "( " << zA << " - " << zB << " ) * " << zC << "\n";
				cout << "= ( " << (zA - zB) << " ) * " << zC << "\n";
				cout << "= " << (zA - zB) * zC << "\n";
				break;
			case 4:
				cout << "( " << zA << " - " << zB << " ) / " << zC << "\n";
				cout << "= ( " << (zA - zB) << " ) / " << zC << "\n";
				cout << "= " << (zA - zB) / zC << "\n";
				break;
			}
			break;
		case 3:
			switch (o2){
			case 1:
				cout << "( " << zA << " * " << zB << " ) + " << zC << "\n";
				cout << "= ( " << (zA * zB) << " ) + " << zC << "\n";
				cout << "= " << (zA * zB) + zC << "\n";
				break;
			case 2:
				cout << "( " << zA << " * " << zB << " ) - " << zC << "\n";
				cout << "= ( " << (zA * zB) << " ) - " << zC << "\n";
				cout << "= " << (zA * zB) - zC << "\n";
				break;
			case 3:
				cout << "( " << zA << " * " << zB << " ) * " << zC << "\n";
				cout << "= ( " << (zA * zB) << " ) * " << zC << "\n";
				cout << "= " << (zA * zB) * zC << "\n";
				break;
			case 4:
				cout << "( " << zA << " * " << zB << " ) / " << zC << "\n";
				cout << "= ( " << (zA * zB) << " ) / " << zC << "\n";
				cout << "= " << (zA * zB) / zC << "\n";
				break;
			}
			break;
		case 4:
			switch (o2){
			case 1:
				cout << "( " << zA << " / " << zB << " ) + " << zC << "\n";
				cout << "= ( " << (zA / zB) << " ) + " << zC << "\n";
				cout << "= " << (zA / zB) + zC << "\n";
				break;
			case 2:
				cout << "( " << zA << " / " << zB << " ) - " << zC << "\n";
				cout << "= ( " << (zA / zB) << " ) - " << zC << "\n";
				cout << "= " << (zA / zB) - zC << "\n";
				break;
			case 3:
				cout << "( " << zA << " / " << zB << " ) * " << zC << "\n";
				cout << "= ( " << (zA / zB) << " ) * " << zC << "\n";
				cout << "= " << (zA / zB) * zC << "\n";
				break;
			case 4:
				cout << "( " << zA << " / " << zB << " ) / " << zC << "\n";
				cout << "= ( " << (zA / zB) << " ) / " << zC << "\n";
				cout << "= " << (zA / zB) / zC << "\n";
				break;
			}
			break;
		}
	}
	else if (klammer2 == 1){
		switch (o1){
		case 1:
			switch (o2){
			case 1:
				cout << zA << " + ( " << zB << " + " << zC <<" )\n";
				cout << "= " << zA << " + ( " << (zB + zC) << " )\n";
				cout << "= " << zA + (zB + zC) << "\n";
				break;
			case 2:
				cout << zA << " + ( " << zB << " - " << zC << " )\n";
				cout << "= " << zA << " + ( " << (zB - zC) << " )\n";
				cout << "= " << zA + (zB - zC) << "\n";
				break;
			case 3:
				cout << zA << " + ( " << zB << " * " << zC << " )\n";
				cout << "= " << zA << " + ( " << (zB * zC) << " )\n";
				cout << "= " << zA + (zB * zC) << "\n";
				break;
			case 4:
				cout << zA << " + ( " << zB << " / " << zC << " )\n";
				cout << "= " << zA << " + ( " << (zB / zC) << " )\n";
				cout << "= " << zA + (zB / zC) << "\n";
				break;
			}
			break;
		case 2:
			switch (o2){
			case 1:
				cout << zA << " - ( " << zB << " + " << zC << " )\n";
				cout << "= " << zA << " - ( " << (zB + zC) << " )\n";
				cout << "= " << zA - (zB + zC) << "\n";
					break;
			case 2:
				cout << zA << " - ( " << zB << " - " << zC << " )\n";
				cout << "= " << zA << " - ( " << (zB - zC) << " )\n";
				cout << "= " << zA - (zB - zC) << "\n";
					break;
			case 3:
				cout << zA << " - ( " << zB << " * " << zC << " )\n";
				cout << "= " << zA << " - ( " << (zB * zC) << " )\n";
				cout << "= " << zA - (zB * zC) << "\n";
					break;
			case 4:
				cout << zA << " - ( " << zB << " / " << zC << " )\n";
				cout << "= " << zA << " - ( " << (zB / zC) << " )\n";
				cout << "= " << zA - (zB / zC) << "\n";
					break;
			}
			break;
		case 3:
			switch (o2){
			case 1:
				cout << zA << " * ( " << zB << " + " << zC << " )\n";
				cout << "= " << zA << " * ( " << (zB + zC) << " )\n";
				cout << "= " << zA * (zB + zC) << "\n";
					break;
			case 2:
				cout << zA << " * ( " << zB << " - " << zC << " )\n";
				cout << "= " << zA << " * ( " << (zB - zC) << " )\n";
				cout << "= " << zA * (zB - zC) << "\n";
					break;
			case 3:
				cout << zA << " * ( " << zB << " * " << zC << " )\n";
				cout << "= " << zA << " * ( " << (zB * zC) << " )\n";
				cout << "= " << zA * (zB * zC) << "\n";
					break;
			case 4:
				cout << zA << " * ( " << zB << " / " << zC << " )\n";
				cout << "= " << zA << " * ( " << (zB / zC) << " )\n";
				cout << "= " << zA * (zB / zC) << "\n";
					break;
			}
			break;
		case 4:
			switch (o2){
			case 1:
				cout << zA << " / ( " << zB << " + " << zC << " )\n";
				cout << "= " << zA << " / ( " << (zB + zC) << " )\n";
				cout << "= " << zA / (zB + zC) << "\n";
					break;
			case 2:
				cout << zA << " / ( " << zB << " - " << zC << " )\n";
				cout << "= " << zA << " / ( " << (zB - zC) << " )\n";
				cout << "= " << zA / (zB - zC) << "\n";
					break;
			case 3:
				cout << zA << " / ( " << zB << " * " << zC << " )\n";
				cout << "= " << zA << " / ( " << (zB * zC) << " )\n";
				cout << "= " << zA / (zB * zC) << "\n";
					break;
			case 4:
				cout << zA << " / ( " << zB << " / " << zC << " )\n";
				cout << "= " << zA << " / ( " << (zB / zC) << " )\n";
				cout << "= " << zA / (zB / zC) << "\n";
					break;
			}
			break;
		}
	}

	else if (klammer == 2){
		if (klammer2 == 2){
			switch (o1){
			case 1:
				switch (o2){
				case 1:
					cout << zA << " + " << zB << " + " << zC <<"\n";
					cout << "= " << zA + zB + zC << "\n";
					break;
				case 2:
					cout << zA << " + " << zB << " - " << zC <<"\n";
					cout << "= " << zA + zB - zC << "\n";
					break;
				case 3:
					cout << zA << " + " << zB << " * " << zC <<"\n";
					cout << "= " << zA + (zB * zC) << "\n";
					break;
				case 4:
					cout << zA << " + " << zB << " / " << zC <<"\n";
					cout << "= " << zA + (zB / zC) << "\n";
					break;
				}
				break;
			case 2:
				switch (o2){
				case 1:
					cout << zA << " - " << zB << " + " << zC << "\n";
					cout << "= " << zA - zB + zC << "\n";
					break;
				case 2:
					cout << zA << " - " << zB << " - " << zC << "\n";
					cout << "= " << zA - zB - zC << "\n";
					break;
				case 3:
					cout << zA << " - " << zB << " * " << zC << "\n";
					cout << "= " << zA - (zB * zC) << "\n";
					break;
				case 4:
					cout << zA << " - " << zB << " / " << zC << "\n";
					cout << "= " << zA - (zB / zC) << "\n";
					break;
				}
				break;
			case 3:
				switch (o2){
				case 1:
					cout << zA << " * " << zB << " + " << zC << "\n";
					cout << "= " << (zA * zB) + zC << "\n";
					break;
				case 2:
					cout << zA << " * " << zB << " - " << zC << "\n";
					cout << "= " << (zA * zB) - zC << "\n";
					break;
				case 3:
					cout << zA << " * " << zB << " * " << zC << "\n";
					cout << "= " << zA * zB * zC << "\n";
					break;
				case 4:
					cout << zA << " * " << zB << " / " << zC << "\n";
					cout << "= " << zA * zB / zC << "\n";
					break;
				}
				break;
			case 4:
				switch (o2){
				case 1:
					cout << zA << " / " << zB << " + " << zC << "\n";
					cout << "= " << (zA / zB) + zC << "\n";
					break;
				case 2:
					cout << zA << " / " << zB << " - " << zC << "\n";
					cout << "= " << (zA / zB) - zC << "\n";
					break;
				case 3:
					cout << zA << " / " << zB << " * " << zC << "\n";
					cout << "= " << zA / zB * zC << "\n";
					break;
				case 4:
					cout << zA << " / " << zB << " / " << zC << "\n";
					cout << "= " << zA / zB / zC << "\n";
					break;
				}
				break;
			}
		}
	}
	string tmp;
	getline(cin, tmp);
	getline(cin, tmp);



}