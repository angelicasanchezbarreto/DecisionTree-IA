#include <iostream>
#include <string>
#include "classes/decision_tree.h"

using namespace std;

int main() {
	DecisionTree decision_tree("data/iris.data","information");
	//decision_tree.print_tree(5);
	decision_tree.generatePDF();
}
